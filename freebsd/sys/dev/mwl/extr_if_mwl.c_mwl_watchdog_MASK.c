
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mst_watchdog; } ;
struct TYPE_3__ {int ic_oerrors; } ;
struct mwl_softc {scalar_t__ sc_tx_timer; TYPE_2__ sc_stats; TYPE_1__ sc_ic; int * sc_txq; int sc_dev; int sc_mh; int sc_invalid; scalar_t__ sc_running; int sc_watchdog; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct mwl_softc*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct mwl_softc*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 struct mwl_softc *VAR_2 = VAR_1;

 FUNC_0(&VAR_2->sc_watchdog, VAR_0, FUNC_6, VAR_2);
 if (VAR_2->sc_tx_timer == 0 || --VAR_2->sc_tx_timer > 0)
  return;

 if (VAR_2->sc_running && !VAR_2->sc_invalid) {
  if (FUNC_3(VAR_2->sc_mh))
   FUNC_2(VAR_2->sc_dev,
       "transmit timeout (firmware hung?)\n");
  else
   FUNC_2(VAR_2->sc_dev,
       "transmit timeout\n");




  FUNC_1(VAR_2->sc_ic.ic_oerrors, 1);
  VAR_2->sc_stats.mst_watchdog++;
 }
}
