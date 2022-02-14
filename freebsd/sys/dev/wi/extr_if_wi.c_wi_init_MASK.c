
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ic_macaddr; } ;
struct wi_softc {int sc_enabled; int sc_watchdog; int sc_flags; int sc_dev; TYPE_1__ sc_ic; int sc_porttype; } ;


 int VAR_0 ;
 int FUNC_0 (struct wi_softc*) ;
 int FUNC_1 (int *,int ,int ,struct wi_softc*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct wi_softc*) ;
 scalar_t__ FUNC_4 (struct wi_softc*,int ,int,int ) ;
 int FUNC_5 (struct wi_softc*,int) ;
 int VAR_2 ;

void
FUNC_6(struct wi_softc *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3);

 VAR_4 = VAR_3->sc_enabled;
 if (VAR_4)
  FUNC_5(VAR_3, 1);

 if (FUNC_4(VAR_3, VAR_3->sc_porttype, 3,
     VAR_3->sc_ic.ic_macaddr) != 0) {
  FUNC_2(VAR_3->sc_dev, "interface not running\n");
  FUNC_5(VAR_3, 1);
  return;
 }

 VAR_3->sc_flags |= VAR_0;

 FUNC_1(&VAR_3->sc_watchdog, VAR_1, VAR_2, VAR_3);

 FUNC_3(VAR_3);
}
