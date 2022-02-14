
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct rk30_wd_softc {int freq; int mtx; int dev; } ;


 int FUNC_0 (struct rk30_wd_softc*,int ,int) ;
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
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_10, u_int VAR_11, int *VAR_12)
{
 struct rk30_wd_softc *VAR_13;
 uint64_t VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_13 = VAR_10;
 FUNC_2(&VAR_13->mtx);

 VAR_11 &= VAR_9;

 if (VAR_11 > 0) {
  VAR_14 = ((uint64_t)1 << (VAR_11 & VAR_9)) / 1000000;
  VAR_15 = 0xffff / VAR_13->freq;
  VAR_16 = 0x7fffffff / VAR_13->freq + 1;
  VAR_17 = 0;
  while (VAR_15 < VAR_16 && VAR_15 < VAR_14) {
   VAR_15 <<= 1;
   VAR_17++;
  }
  if (VAR_15 < VAR_16) {
   FUNC_0(VAR_13, VAR_7,
       VAR_17 << VAR_8);
   FUNC_0(VAR_13, VAR_2,
       VAR_3 | VAR_4 |
       VAR_6);
   FUNC_0(VAR_13, VAR_0, VAR_1);
   *VAR_12 = 0;
  } else {
   FUNC_1(VAR_13->dev, "Can not be disabled\n");
   FUNC_3(&VAR_13->mtx);
   FUNC_0(VAR_13, VAR_2, VAR_5);
   return;
  }
 }
 else
  FUNC_0(VAR_13, VAR_2, VAR_5);

 FUNC_3(&VAR_13->mtx);
}
