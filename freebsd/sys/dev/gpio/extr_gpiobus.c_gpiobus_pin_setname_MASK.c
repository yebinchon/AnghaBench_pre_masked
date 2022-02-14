
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,char const*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, uint32_t VAR_6, const char *VAR_7)
{
 struct gpiobus_softc *VAR_8;

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_6 > VAR_8->sc_npins)
  return (VAR_0);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 if (VAR_8->sc_pins[VAR_6].name == ((void*)0))
  VAR_8->sc_pins[VAR_6].name = FUNC_1(VAR_1, VAR_2,
      VAR_3 | VAR_4);
 FUNC_2(VAR_8->sc_pins[VAR_6].name, VAR_7, VAR_1);

 return (0);
}
