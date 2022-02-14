
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mii_softc {int mii_flags; } ;


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
 int FUNC_0 (struct mii_softc*,int ) ;

u_int
FUNC_1(struct mii_softc *VAR_11)
{
 int VAR_12, VAR_13;

 if ((VAR_11->mii_flags & VAR_7) == 0)
  return (0);

 VAR_12 = FUNC_0(VAR_11, VAR_9);
 VAR_13 = FUNC_0(VAR_11, VAR_10);





 if ((VAR_11->mii_flags & VAR_8) != 0) {
  VAR_12 <<= 3;
  VAR_13 <<= 3;
 }

 if ((VAR_12 & VAR_1) != 0 && (VAR_13 & VAR_2) != 0)
  return (VAR_6 | VAR_5 | VAR_4);

 if ((VAR_12 & VAR_1) == 0) {
  if ((VAR_12 & VAR_0) != 0 &&
      (VAR_13 & VAR_3) != 0)
   return (VAR_6 | VAR_5);
  else
   return (0);
 }

 if ((VAR_12 & VAR_0) == 0) {
  if ((VAR_13 & VAR_2) != 0)
   return (VAR_6 | VAR_5 | VAR_4);
  else
   return (0);
 }

 switch ((VAR_13 & VAR_3)) {
 case 128:
  return (0);
 case 129:
  return (VAR_6 | VAR_4);
 default:
  return (VAR_6 | VAR_4 | VAR_5);
 }

}
