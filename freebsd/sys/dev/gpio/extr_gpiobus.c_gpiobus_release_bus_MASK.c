
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_softc {int * sc_owner; } ;
typedef int * device_t ;


 int FUNC_0 (struct gpiobus_softc*) ;
 int FUNC_1 (struct gpiobus_softc*) ;
 int FUNC_2 (struct gpiobus_softc*) ;
 int FUNC_3 (int *) ;
 struct gpiobus_softc* FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ,...) ;
 int FUNC_6 (struct gpiobus_softc*) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_0, device_t VAR_1)
{
 struct gpiobus_softc *VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 if (VAR_2->sc_owner == ((void*)0))
  FUNC_5("%s: %s releasing unowned bus.",
      FUNC_3(VAR_0),
      FUNC_3(VAR_1));
 if (VAR_2->sc_owner != VAR_1)
  FUNC_5("%s: %s trying to release bus owned by %s",
      FUNC_3(VAR_0),
      FUNC_3(VAR_1),
      FUNC_3(VAR_2->sc_owner));
 VAR_2->sc_owner = ((void*)0);
 FUNC_6(VAR_2);
 FUNC_2(VAR_2);
}
