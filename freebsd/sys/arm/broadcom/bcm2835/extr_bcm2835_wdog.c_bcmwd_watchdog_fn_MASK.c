
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct bcmwd_softc {int mtx; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bcmwd_softc*,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct bcmwd_softc*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_9, u_int VAR_10, int *VAR_11)
{
 struct bcmwd_softc *VAR_12;
 uint64_t VAR_13;
 uint32_t VAR_14, VAR_15;

 VAR_12 = VAR_9;
 FUNC_3(&VAR_12->mtx);

 VAR_10 &= VAR_8;

 if (VAR_10 > 0) {
  VAR_13 = ((uint64_t)1 << (VAR_10 & VAR_8)) / 1000000000;
  if (VAR_13 == 0 || VAR_13 > 15) {




   FUNC_2(VAR_12->dev,
       "Can't arm, timeout must be between 1-15 seconds\n");
   FUNC_1(VAR_12, VAR_2,
       (VAR_0 << VAR_1) |
       VAR_3);
   FUNC_4(&VAR_12->mtx);
   return;
  }

  VAR_14 = (VAR_13 << 16) & VAR_7;
  VAR_15 = (VAR_0 << VAR_1) | VAR_14;
  FUNC_1(VAR_12, VAR_6, VAR_15);

  VAR_15 = FUNC_0(VAR_12, VAR_2);
  VAR_15 &= VAR_4;
  VAR_15 |= VAR_5;
  VAR_15 |= (VAR_0 << VAR_1);
  FUNC_1(VAR_12, VAR_2, VAR_15);

  *VAR_11 = 0;
 }
 else
  FUNC_1(VAR_12, VAR_2,
      (VAR_0 << VAR_1) |
      VAR_3);

 FUNC_4(&VAR_12->mtx);
}
