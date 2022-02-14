
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_softc {int sc_flags; int calib_to; int scan_timeout; int watchdog_to; scalar_t__ sc_tx_timer; scalar_t__ sc_is_scanning; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwn_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwn_softc*) ;

__attribute__((used)) static void
FUNC_3(struct iwn_softc *VAR_1)
{

 FUNC_0(VAR_1);

 if (!(VAR_1->sc_flags & VAR_0))
  return;

 VAR_1->sc_is_scanning = 0;
 VAR_1->sc_tx_timer = 0;
 FUNC_1(&VAR_1->watchdog_to);
 FUNC_1(&VAR_1->scan_timeout);
 FUNC_1(&VAR_1->calib_to);
 VAR_1->sc_flags &= ~VAR_0;


 FUNC_2(VAR_1);
}
