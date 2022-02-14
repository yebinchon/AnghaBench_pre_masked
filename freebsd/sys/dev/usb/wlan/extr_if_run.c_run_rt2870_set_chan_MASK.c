
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct run_softc {int ntxchains; int nrxchains; int* txpow1; int* txpow2; int freq; } ;
struct rfprog {scalar_t__ chan; int r2; int r3; int r4; int r1; } ;
typedef int int8_t ;


 struct rfprog* VAR_0 ;
 int FUNC_0 (struct run_softc*,int) ;
 int FUNC_1 (struct run_softc*,int) ;

__attribute__((used)) static void
FUNC_2(struct run_softc *VAR_1, u_int VAR_2)
{
 const struct rfprog *VAR_3 = VAR_0;
 uint32_t VAR_4, VAR_5, VAR_6;
 int8_t VAR_7, VAR_8;
 int VAR_9;


 for (VAR_9 = 0; VAR_3[VAR_9].chan != VAR_2; VAR_9++);

 VAR_4 = VAR_3[VAR_9].r2;
 if (VAR_1->ntxchains == 1)
  VAR_4 |= 1 << 14;
 if (VAR_1->nrxchains == 1)
  VAR_4 |= 1 << 17 | 1 << 6;
 else if (VAR_1->nrxchains == 2)
  VAR_4 |= 1 << 6;


 VAR_7 = VAR_1->txpow1[VAR_9];
 VAR_8 = VAR_1->txpow2[VAR_9];


 VAR_5 = VAR_3[VAR_9].r3 & 0xffffc1ff;
 VAR_6 = (VAR_3[VAR_9].r4 & ~(0x001f87c0)) | (VAR_1->freq << 15);
 if (VAR_2 > 14) {
  if (VAR_7 >= 0) {
   VAR_7 = (VAR_7 > 0xf) ? (0xf) : (VAR_7);
   VAR_5 |= (VAR_7 << 10) | (1 << 9);
  } else {
   VAR_7 += 7;


   VAR_5 |= (VAR_7 << 10);
  }
  if (VAR_8 >= 0) {
   VAR_8 = (VAR_8 > 0xf) ? (0xf) : (VAR_8);
   VAR_6 |= (VAR_8 << 7) | (1 << 6);
  } else {
   VAR_8 += 7;
   VAR_6 |= (VAR_8 << 7);
  }
 } else {

  VAR_5 |= (VAR_7 << 9);


  VAR_6 |= (VAR_8 << 6);
 }

 FUNC_1(VAR_1, VAR_3[VAR_9].r1);
 FUNC_1(VAR_1, VAR_4);
 FUNC_1(VAR_1, VAR_5 & ~(1 << 2));
 FUNC_1(VAR_1, VAR_6);

 FUNC_0(VAR_1, 10);

 FUNC_1(VAR_1, VAR_3[VAR_9].r1);
 FUNC_1(VAR_1, VAR_4);
 FUNC_1(VAR_1, VAR_5 | (1 << 2));
 FUNC_1(VAR_1, VAR_6);

 FUNC_0(VAR_1, 10);

 FUNC_1(VAR_1, VAR_3[VAR_9].r1);
 FUNC_1(VAR_1, VAR_4);
 FUNC_1(VAR_1, VAR_5 & ~(1 << 2));
 FUNC_1(VAR_1, VAR_6);
}
