
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct et_softc {scalar_t__ watchdog_timer; int sc_flags; scalar_t__ sc_tx_intr; scalar_t__ sc_tx; int sc_tick; struct ifnet* ifp; } ;


 int FUNC_0 (struct et_softc*,int ) ;
 int FUNC_1 (struct et_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct et_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct et_softc*) ;
 int FUNC_6 (struct et_softc*) ;
 int FUNC_7 (struct et_softc*) ;
 int FUNC_8 (struct et_softc*) ;
 int FUNC_9 (struct et_softc*) ;

__attribute__((used)) static void
FUNC_10(struct et_softc *VAR_7)
{
 struct ifnet *VAR_8;

 FUNC_3(VAR_7);

 VAR_8 = VAR_7->ifp;
 FUNC_4(&VAR_7->sc_tick);

 FUNC_1(VAR_7, VAR_1, 0xffffffff);

 FUNC_1(VAR_7, VAR_2, FUNC_0(VAR_7, VAR_2) & ~(
     VAR_4 | VAR_3));
 FUNC_2(100);

 FUNC_8(VAR_7);
 FUNC_9(VAR_7);
 FUNC_7(VAR_7);

 FUNC_6(VAR_7);
 FUNC_5(VAR_7);

 VAR_7->sc_tx = 0;
 VAR_7->sc_tx_intr = 0;
 VAR_7->sc_flags &= ~VAR_0;

 VAR_7->watchdog_timer = 0;
 VAR_8->if_drv_flags &= ~(VAR_6 | VAR_5);
}
