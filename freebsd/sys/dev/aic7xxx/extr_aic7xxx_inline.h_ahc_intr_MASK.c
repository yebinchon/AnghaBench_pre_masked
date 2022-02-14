
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahc_softc {int pause; int flags; int unsolicited_ints; int chip; int features; int (* bus_intr ) (struct ahc_softc*) ;} ;


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
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,int) ;
 int FUNC_4 (struct ahc_softc*,int) ;
 int FUNC_5 (struct ahc_softc*,int ) ;
 int FUNC_6 (struct ahc_softc*,int ,int ) ;
 int FUNC_7 (struct ahc_softc*) ;
 int FUNC_8 (struct ahc_softc*) ;
 int FUNC_9 (struct ahc_softc*,int ) ;
 int FUNC_10 (struct ahc_softc*) ;

__attribute__((used)) static __inline int
FUNC_11(struct ahc_softc *VAR_17)
{
 u_int VAR_18;

 if ((VAR_17->pause & VAR_11) == 0) {






  return (0);
 }






 if ((VAR_17->flags & (VAR_0|VAR_1)) == 0
  && (FUNC_0(VAR_17) != 0))
  VAR_18 = VAR_8;
 else {
  VAR_18 = FUNC_5(VAR_17, VAR_12);
 }

 if ((VAR_18 & VAR_13) == 0) {
  VAR_17->unsolicited_ints++;
  return (0);
 }
 VAR_17->unsolicited_ints = 0;

 if (VAR_18 & VAR_8) {
  FUNC_6(VAR_17, VAR_7, VAR_6);
  FUNC_1(VAR_17);
  FUNC_8(VAR_17);




 }





 if (VAR_18 == 0xFF && (VAR_17->features & VAR_3) != 0) {

 } else if (VAR_18 & VAR_5) {
  FUNC_2(VAR_17);
 } else if ((VAR_18 & (VAR_16|VAR_15)) != 0) {

  FUNC_7(VAR_17);

  if ((VAR_18 & VAR_16) != 0)
   FUNC_4(VAR_17, VAR_18);

  if ((VAR_18 & VAR_15) != 0)
   FUNC_3(VAR_17, VAR_18);
 }
 return (1);
}
