
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct run_softc {int* txpow1; int* txpow2; int ntxchains; int* txpow3; int bbp25; int bbp26; int rf24_20mhz; } ;
typedef int int8_t ;
struct TYPE_4__ {int chan; } ;
struct TYPE_3__ {int n; int k; int r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_0 (struct run_softc*) ;
 int FUNC_1 (struct run_softc*,int,int) ;
 int FUNC_2 (struct run_softc*,int,int*) ;
 int FUNC_3 (struct run_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct run_softc *VAR_11, u_int VAR_12)
{
 int8_t VAR_13, VAR_14, VAR_15;
 uint8_t VAR_16, VAR_17;
 int VAR_18;


 for (VAR_18 = 0; VAR_9[VAR_18].chan != VAR_12; VAR_18++);


 VAR_13 = VAR_11->txpow1[VAR_18];
 VAR_14 = VAR_11->txpow2[VAR_18];
 VAR_15 = (VAR_11->ntxchains == 3) ? VAR_11->txpow3[VAR_18] : 0;

 if (VAR_12 <= 14) {
  FUNC_1(VAR_11, 25, VAR_11->bbp25);
  FUNC_1(VAR_11, 26, VAR_11->bbp26);
 } else {

  FUNC_1(VAR_11, 25, 0x09);
  FUNC_1(VAR_11, 26, 0xff);
 }

 FUNC_3(VAR_11, 8, VAR_10[VAR_18].n);
 FUNC_3(VAR_11, 9, VAR_10[VAR_18].k & 0x0f);
 FUNC_2(VAR_11, 11, &VAR_17);
 VAR_17 = (VAR_17 & ~0x03) | (VAR_10[VAR_18].r & 0x03);
 FUNC_3(VAR_11, 11, VAR_17);


 FUNC_2(VAR_11, 11, &VAR_17);
 VAR_17 &= ~0x4c;
 VAR_17 |= (VAR_12 <= 14) ? 0x44 : 0x48;
 FUNC_3(VAR_11, 11, VAR_17);

 if (VAR_12 <= 14)
  VAR_17 = VAR_13 & 0x1f;
 else
  VAR_17 = 0x40 | ((VAR_13 & 0x18) << 1) | (VAR_13 & 0x07);
 FUNC_3(VAR_11, 53, VAR_17);

 if (VAR_12 <= 14)
  VAR_17 = VAR_14 & 0x1f;
 else
  VAR_17 = 0x40 | ((VAR_14 & 0x18) << 1) | (VAR_14 & 0x07);
 FUNC_3(VAR_11, 55, VAR_17);

 if (VAR_12 <= 14)
  VAR_17 = VAR_15 & 0x1f;
 else
  VAR_17 = 0x40 | ((VAR_15 & 0x18) << 1) | (VAR_15 & 0x07);
 FUNC_3(VAR_11, 54, VAR_17);

 VAR_17 = VAR_1 | VAR_0;
 if (VAR_11->ntxchains == 3)
  VAR_17 |= VAR_5 | VAR_6 | VAR_7;
 else
  VAR_17 |= VAR_5 | VAR_6;
 VAR_17 |= VAR_2 | VAR_3 | VAR_4;
 FUNC_3(VAR_11, 1, VAR_17);

 FUNC_0(VAR_11);

 FUNC_3(VAR_11, 31, (VAR_12 <= 14) ? 0xa0 : 0x80);

 VAR_16 = (VAR_11->rf24_20mhz & 0x20) >> 5;
 FUNC_2(VAR_11, 30, &VAR_17);
 VAR_17 = (VAR_17 & ~0x06) | (VAR_16 << 1) | (VAR_16 << 2);
 FUNC_3(VAR_11, 30, VAR_17);

 FUNC_2(VAR_11, 36, &VAR_17);
 if (VAR_12 <= 14)
  VAR_17 |= 0x80;
 else
  VAR_17 &= ~0x80;
 FUNC_3(VAR_11, 36, VAR_17);


 FUNC_3(VAR_11, 34, (VAR_12 <= 14) ? 0x3c : 0x20);

 FUNC_3(VAR_11, 12, (VAR_12 <= 14) ? 0x1a : 0x12);


 FUNC_2(VAR_11, 6, &VAR_17);
 VAR_17 &= ~0xc0;
 if (VAR_12 <= 14)
  VAR_17 |= 0x40;
 else if (VAR_12 <= 128)
  VAR_17 |= 0x80;
 else
  VAR_17 |= 0x40;
 FUNC_3(VAR_11, 6, VAR_17);

 FUNC_2(VAR_11, 30, &VAR_17);
 VAR_17 = (VAR_17 & ~0x18) | 0x10;
 FUNC_3(VAR_11, 30, VAR_17);

 FUNC_3(VAR_11, 10, (VAR_12 <= 14) ? 0xd3 : 0xd8);
 FUNC_3(VAR_11, 13, (VAR_12 <= 14) ? 0x12 : 0x23);

 FUNC_2(VAR_11, 51, &VAR_17);
 VAR_17 = (VAR_17 & ~0x03) | 0x01;
 FUNC_3(VAR_11, 51, VAR_17);

 FUNC_2(VAR_11, 51, &VAR_17);
 VAR_17 &= ~0x1c;
 VAR_17 |= (VAR_12 <= 14) ? 0x14 : 0x10;
 FUNC_3(VAR_11, 51, VAR_17);

 FUNC_2(VAR_11, 51, &VAR_17);
 VAR_17 &= ~0xe0;
 VAR_17 |= (VAR_12 <= 14) ? 0x60 : 0x40;
 FUNC_3(VAR_11, 51, VAR_17);

 FUNC_2(VAR_11, 49, &VAR_17);
 VAR_17 &= ~0x1c;
 VAR_17 |= (VAR_12 <= 14) ? 0x0c : 0x08;
 FUNC_3(VAR_11, 49, VAR_17);

 FUNC_2(VAR_11, 50, &VAR_17);
 FUNC_3(VAR_11, 50, VAR_17 & ~0x20);

 FUNC_2(VAR_11, 57, &VAR_17);
 VAR_17 &= ~0xfc;
 VAR_17 |= (VAR_12 <= 14) ? 0x6c : 0x3c;
 FUNC_3(VAR_11, 57, VAR_17);

 FUNC_3(VAR_11, 44, (VAR_12 <= 14) ? 0x93 : 0x9b);

 FUNC_3(VAR_11, 52, (VAR_12 <= 14) ? 0x45 : 0x05);

 FUNC_2(VAR_11, 3, &VAR_17);
 VAR_17 &= ~VAR_8;
 VAR_17 |= (VAR_12 <= 14) ? VAR_8 : 0xbe;
 FUNC_3(VAR_11, 3, VAR_17);

 if (VAR_12 <= 14)
  VAR_17 = 0x23;
 else if (VAR_12 <= 64)
  VAR_17 = 0x36;
 else if (VAR_12 <= 128)
  VAR_17 = 0x32;
 else
  VAR_17 = 0x30;
 FUNC_3(VAR_11, 39, VAR_17);
 if (VAR_12 <= 14)
  VAR_17 = 0xbb;
 else if (VAR_12 <= 64)
  VAR_17 = 0xeb;
 else if (VAR_12 <= 128)
  VAR_17 = 0xb3;
 else
  VAR_17 = 0x9b;
 FUNC_3(VAR_11, 45, VAR_17);


 FUNC_1(VAR_11, 105, 0x34);
}
