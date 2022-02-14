
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_softc {int sc_npins; struct gpiobus_ivar* sc_pins; int sc_intr_rman; int sc_mtx; } ;
struct gpiobus_ivar {struct gpiobus_ivar* name; int rl; } ;
typedef struct gpiobus_ivar device_t ;


 struct gpiobus_ivar* FUNC_0 (struct gpiobus_ivar) ;
 int FUNC_1 (struct gpiobus_softc*) ;
 struct gpiobus_softc* FUNC_2 (struct gpiobus_ivar) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct gpiobus_ivar) ;
 int FUNC_5 (struct gpiobus_ivar,struct gpiobus_ivar) ;
 int FUNC_6 (struct gpiobus_ivar,struct gpiobus_ivar**,int*) ;
 int FUNC_7 (struct gpiobus_ivar*,int ) ;
 int FUNC_8 (struct gpiobus_ivar*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_2)
{
 struct gpiobus_softc *VAR_3;
 struct gpiobus_ivar *VAR_4;
 device_t *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_3 = FUNC_2(VAR_2);
 FUNC_3(FUNC_9(&VAR_3->sc_mtx),
     ("gpiobus mutex not initialized"));
 FUNC_1(VAR_3);

 if ((VAR_7 = FUNC_4(VAR_2)) != 0)
  return (VAR_7);

 if ((VAR_7 = FUNC_6(VAR_2, &VAR_5, &VAR_8)) != 0)
  return (VAR_7);
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_4 = FUNC_0(VAR_5[VAR_6]);
  FUNC_8(VAR_4);
  FUNC_10(&VAR_4->rl);
  FUNC_7(VAR_4, VAR_0);
  FUNC_5(VAR_2, VAR_5[VAR_6]);
 }
 FUNC_7(VAR_5, VAR_1);
 FUNC_11(&VAR_3->sc_intr_rman);
 if (VAR_3->sc_pins) {
  for (VAR_6 = 0; VAR_6 < VAR_3->sc_npins; VAR_6++) {
   if (VAR_3->sc_pins[VAR_6].name != ((void*)0))
    FUNC_7(VAR_3->sc_pins[VAR_6].name, VAR_0);
   VAR_3->sc_pins[VAR_6].name = ((void*)0);
  }
  FUNC_7(VAR_3->sc_pins, VAR_0);
  VAR_3->sc_pins = ((void*)0);
 }

 return (0);
}
