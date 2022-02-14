
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int status_vbus; int change_connect; scalar_t__ change_suspend; scalar_t__ status_suspend; scalar_t__ status_bus_reset; } ;
struct avr32dci_softc {TYPE_1__ sc_flags; } ;


 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (struct avr32dci_softc*) ;

void
FUNC_2(struct avr32dci_softc *VAR_0, uint8_t VAR_1)
{
 FUNC_0(5, "vbus = %u\n", VAR_1);

 if (VAR_1) {
  if (!VAR_0->sc_flags.status_vbus) {
   VAR_0->sc_flags.status_vbus = 1;



   FUNC_1(VAR_0);
  }
 } else {
  if (VAR_0->sc_flags.status_vbus) {
   VAR_0->sc_flags.status_vbus = 0;
   VAR_0->sc_flags.status_bus_reset = 0;
   VAR_0->sc_flags.status_suspend = 0;
   VAR_0->sc_flags.change_suspend = 0;
   VAR_0->sc_flags.change_connect = 1;



   FUNC_1(VAR_0);
  }
 }
}
