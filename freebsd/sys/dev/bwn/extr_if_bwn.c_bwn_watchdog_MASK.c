
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ic_oerrors; } ;
struct bwn_softc {scalar_t__ sc_watchdog_timer; int sc_watchdog_ch; TYPE_1__ sc_ic; int sc_dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct bwn_softc *VAR_2 = VAR_1;

 if (VAR_2->sc_watchdog_timer != 0 && --VAR_2->sc_watchdog_timer == 0) {
  FUNC_2(VAR_2->sc_dev, "device timeout\n");
  FUNC_1(VAR_2->sc_ic.ic_oerrors, 1);
 }
 FUNC_0(&VAR_2->sc_watchdog_ch, VAR_0);
}
