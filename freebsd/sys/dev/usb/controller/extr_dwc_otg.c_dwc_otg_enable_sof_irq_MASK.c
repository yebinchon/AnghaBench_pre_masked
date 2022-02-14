
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status_device_mode; } ;
struct dwc_otg_softc {int sc_needsof; int sc_irq_mask; TYPE_1__ sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct dwc_otg_softc*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct dwc_otg_softc *VAR_2)
{

 if (VAR_2->sc_flags.status_device_mode != 0)
  return;

 VAR_2->sc_needsof = 1;

 if ((VAR_2->sc_irq_mask & VAR_1) != 0)
  return;
 VAR_2->sc_irq_mask |= VAR_1;
 FUNC_0(VAR_2, VAR_0, VAR_2->sc_irq_mask);
}
