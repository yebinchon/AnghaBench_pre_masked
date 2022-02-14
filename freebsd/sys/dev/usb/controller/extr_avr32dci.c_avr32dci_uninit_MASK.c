
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int change_connect; scalar_t__ change_suspend; scalar_t__ status_suspend; scalar_t__ status_bus_reset; scalar_t__ status_vbus; scalar_t__ port_powered; } ;
struct avr32dci_softc {int sc_bus; TYPE_1__ sc_flags; int (* sc_clocks_on ) (int *) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct avr32dci_softc*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct avr32dci_softc*) ;
 int FUNC_5 (struct avr32dci_softc*,int ,int) ;
 int FUNC_6 (struct avr32dci_softc*) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct avr32dci_softc *VAR_3)
{
 uint8_t VAR_4;

 FUNC_2(&VAR_3->sc_bus);


 (VAR_3->sc_clocks_on) (&VAR_3->sc_bus);


 FUNC_5(VAR_3, 0, 0xFFFFFFFF);


 FUNC_1(VAR_3, VAR_1, (1 << VAR_2) - 1);


 for (VAR_4 = 0; VAR_4 != VAR_2; VAR_4++) {

  FUNC_1(VAR_3, FUNC_0(VAR_4), VAR_0);
 }

 VAR_3->sc_flags.port_powered = 0;
 VAR_3->sc_flags.status_vbus = 0;
 VAR_3->sc_flags.status_bus_reset = 0;
 VAR_3->sc_flags.status_suspend = 0;
 VAR_3->sc_flags.change_suspend = 0;
 VAR_3->sc_flags.change_connect = 1;

 FUNC_6(VAR_3);
 FUNC_4(VAR_3);

 FUNC_3(&VAR_3->sc_bus);
}
