#include <iostream>
using namespace std;

// Fungsi untuk menghitung total bayar setelah diskon 2%
double hitungTotal(double harga, int jumlah) {
    double total = harga * jumlah;
    double diskon = total * 0.02;
    double totalBayar = total - diskon;
    
    // Menampilkan informasi diskon
    cout << "Diskon (2%): " << diskon << endl;
    cout << "Total bayar sebelum diskon: " << total << endl;
    
    return totalBayar;
}

int main() {
    cout << "Nama: Rozian Fadila" << endl; // Menampilkan nama
    cout << "NIM: 5520122037" << endl; // Menampilkan NIM
    cout << "Prodi: Informatika" << endl; // Menampilkan prodi
    cout << "=== Kasir Toko ABC ===" << endl;
    double totalSemua = 0;

    while (true) {
        string namaBarang;
        int jumlahBarang;
        double hargaBarang;

        cout << "Masukkan nama barang (kosongkan untuk selesai): ";
        getline(cin, namaBarang);
        if (namaBarang.empty()) {
            break;
        }

        cout << "Masukkan jumlah barang: ";
        cin >> jumlahBarang;

        cout << "Masukkan harga barang: ";
        cin >> hargaBarang;

        // Membersihkan buffer input
        cin.ignore();

        double totalBarang = hitungTotal(hargaBarang, jumlahBarang);
        totalSemua += totalBarang;

        cout << "Total barang yang dibeli: " << jumlahBarang << endl;
        cout << "Total bayar: " << totalSemua << endl;
    }

    cout << "Total semua barang yang dibeli: " << totalSemua << endl;

    return 0;
}
