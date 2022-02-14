
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ic_oerrors; } ;
struct rt2560_softc {int sc_flags; scalar_t__ sc_tx_timer; int watchdog_ch; TYPE_1__ sc_ic; int sc_dev; scalar_t__ sc_invalid; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rt2560_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,void (*) (void*),struct rt2560_softc*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;
 int FUNC_5 (struct rt2560_softc*) ;
 int FUNC_6 (struct rt2560_softc*) ;
 int FUNC_7 (struct rt2560_softc*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2)
{
 struct rt2560_softc *VAR_3 = VAR_2;

 FUNC_1(VAR_3);

 FUNC_0(VAR_3->sc_flags & VAR_0, ("not running"));

 if (VAR_3->sc_invalid)
  return;

 FUNC_5(VAR_3);
 FUNC_7(VAR_3);

 if (VAR_3->sc_tx_timer > 0 && --VAR_3->sc_tx_timer == 0) {
  FUNC_4(VAR_3->sc_dev, "device timeout\n");
  FUNC_6(VAR_3);
  FUNC_3(VAR_3->sc_ic.ic_oerrors, 1);

  return;
 }
 FUNC_2(&VAR_3->watchdog_ch, VAR_1, FUNC_8, VAR_3);
}
