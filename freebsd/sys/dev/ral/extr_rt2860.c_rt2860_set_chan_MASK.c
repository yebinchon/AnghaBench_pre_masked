
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t u_int ;
struct rt2860_softc {int ntxchains; int nrxchains; int* txpow1; int* txpow2; int freq; } ;
struct rfprog {size_t chan; int r2; int r3; int r4; int r1; } ;
typedef int int8_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rfprog* VAR_4 ;
 int FUNC_1 (struct rt2860_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct rt2860_softc *VAR_5, u_int VAR_6)
{
 const struct rfprog *VAR_7 = VAR_4;
 uint32_t VAR_8, VAR_9, VAR_10;
 int8_t VAR_11, VAR_12;
 u_int VAR_13;


 for (VAR_13 = 0; VAR_7[VAR_13].chan != VAR_6; VAR_13++);

 VAR_8 = VAR_7[VAR_13].r2;
 if (VAR_5->ntxchains == 1)
  VAR_8 |= 1 << 12;
 if (VAR_5->nrxchains == 1)
  VAR_8 |= 1 << 15 | 1 << 4;
 else if (VAR_5->nrxchains == 2)
  VAR_8 |= 1 << 4;


 VAR_11 = VAR_5->txpow1[VAR_13];
 VAR_12 = VAR_5->txpow2[VAR_13];
 if (VAR_6 > 14) {
  if (VAR_11 >= 0)
   VAR_11 = VAR_11 << 1 | 1;
  else
   VAR_11 = (7 + VAR_11) << 1;
  if (VAR_12 >= 0)
   VAR_12 = VAR_12 << 1 | 1;
  else
   VAR_12 = (7 + VAR_12) << 1;
 }
 VAR_9 = VAR_7[VAR_13].r3 | VAR_11 << 7;
 VAR_10 = VAR_7[VAR_13].r4 | VAR_5->freq << 13 | VAR_12 << 4;

 FUNC_1(VAR_5, VAR_0, VAR_7[VAR_13].r1);
 FUNC_1(VAR_5, VAR_1, VAR_8);
 FUNC_1(VAR_5, VAR_2, VAR_9);
 FUNC_1(VAR_5, VAR_3, VAR_10);

 FUNC_0(200);

 FUNC_1(VAR_5, VAR_0, VAR_7[VAR_13].r1);
 FUNC_1(VAR_5, VAR_1, VAR_8);
 FUNC_1(VAR_5, VAR_2, VAR_9 | 1);
 FUNC_1(VAR_5, VAR_3, VAR_10);

 FUNC_0(200);

 FUNC_1(VAR_5, VAR_0, VAR_7[VAR_13].r1);
 FUNC_1(VAR_5, VAR_1, VAR_8);
 FUNC_1(VAR_5, VAR_2, VAR_9);
 FUNC_1(VAR_5, VAR_3, VAR_10);
}
