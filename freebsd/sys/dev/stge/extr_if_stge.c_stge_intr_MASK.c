
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct stge_softc {int sc_IntEnable; int sc_dev; scalar_t__ sc_suspended; struct ifnet* sc_ifp; } ;
struct ifnet {int if_capenable; int if_snd; int if_drv_flags; } ;


 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ,int) ;
 int FUNC_2 (struct stge_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
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
 int FUNC_4 (struct stge_softc*) ;
 int FUNC_5 (struct stge_softc*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct stge_softc*) ;
 int FUNC_8 (struct stge_softc*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct stge_softc*) ;
 int FUNC_11 (struct stge_softc*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_13)
{
 struct stge_softc *VAR_14;
 struct ifnet *VAR_15;
 int VAR_16;
 uint16_t VAR_17;

 VAR_14 = (struct stge_softc *)VAR_13;
 VAR_15 = VAR_14->sc_ifp;

 FUNC_4(VAR_14);





 VAR_17 = FUNC_0(VAR_14, VAR_11);
 if (VAR_14->sc_suspended || (VAR_17 & VAR_4) == 0)
  goto done_locked;


 for (VAR_16 = 0;;) {
  VAR_17 = FUNC_0(VAR_14, VAR_12);
  VAR_17 &= VAR_14->sc_IntEnable;
  if (VAR_17 == 0)
   break;

  if ((VAR_17 & VAR_3) != 0) {
   FUNC_6(VAR_14->sc_dev,
       "Host interface error, resetting...\n");
   VAR_16 = 1;
   goto force_init;
  }


  if ((VAR_17 & VAR_6) != 0) {
   FUNC_8(VAR_14);
   if ((VAR_17 & VAR_5) != 0)
    FUNC_2(VAR_14, VAR_9,
        VAR_0);
  }


  if ((VAR_17 & (VAR_8 | VAR_7)) != 0)
   FUNC_11(VAR_14);


  if ((VAR_17 & VAR_7) != 0) {
   if ((VAR_16 = FUNC_10(VAR_14)) != 0)
    break;
  }
 }

force_init:
 if (VAR_16 != 0) {
  VAR_15->if_drv_flags &= ~VAR_2;
  FUNC_7(VAR_14);
 }


 FUNC_1(VAR_14, VAR_10, VAR_14->sc_IntEnable);


 if (!FUNC_3(&VAR_15->if_snd))
  FUNC_9(VAR_15);

done_locked:
 FUNC_5(VAR_14);
}
