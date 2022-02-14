
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ clocks_off; scalar_t__ port_powered; } ;
struct dwc_otg_softc {TYPE_1__ sc_flags; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1(struct dwc_otg_softc *VAR_0)
{
 if (VAR_0->sc_flags.clocks_off &&
     VAR_0->sc_flags.port_powered) {

  FUNC_0(5, "\n");



  VAR_0->sc_flags.clocks_off = 0;
 }
}
