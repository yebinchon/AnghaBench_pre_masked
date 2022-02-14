
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct et_softc {int sc_tick; int sc_flags; int sc_timer; struct ifnet* ifp; } ;


 int FUNC_0 (struct et_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct et_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int ,struct et_softc*) ;
 int FUNC_3 (struct et_softc*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct et_softc*) ;
 int FUNC_6 (struct et_softc*) ;
 int FUNC_7 (struct et_softc*) ;
 int FUNC_8 (struct et_softc*) ;
 int FUNC_9 (struct et_softc*) ;
 int FUNC_10 (struct et_softc*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_11(struct et_softc *VAR_8)
{
 struct ifnet *VAR_9;
 int VAR_10;

 FUNC_1(VAR_8);

 VAR_9 = VAR_8->ifp;
 if (VAR_9->if_drv_flags & VAR_5)
  return;

 FUNC_10(VAR_8);
 FUNC_7(VAR_8);

 FUNC_6(VAR_8);
 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10)
  return;

 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10)
  goto fail;




 VAR_10 = FUNC_8(VAR_8);
 if (VAR_10)
  return;

 VAR_10 = FUNC_9(VAR_8);
 if (VAR_10)
  return;


 FUNC_0(VAR_8, VAR_2, ~VAR_1);

 FUNC_0(VAR_8, VAR_3, VAR_8->sc_timer);

 VAR_9->if_drv_flags |= VAR_5;
 VAR_9->if_drv_flags &= ~VAR_4;

 VAR_8->sc_flags &= ~VAR_0;
 FUNC_4(VAR_9);

 FUNC_2(&VAR_8->sc_tick, VAR_7, VAR_6, VAR_8);

fail:
 if (VAR_10)
  FUNC_10(VAR_8);
}
