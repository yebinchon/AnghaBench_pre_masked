
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int change_suspend; scalar_t__ status_device_mode; scalar_t__ status_suspend; } ;
struct dwc_otg_softc {int sc_irq_mask; TYPE_1__ sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct dwc_otg_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dwc_otg_softc*) ;

__attribute__((used)) static void
FUNC_2(struct dwc_otg_softc *VAR_3)
{
 if (VAR_3->sc_flags.status_suspend) {

  VAR_3->sc_flags.status_suspend = 0;
  VAR_3->sc_flags.change_suspend = 1;

  if (VAR_3->sc_flags.status_device_mode) {




   VAR_3->sc_irq_mask &= ~VAR_2;
   VAR_3->sc_irq_mask |= VAR_1;
   FUNC_0(VAR_3, VAR_0, VAR_3->sc_irq_mask);
  }


  FUNC_1(VAR_3);
 }
}
