
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct gpiobus_softc {size_t sc_npins; TYPE_1__* sc_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int * name; } ;


 int VAR_0 ;
 struct gpiobus_softc* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,size_t,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{
 struct gpiobus_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_3 > VAR_5->sc_npins)
  return (VAR_0);

 if (VAR_5->sc_pins[VAR_3].name != ((void*)0)) {
  FUNC_3(VAR_4, VAR_5->sc_pins[VAR_3].name, VAR_1);
  return (0);
 }


 return (FUNC_1(FUNC_2(VAR_2), VAR_3, VAR_4));
}
