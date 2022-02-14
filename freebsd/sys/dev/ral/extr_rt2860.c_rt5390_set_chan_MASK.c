
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct rt2860_softc {int* txpow1; int* txpow2; int mac_ver; int freq; int rf24_20mhz; } ;
typedef int int8_t ;
struct TYPE_4__ {int chan; } ;
struct TYPE_3__ {int n; int k; int r; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct rt2860_softc*,int,int,int ) ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_4 (struct rt2860_softc*,int) ;
 int FUNC_5 (struct rt2860_softc*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct rt2860_softc *VAR_10, u_int VAR_11)
{
 uint8_t VAR_12, VAR_13, VAR_14;
 int8_t VAR_15, VAR_16;
 int VAR_17;


 FUNC_1(VAR_11 >= 1 && VAR_11 <= 14, ("chan %d not support", VAR_11));


 for (VAR_17 = 0; VAR_8[VAR_17].chan != VAR_11; VAR_17++);


 VAR_15 = VAR_10->txpow1[VAR_17];
 VAR_16 = VAR_10->txpow2[VAR_17];

 FUNC_5(VAR_10, 8, VAR_9[VAR_17].n);
 FUNC_5(VAR_10, 9, VAR_9[VAR_17].k & 0x0f);
 VAR_13 = FUNC_4(VAR_10, 11);
 VAR_13 = (VAR_13 & ~0x03) | (VAR_9[VAR_17].r & 0x03);
 FUNC_5(VAR_10, 11, VAR_13);

 VAR_13 = FUNC_4(VAR_10, 49);
 VAR_13 = (VAR_13 & ~0x3f) | (VAR_15 & 0x3f);

 if ((VAR_13 & 0x3f) > 0x27)
  VAR_13 = (VAR_13 & ~0x3f) | 0x27;
 FUNC_5(VAR_10, 49, VAR_13);
 if (VAR_10->mac_ver == 0x5392) {
  VAR_13 = FUNC_4(VAR_10, 50);
  VAR_13 = (VAR_13 & ~0x3f) | (VAR_16 & 0x3f);

  if ((VAR_13 & 0x3f) > 0x27)
   VAR_13 = (VAR_13 & ~0x3f) | 0x27;
  FUNC_5(VAR_10, 50, VAR_13);
 }

 VAR_13 = FUNC_4(VAR_10, 1);
 VAR_13 |= VAR_1 | VAR_0 | VAR_2 | VAR_4;
 if (VAR_10->mac_ver == 0x5392)
  VAR_13 |= VAR_3 | VAR_5;
 FUNC_5(VAR_10, 1, VAR_13);

 VAR_13 = FUNC_4(VAR_10, 2);
 FUNC_5(VAR_10, 2, VAR_13 | VAR_6);
 FUNC_0(1000);
 FUNC_5(VAR_10, 2, VAR_13 & ~VAR_6);

 VAR_13 = FUNC_4(VAR_10, 17);
 VAR_14 = VAR_13;
 VAR_13 = (VAR_13 & ~0x7f) | (VAR_10->freq & 0x7f);
 VAR_13 = FUNC_2(VAR_13, 0x5f);
 if (VAR_14 != VAR_13)
  FUNC_3(VAR_10, 0x74, (VAR_14 << 8 ) | VAR_13, 0);

 if (VAR_10->mac_ver == 0x5390) {
  if (VAR_11 <= 4)
   VAR_13 = 0x73;
  else if (VAR_11 >= 5 && VAR_11 <= 6)
   VAR_13 = 0x63;
  else if (VAR_11 >= 7 && VAR_11 <= 10)
   VAR_13 = 0x53;
  else
   VAR_13 = 43;
  FUNC_5(VAR_10, 55, VAR_13);

  if (VAR_11 == 1)
   VAR_13 = 0x0c;
  else if (VAR_11 == 2)
   VAR_13 = 0x0b;
  else if (VAR_11 == 3)
   VAR_13 = 0x0a;
  else if (VAR_11 >= 4 && VAR_11 <= 6)
   VAR_13 = 0x09;
  else if (VAR_11 >= 7 && VAR_11 <= 12)
   VAR_13 = 0x08;
  else if (VAR_11 == 13)
   VAR_13 = 0x07;
  else
   VAR_13 = 0x06;
  FUNC_5(VAR_10, 59, VAR_13);
 }


 VAR_12 = (VAR_10->rf24_20mhz & 0x20) >> 5;
 VAR_13 = FUNC_4(VAR_10, 30);
 VAR_13 = (VAR_13 & ~0x06) | (VAR_12 << 1) | (VAR_12 << 2);
 FUNC_5(VAR_10, 30, VAR_13);


 VAR_13 = FUNC_4(VAR_10, 30);
 VAR_13 = (VAR_13 & ~0x18) | 0x10;
 FUNC_5(VAR_10, 30, VAR_13);


 VAR_13 = FUNC_4(VAR_10, 3);
 VAR_13 |= VAR_7;
 FUNC_5(VAR_10, 3, VAR_13);
}
