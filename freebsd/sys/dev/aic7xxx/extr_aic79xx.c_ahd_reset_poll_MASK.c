
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int flags; int reset_timer; } ;


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
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int ,int) ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,int ,int ) ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (struct ahd_softc*) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (int *,int ,void (*) (void*),struct ahd_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_14)
{
 struct ahd_softc *VAR_15 = (struct ahd_softc *)VAR_14;
 u_int VAR_16;

 FUNC_1(VAR_15);
 FUNC_3(VAR_15);
 FUNC_7(VAR_15);
 FUNC_4(VAR_15, VAR_0, VAR_0);
 FUNC_2(VAR_15, VAR_4, VAR_3);
 if ((FUNC_0(VAR_15, VAR_13) & VAR_9) != 0) {
  FUNC_9(&VAR_15->reset_timer, VAR_2,
    FUNC_10, VAR_15);
  FUNC_6(VAR_15);
  FUNC_5(VAR_15);
  return;
 }


 FUNC_2(VAR_15, VAR_12, FUNC_0(VAR_15, VAR_12) | VAR_7);
 VAR_16 = FUNC_0(VAR_15, VAR_11);
 FUNC_2(VAR_15, VAR_10, VAR_16 & (VAR_8|VAR_6|VAR_5));
 FUNC_6(VAR_15);
 VAR_15->flags &= ~VAR_1;
 FUNC_8(VAR_15);
 FUNC_5(VAR_15);
}
