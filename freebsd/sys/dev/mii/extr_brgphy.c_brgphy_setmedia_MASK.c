
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;





 int VAR_14 ;
 int VAR_15 ;
 int const FUNC_0 (int) ;
 int FUNC_1 (struct mii_softc*,int ,int) ;
 int FUNC_2 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mii_softc *VAR_16, int VAR_17)
{
 int VAR_18 = 0, VAR_19;

 switch (FUNC_0(VAR_17)) {
 case 128:
  break;
 case 132:
 case 131:
  VAR_18 = VAR_12;
  break;
 case 130:
  VAR_18 = VAR_11;
  break;
 case 129:
 default:
  VAR_18 = VAR_10;
  break;
 }

 if ((VAR_17 & VAR_15) != 0) {
  VAR_18 |= VAR_5;
  VAR_19 = VAR_0;
 } else {
  VAR_19 = VAR_1;
 }


 FUNC_2(VAR_16);

 FUNC_1(VAR_16, VAR_7, 0);
 FUNC_1(VAR_16, VAR_8, VAR_13);

 if (FUNC_0(VAR_17) != 131 &&
     FUNC_0(VAR_17) != 132) {
  FUNC_1(VAR_16, VAR_9, VAR_18);
  return;
 }

 if (FUNC_0(VAR_17) == 131) {
  VAR_19 |= VAR_3;
  if ((VAR_17 & VAR_14) != 0)
   VAR_19 |= VAR_2;
 }
 FUNC_1(VAR_16, VAR_7, VAR_19);
 FUNC_1(VAR_16, VAR_9,
     VAR_18 | VAR_4 | VAR_6);
}
