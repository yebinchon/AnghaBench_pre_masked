
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_softc {int my_dev; } ;


 int FUNC_0 (struct my_softc*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct my_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (struct my_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct my_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(struct my_softc * VAR_12, int VAR_13)
{
 int VAR_14, VAR_15 = 0;

 FUNC_3(VAR_12);
 if (FUNC_0(VAR_12, VAR_5) & (VAR_6 | VAR_3)) {
  VAR_15 = 1;
  FUNC_2(VAR_12, VAR_5, (VAR_6 | VAR_3));
  for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
   FUNC_1(10);
   if (!(FUNC_0(VAR_12, VAR_5) &
       (VAR_8 | VAR_4)))
    break;
  }
  if (VAR_14 == VAR_7)
   FUNC_5(VAR_12->my_dev,
       "failed to force tx and rx to idle \n");
 }
 FUNC_2(VAR_12, VAR_5, VAR_2);
 FUNC_2(VAR_12, VAR_5, VAR_1);
 if (VAR_13 & VAR_9)
  FUNC_4(VAR_12, VAR_5, VAR_2);
 else if (!(VAR_13 & VAR_11))
  FUNC_4(VAR_12, VAR_5, VAR_1);
 if (VAR_13 & VAR_10)
  FUNC_4(VAR_12, VAR_5, VAR_0);
 else
  FUNC_2(VAR_12, VAR_5, VAR_0);
 if (VAR_15)
  FUNC_4(VAR_12, VAR_5, VAR_6 | VAR_3);
 return;
}
