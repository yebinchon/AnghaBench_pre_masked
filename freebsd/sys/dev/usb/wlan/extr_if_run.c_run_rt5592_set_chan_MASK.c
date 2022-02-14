
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct run_softc {int* txpow1; int* txpow2; int ntxchains; int nrxchains; } ;
struct rt5592_freqs {int n; int k; int m; int r; } ;
typedef int int8_t ;
struct TYPE_7__ {scalar_t__ chan; } ;
struct TYPE_6__ {int reg; int val; scalar_t__ firstchan; scalar_t__ lastchan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_4__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 TYPE_1__* VAR_12 ;
 TYPE_1__* VAR_13 ;
 struct rt5592_freqs* VAR_14 ;
 struct rt5592_freqs* VAR_15 ;
 int FUNC_1 (struct run_softc*) ;
 int FUNC_2 (struct run_softc*,int ,int*) ;
 int FUNC_3 (struct run_softc*,int,int*) ;
 int FUNC_4 (struct run_softc*,int,int) ;
 int FUNC_5 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct run_softc *VAR_16, u_int VAR_17)
{
 const struct rt5592_freqs *VAR_18;
 uint32_t VAR_19;
 uint8_t VAR_20, VAR_21, VAR_22;
 int8_t VAR_23, VAR_24;
 int VAR_25;

 FUNC_2(VAR_16, VAR_8, &VAR_19);
 VAR_18 = (VAR_19 & VAR_9) ?
     VAR_15 : VAR_14;


 for (VAR_25 = 0; VAR_10[VAR_25].chan != VAR_17; VAR_25++, VAR_18++);


 VAR_23 = VAR_16->txpow1[VAR_25];
 VAR_24 = VAR_16->txpow2[VAR_25];

 FUNC_2(VAR_16, VAR_0, &VAR_19);
 VAR_19 &= ~0x1c000000;
 if (VAR_17 > 14)
  VAR_19 |= 0x14000000;
 FUNC_5(VAR_16, VAR_0, VAR_19);


 FUNC_4(VAR_16, 8, VAR_18->n & 0xff);
 FUNC_3(VAR_16, 9, &VAR_21);
 VAR_21 &= ~(1 << 4);
 VAR_21 |= ((VAR_18->n & 0x0100) >> 8) << 4;
 FUNC_4(VAR_16, 9, VAR_21);


 FUNC_3(VAR_16, 9, &VAR_21);
 VAR_21 &= ~0x0f;
 VAR_21 |= (VAR_18->k & 0x0f);
 FUNC_4(VAR_16, 9, VAR_21);


 FUNC_3(VAR_16, 11, &VAR_21);
 VAR_21 &= ~0x0c;
 VAR_21 |= ((VAR_18->m - 0x8) & 0x3) << 2;
 FUNC_4(VAR_16, 11, VAR_21);
 FUNC_3(VAR_16, 9, &VAR_21);
 VAR_21 &= ~(1 << 7);
 VAR_21 |= (((VAR_18->m - 0x8) & 0x4) >> 2) << 7;
 FUNC_4(VAR_16, 9, VAR_21);


 FUNC_3(VAR_16, 11, &VAR_21);
 VAR_21 &= ~0x03;
 VAR_21 |= (VAR_18->r - 0x1);
 FUNC_4(VAR_16, 11, VAR_21);

 if (VAR_17 <= 14) {

  for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_11); VAR_25++) {
   FUNC_4(VAR_16, VAR_11[VAR_25].reg,
       VAR_11[VAR_25].val);
  }

  VAR_21 = (VAR_17 <= 10) ? 0x07 : 0x06;
  FUNC_4(VAR_16, 23, VAR_21);
  FUNC_4(VAR_16, 59, VAR_21);

  FUNC_4(VAR_16, 55, 0x43);





  VAR_20 = 2;
  VAR_22 = 0x27;
 } else {

  for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_12); VAR_25++) {
   FUNC_4(VAR_16, VAR_12[VAR_25].reg,
       VAR_12[VAR_25].val);
  }
  for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_13); VAR_25++) {
   if (VAR_17 >= VAR_13[VAR_25].firstchan &&
       VAR_17 <= VAR_13[VAR_25].lastchan) {
    FUNC_4(VAR_16, VAR_13[VAR_25].reg,
        VAR_13[VAR_25].val);
   }
  }





  VAR_20 = 3;
  VAR_22 = 0x2b;
 }


 FUNC_3(VAR_16, 49, &VAR_21);
 VAR_21 &= ~0xc0;
 VAR_21 |= (VAR_20 << 6);
 VAR_21 = (VAR_21 & ~0x3f) | (VAR_23 & 0x3f);
 if ((VAR_21 & 0x3f) > VAR_22)
  VAR_21 = (VAR_21 & ~0x3f) | VAR_22;
 FUNC_4(VAR_16, 49, VAR_21);


 FUNC_3(VAR_16, 50, &VAR_21);
 VAR_21 &= ~(1 << 7 | 1 << 6);
 VAR_21 |= (VAR_20 << 6);
 VAR_21 = (VAR_21 & ~0x3f) | (VAR_24 & 0x3f);
 if ((VAR_21 & 0x3f) > VAR_22)
  VAR_21 = (VAR_21 & ~0x3f) | VAR_22;
 FUNC_4(VAR_16, 50, VAR_21);


 FUNC_3(VAR_16, 1, &VAR_21);
 VAR_21 |= (VAR_2 | VAR_1 | VAR_3 | VAR_5);
 if (VAR_16->ntxchains > 1)
  VAR_21 |= VAR_6;
 if (VAR_16->nrxchains > 1)
  VAR_21 |= VAR_4;
 FUNC_4(VAR_16, 1, VAR_21);

 FUNC_4(VAR_16, 6, 0xe4);

 FUNC_4(VAR_16, 30, 0x10);
 FUNC_4(VAR_16, 31, 0x80);
 FUNC_4(VAR_16, 32, 0x80);

 FUNC_1(VAR_16);


 FUNC_3(VAR_16, 3, &VAR_21);
 VAR_21 |= VAR_7;
 FUNC_4(VAR_16, 3, VAR_21);
}
