
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int change_connect; scalar_t__ change_suspend; scalar_t__ status_suspend; scalar_t__ status_bus_reset; scalar_t__ status_vbus; scalar_t__ port_powered; } ;
struct atmegadci_softc {int sc_bus; TYPE_1__ sc_flags; int (* sc_clocks_on ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atmegadci_softc*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct atmegadci_softc*) ;
 int FUNC_4 (struct atmegadci_softc*) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct atmegadci_softc *VAR_4)
{
 FUNC_1(&VAR_4->sc_bus);


 (VAR_4->sc_clocks_on) (&VAR_4->sc_bus);


 FUNC_0(VAR_4, VAR_1, 0);


 FUNC_0(VAR_4, VAR_2,
     (1 << VAR_0) - 1);


 FUNC_0(VAR_4, VAR_2, 0);

 VAR_4->sc_flags.port_powered = 0;
 VAR_4->sc_flags.status_vbus = 0;
 VAR_4->sc_flags.status_bus_reset = 0;
 VAR_4->sc_flags.status_suspend = 0;
 VAR_4->sc_flags.change_suspend = 0;
 VAR_4->sc_flags.change_connect = 1;

 FUNC_4(VAR_4);
 FUNC_3(VAR_4);


 FUNC_0(VAR_4, VAR_3, 0);

 FUNC_2(&VAR_4->sc_bus);
}
