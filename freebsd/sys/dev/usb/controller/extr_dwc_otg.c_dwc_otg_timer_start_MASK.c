
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc_otg_softc {int sc_timer_active; int sc_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *,struct dwc_otg_softc*) ;

__attribute__((used)) static void
FUNC_1(struct dwc_otg_softc *VAR_3)
{
 if (VAR_3->sc_timer_active != 0)
  return;

 VAR_3->sc_timer_active = 1;


 FUNC_0(&VAR_3->sc_timer,
     VAR_2 / (1000 / VAR_0),
     &VAR_1, VAR_3);
}
