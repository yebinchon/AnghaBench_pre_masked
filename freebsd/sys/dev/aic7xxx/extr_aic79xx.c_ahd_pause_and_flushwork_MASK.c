
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int features; int flags; int qfreeze_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*) ;
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
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,int ) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,int ,int) ;
 int FUNC_6 (struct ahd_softc*,int ,int ) ;
 int FUNC_7 (struct ahd_softc*) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int) ;

void
FUNC_12(struct ahd_softc *VAR_12)
{
 u_int VAR_13;
 u_int VAR_14;

 VAR_14 = 1000;
 VAR_12->flags |= VAR_0;
 FUNC_7(VAR_12);





 VAR_12->qfreeze_cnt--;
 FUNC_6(VAR_12, VAR_5, VAR_12->qfreeze_cnt);
 FUNC_5(VAR_12, VAR_10, FUNC_3(VAR_12, VAR_10) | VAR_8);
 do {

  FUNC_9(VAR_12);




  FUNC_10(500);

  FUNC_4(VAR_12);
  FUNC_7(VAR_12);
  VAR_13 = FUNC_3(VAR_12, VAR_3);
  if ((VAR_13 & VAR_4) == 0) {
   FUNC_1(VAR_12);
   VAR_13 = FUNC_3(VAR_12, VAR_3);
  }
 } while (--VAR_14
       && (VAR_13 != 0xFF || (VAR_12->features & VAR_1) == 0)
       && ((VAR_13 & VAR_4) != 0
        || (FUNC_3(VAR_12, VAR_6) & VAR_2) != 0
        || (FUNC_3(VAR_12, VAR_11) & (VAR_7|VAR_9)) != 0));

 if (VAR_14 == 0) {
  FUNC_11("Infinite interrupt loop, INTSTAT = %x",
        FUNC_3(VAR_12, VAR_3));
  FUNC_0(VAR_12);
 }
 VAR_12->qfreeze_cnt++;
 FUNC_6(VAR_12, VAR_5, VAR_12->qfreeze_cnt);

 FUNC_2(VAR_12);

 FUNC_8(VAR_12);
 VAR_12->flags &= ~VAR_0;
}
