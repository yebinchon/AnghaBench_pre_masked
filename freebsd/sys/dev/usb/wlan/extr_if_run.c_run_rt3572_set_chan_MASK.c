
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct run_softc {int* txpow1; int* txpow2; int bbp25; int bbp26; int ntxchains; int nrxchains; int freq; int rf24_20mhz; int txmixgain_2ghz; int txmixgain_5ghz; } ;
typedef int int8_t ;
struct TYPE_4__ {int chan; } ;
struct TYPE_3__ {int n; int k; int r; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct run_softc*,int,int) ;
 int FUNC_1 (struct run_softc*,int) ;
 int FUNC_2 (struct run_softc*,int ,int*) ;
 int FUNC_3 (struct run_softc*,int,int*) ;
 int FUNC_4 (struct run_softc*,int,int) ;
 int FUNC_5 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct run_softc *VAR_3, u_int VAR_4)
{
 int8_t VAR_5, VAR_6;
 uint32_t VAR_7;
 uint8_t VAR_8;
 int VAR_9;


 for (VAR_9 = 0; VAR_1[VAR_9].chan != VAR_4; VAR_9++);


 VAR_5 = VAR_3->txpow1[VAR_9];
 VAR_6 = VAR_3->txpow2[VAR_9];

 if (VAR_4 <= 14) {
  FUNC_0(VAR_3, 25, VAR_3->bbp25);
  FUNC_0(VAR_3, 26, VAR_3->bbp26);
 } else {

  FUNC_0(VAR_3, 25, 0x09);
  FUNC_0(VAR_3, 26, 0xff);
 }

 FUNC_4(VAR_3, 2, VAR_2[VAR_9].n);
 FUNC_4(VAR_3, 3, VAR_2[VAR_9].k);
 FUNC_3(VAR_3, 6, &VAR_8);
 VAR_8 = (VAR_8 & ~0x0f) | VAR_2[VAR_9].r;
 VAR_8 |= (VAR_4 <= 14) ? 0x08 : 0x04;
 FUNC_4(VAR_3, 6, VAR_8);


 FUNC_3(VAR_3, 5, &VAR_8);
 VAR_8 &= ~(0x08 | 0x04);
 VAR_8 |= (VAR_4 <= 14) ? 0x04 : 0x08;
 FUNC_4(VAR_3, 5, VAR_8);


 if (VAR_4 <= 14)
  VAR_8 = 0x60 | VAR_5;
 else
  VAR_8 = 0xe0 | (VAR_5 & 0xc) << 1 | (VAR_5 & 0x3);
 FUNC_4(VAR_3, 12, VAR_8);


 if (VAR_4 <= 14)
  VAR_8 = 0x60 | VAR_6;
 else
  VAR_8 = 0xe0 | (VAR_6 & 0xc) << 1 | (VAR_6 & 0x3);
 FUNC_4(VAR_3, 13, VAR_8);


 FUNC_3(VAR_3, 1, &VAR_8);
 VAR_8 &= ~0xfc;
 if (VAR_3->ntxchains == 1)
  VAR_8 |= 1 << 7 | 1 << 5;
 else if (VAR_3->ntxchains == 2)
  VAR_8 |= 1 << 7;
 if (VAR_3->nrxchains == 1)
  VAR_8 |= 1 << 6 | 1 << 4;
 else if (VAR_3->nrxchains == 2)
  VAR_8 |= 1 << 6;
 FUNC_4(VAR_3, 1, VAR_8);


 FUNC_3(VAR_3, 23, &VAR_8);
 VAR_8 = (VAR_8 & ~0x7f) | VAR_3->freq;
 FUNC_4(VAR_3, 23, VAR_8);


 VAR_8 = VAR_3->rf24_20mhz;
 FUNC_4(VAR_3, 24, VAR_8);
 FUNC_4(VAR_3, 31, VAR_8);


 FUNC_3(VAR_3, 7, &VAR_8);
 VAR_8 = (VAR_4 <= 14) ? 0xd8 : ((VAR_8 & ~0xc8) | 0x14);
 FUNC_4(VAR_3, 7, VAR_8);


 VAR_8 = (VAR_4 <= 14) ? 0xc3 : 0xc0;
 FUNC_4(VAR_3, 9, VAR_8);


 FUNC_4(VAR_3, 10, 0xf1);

 FUNC_4(VAR_3, 11, (VAR_4 <= 14) ? 0xb9 : 0x00);


 FUNC_4(VAR_3, 15, (VAR_4 <= 14) ? 0x53 : 0x43);

 if (VAR_4 <= 14)
  VAR_8 = 0x48 | VAR_3->txmixgain_2ghz;
 else
  VAR_8 = 0x78 | VAR_3->txmixgain_5ghz;
 FUNC_4(VAR_3, 16, VAR_8);


 FUNC_4(VAR_3, 17, 0x23);

 if (VAR_4 <= 14)
  VAR_8 = 0x93;
 else if (VAR_4 <= 64)
  VAR_8 = 0xb7;
 else if (VAR_4 <= 128)
  VAR_8 = 0x74;
 else
  VAR_8 = 0x72;
 FUNC_4(VAR_3, 19, VAR_8);


 if (VAR_4 <= 14)
  VAR_8 = 0xb3;
 else if (VAR_4 <= 64)
  VAR_8 = 0xf6;
 else if (VAR_4 <= 128)
  VAR_8 = 0xf4;
 else
  VAR_8 = 0xf3;
 FUNC_4(VAR_3, 20, VAR_8);


 if (VAR_4 <= 14)
  VAR_8 = 0x15;
 else if (VAR_4 <= 64)
  VAR_8 = 0x3d;
 else
  VAR_8 = 0x01;
 FUNC_4(VAR_3, 25, VAR_8);


 FUNC_4(VAR_3, 26, (VAR_4 <= 14) ? 0x85 : 0x87);

 FUNC_4(VAR_3, 27, (VAR_4 <= 14) ? 0x00 : 0x01);

 FUNC_4(VAR_3, 29, (VAR_4 <= 14) ? 0x9b : 0x9f);

 FUNC_2(VAR_3, VAR_0, &VAR_7);
 VAR_7 &= ~0x8080;
 if (VAR_4 <= 14)
  VAR_7 |= 0x80;
 FUNC_5(VAR_3, VAR_0, VAR_7);


 FUNC_3(VAR_3, 7, &VAR_8);
 FUNC_4(VAR_3, 7, VAR_8 | 0x01);

 FUNC_1(VAR_3, 2);
}
