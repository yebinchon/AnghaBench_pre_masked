
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u_int ;
struct run_softc {int* txpow1; int* txpow2; int ntxchains; int nrxchains; int freq; int rf24_20mhz; } ;
typedef int int8_t ;
struct TYPE_4__ {scalar_t__ chan; } ;
struct TYPE_3__ {int n; int k; int r; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct run_softc*,int,int*) ;
 int FUNC_1 (struct run_softc*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct run_softc *VAR_2, u_int VAR_3)
{
 int8_t VAR_4, VAR_5;
 uint8_t VAR_6;
 int VAR_7;


 for (VAR_7 = 0; VAR_0[VAR_7].chan != VAR_3; VAR_7++);


 VAR_4 = VAR_2->txpow1[VAR_7];
 VAR_5 = VAR_2->txpow2[VAR_7];

 FUNC_1(VAR_2, 2, VAR_1[VAR_7].n);


 FUNC_0(VAR_2, 3, &VAR_6);
 VAR_6 = (VAR_6 & ~0x0f) | VAR_1[VAR_7].k;
 FUNC_1(VAR_2, 3, VAR_6);

 FUNC_0(VAR_2, 6, &VAR_6);
 VAR_6 = (VAR_6 & ~0x03) | VAR_1[VAR_7].r;
 FUNC_1(VAR_2, 6, VAR_6);


 FUNC_0(VAR_2, 12, &VAR_6);
 VAR_6 = (VAR_6 & ~0x1f) | VAR_4;
 FUNC_1(VAR_2, 12, VAR_6);


 FUNC_0(VAR_2, 13, &VAR_6);
 VAR_6 = (VAR_6 & ~0x1f) | VAR_5;
 FUNC_1(VAR_2, 13, VAR_6);

 FUNC_0(VAR_2, 1, &VAR_6);
 VAR_6 &= ~0xfc;
 if (VAR_2->ntxchains == 1)
  VAR_6 |= 1 << 7 | 1 << 5;
 else if (VAR_2->ntxchains == 2)
  VAR_6 |= 1 << 7;
 if (VAR_2->nrxchains == 1)
  VAR_6 |= 1 << 6 | 1 << 4;
 else if (VAR_2->nrxchains == 2)
  VAR_6 |= 1 << 6;
 FUNC_1(VAR_2, 1, VAR_6);


 FUNC_0(VAR_2, 23, &VAR_6);
 VAR_6 = (VAR_6 & ~0x7f) | VAR_2->freq;
 FUNC_1(VAR_2, 23, VAR_6);


 FUNC_0(VAR_2, 24, &VAR_6);
 VAR_6 = (VAR_6 & ~0x3f) | VAR_2->rf24_20mhz;
 FUNC_1(VAR_2, 24, VAR_6);
 FUNC_0(VAR_2, 31, &VAR_6);
 VAR_6 = (VAR_6 & ~0x3f) | VAR_2->rf24_20mhz;
 FUNC_1(VAR_2, 31, VAR_6);


 FUNC_0(VAR_2, 7, &VAR_6);
 FUNC_1(VAR_2, 7, VAR_6 | 0x01);
}
