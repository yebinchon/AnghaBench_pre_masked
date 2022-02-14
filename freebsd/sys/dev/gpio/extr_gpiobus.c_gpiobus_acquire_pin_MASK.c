
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct gpiobus_softc {size_t sc_npins; TYPE_1__* sc_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int mapped; } ;


 struct gpiobus_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,size_t,...) ;

int
FUNC_2(device_t VAR_0, uint32_t VAR_1)
{
 struct gpiobus_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 >= VAR_2->sc_npins) {
  FUNC_1(VAR_0,
      "invalid pin %d, max: %d\n", VAR_1, VAR_2->sc_npins - 1);
  return (-1);
 }

 if (VAR_2->sc_pins[VAR_1].mapped) {
  FUNC_1(VAR_0, "warning: pin %d is already mapped\n", VAR_1);
  return (-1);
 }
 VAR_2->sc_pins[VAR_1].mapped = 1;

 return (0);
}
