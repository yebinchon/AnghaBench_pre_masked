
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc_otg_softc {scalar_t__ sc_timer_active; int sc_timer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct dwc_otg_softc *VAR_0)
{
 if (VAR_0->sc_timer_active == 0)
  return;

 VAR_0->sc_timer_active = 0;


 FUNC_0(&VAR_0->sc_timer);
}
