
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_softc {scalar_t__ sc_tx_timer; int sc_watchdog; scalar_t__ sc_running; } ;


 int FUNC_0 (struct mwl_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mwl_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mwl_softc *VAR_0)
{

 FUNC_0(VAR_0);
 if (VAR_0->sc_running) {



  VAR_0->sc_running = 0;
  FUNC_1(&VAR_0->sc_watchdog);
  VAR_0->sc_tx_timer = 0;
  FUNC_2(VAR_0);
 }
}
