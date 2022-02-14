
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc_otg_softc {int sc_timer; scalar_t__ sc_timer_active; int sc_bus; int sc_tmr_val; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dwc_otg_softc*) ;
 int VAR_2 ;
 int FUNC_5 (int *,int,void (*) (void*),struct dwc_otg_softc*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct dwc_otg_softc *VAR_4 = VAR_3;

 FUNC_1(&VAR_4->sc_bus, VAR_1);

 FUNC_0("\n");

 FUNC_2(&VAR_4->sc_bus);


 VAR_4->sc_tmr_val++;


 FUNC_4(VAR_4);

 FUNC_3(&VAR_4->sc_bus);

 if (VAR_4->sc_timer_active) {

  FUNC_5(&VAR_4->sc_timer,
      VAR_2 / (1000 / VAR_0),
      &FUNC_6, VAR_4);
 }
}
