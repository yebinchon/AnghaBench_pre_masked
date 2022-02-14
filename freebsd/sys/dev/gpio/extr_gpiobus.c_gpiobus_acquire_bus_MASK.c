
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_softc {int * sc_owner; int sc_mtx; } ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (struct gpiobus_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct gpiobus_softc*) ;
 int FUNC_2 (struct gpiobus_softc*) ;
 int FUNC_3 (int *) ;
 struct gpiobus_softc* FUNC_4 (int *) ;
 int FUNC_5 (struct gpiobus_softc*,int *,int ,char*,int ) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, device_t VAR_3, int VAR_4)
{
 struct gpiobus_softc *VAR_5;

 VAR_5 = FUNC_4(VAR_2);
 FUNC_0(VAR_5);
 FUNC_1(VAR_5);
 if (VAR_5->sc_owner != ((void*)0)) {
  if (VAR_5->sc_owner == VAR_3)
   FUNC_6("%s: %s still owns the bus.",
       FUNC_3(VAR_2),
       FUNC_3(VAR_3));
  if (VAR_4 == VAR_1) {
   FUNC_2(VAR_5);
   return (VAR_0);
  }
  while (VAR_5->sc_owner != ((void*)0))
   FUNC_5(VAR_5, &VAR_5->sc_mtx, 0, "gpiobuswait", 0);
 }
 VAR_5->sc_owner = VAR_3;
 FUNC_2(VAR_5);

 return (0);
}
