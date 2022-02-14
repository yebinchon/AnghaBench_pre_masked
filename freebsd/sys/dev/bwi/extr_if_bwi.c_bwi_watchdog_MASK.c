
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ic_oerrors; } ;
struct bwi_softc {scalar_t__ sc_tx_timer; int sc_watchdog_timer; int sc_restart_task; int sc_tq; TYPE_1__ sc_ic; int sc_dev; } ;


 int FUNC_0 (struct bwi_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct bwi_softc*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct bwi_softc *VAR_2;

 VAR_2 = VAR_1;
 FUNC_0(VAR_2);
 if (VAR_2->sc_tx_timer != 0 && --VAR_2->sc_tx_timer == 0) {
  FUNC_3(VAR_2->sc_dev, "watchdog timeout\n");
  FUNC_2(VAR_2->sc_ic.ic_oerrors, 1);
  FUNC_4(VAR_2->sc_tq, &VAR_2->sc_restart_task);
 }
 FUNC_1(&VAR_2->sc_watchdog_timer, VAR_0, FUNC_5, VAR_2);
}
