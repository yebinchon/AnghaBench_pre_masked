
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int status_vbus; int change_connect; scalar_t__ change_suspend; scalar_t__ status_suspend; scalar_t__ status_bus_reset; } ;
struct dwc_otg_softc {scalar_t__ sc_mode; TYPE_1__ sc_flags; } ;


 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct dwc_otg_softc*) ;

__attribute__((used)) static void
FUNC_2(struct dwc_otg_softc *VAR_1, uint8_t VAR_2)
{
 FUNC_0(5, "vbus = %u\n", VAR_2);





 if ((VAR_2 != 0) || (VAR_1->sc_mode == VAR_0)) {

  if (!VAR_1->sc_flags.status_vbus) {
   VAR_1->sc_flags.status_vbus = 1;



   FUNC_1(VAR_1);
  }
 } else {
  if (VAR_1->sc_flags.status_vbus) {
   VAR_1->sc_flags.status_vbus = 0;
   VAR_1->sc_flags.status_bus_reset = 0;
   VAR_1->sc_flags.status_suspend = 0;
   VAR_1->sc_flags.change_suspend = 0;
   VAR_1->sc_flags.change_connect = 1;



   FUNC_1(VAR_1);
  }
 }
}
