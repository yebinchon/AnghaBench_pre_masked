
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ukbd_softc {scalar_t__ sc_inputs; scalar_t__ sc_delay; int sc_time_ms; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct ukbd_softc*) ;
 int FUNC_2 (struct ukbd_softc*) ;
 int FUNC_3 (struct ukbd_softc*) ;
 int FUNC_4 (struct ukbd_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 struct ukbd_softc *VAR_1 = VAR_0;

 FUNC_0();

 VAR_1->sc_time_ms += VAR_1->sc_delay;
 VAR_1->sc_delay = 0;

 FUNC_3(VAR_1);


 FUNC_2(VAR_1);

 if (FUNC_1(VAR_1) || (VAR_1->sc_inputs != 0)) {
  FUNC_4(VAR_1);
 }
}
