
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct rt2860_softc {int* txpow1; int* txpow2; int ntxchains; int nrxchains; int freq; int rf24_20mhz; } ;
typedef int int8_t ;
struct TYPE_4__ {int chan; } ;
struct TYPE_3__ {int n; int k; int r; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (struct rt2860_softc*,int) ;
 int FUNC_2 (struct rt2860_softc*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct rt2860_softc *VAR_7, u_int VAR_8)
{
 int8_t VAR_9, VAR_10;
 uint8_t VAR_11;
 int VAR_12;


 FUNC_0(VAR_8 >= 1 && VAR_8 <= 14, ("chan %d not support", VAR_8));


 for (VAR_12 = 0; VAR_5[VAR_12].chan != VAR_8; VAR_12++);


 VAR_9 = VAR_7->txpow1[VAR_12];
 VAR_10 = VAR_7->txpow2[VAR_12];

 FUNC_2(VAR_7, 2, VAR_6[VAR_12].n);
 VAR_11 = FUNC_1(VAR_7, 3);
 VAR_11 = (VAR_11 & ~0x0f) | VAR_6[VAR_12].k;
 FUNC_2(VAR_7, 3, VAR_11);
 VAR_11 = FUNC_1(VAR_7, 6);
 VAR_11 = (VAR_11 & ~0x03) | VAR_6[VAR_12].r;
 FUNC_2(VAR_7, 6, VAR_11);


 VAR_11 = FUNC_1(VAR_7, 12);
 VAR_11 = (VAR_11 & ~0x1f) | VAR_9;
 FUNC_2(VAR_7, 12, VAR_11);


 VAR_11 = FUNC_1(VAR_7, 13);
 VAR_11 = (VAR_11 & ~0x1f) | VAR_10;
 FUNC_2(VAR_7, 13, VAR_11);

 VAR_11 = FUNC_1(VAR_7, 1);
 VAR_11 &= ~0xfc;
 if (VAR_7->ntxchains == 1)
  VAR_11 |= VAR_3 | VAR_4;
 else if (VAR_7->ntxchains == 2)
  VAR_11 |= VAR_4;
 if (VAR_7->nrxchains == 1)
  VAR_11 |= VAR_0 | VAR_1;
 else if (VAR_7->nrxchains == 2)
  VAR_11 |= VAR_1;
 FUNC_2(VAR_7, 1, VAR_11);


 VAR_11 = FUNC_1(VAR_7, 23);
 VAR_11 = (VAR_11 & ~0x7f) | VAR_7->freq;
 FUNC_2(VAR_7, 23, VAR_11);


 VAR_11 = FUNC_1(VAR_7, 24);
 VAR_11 = (VAR_11 & ~0x3f) | VAR_7->rf24_20mhz;
 FUNC_2(VAR_7, 24, VAR_11);
 VAR_11 = FUNC_1(VAR_7, 31);
 VAR_11 = (VAR_11 & ~0x3f) | VAR_7->rf24_20mhz;
 FUNC_2(VAR_7, 31, VAR_11);


 VAR_11 = FUNC_1(VAR_7, 7);
 FUNC_2(VAR_7, 7, VAR_11 | VAR_2);
}
