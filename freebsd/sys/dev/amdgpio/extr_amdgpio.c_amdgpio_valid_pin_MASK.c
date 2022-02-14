
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpio_softc {TYPE_1__* sc_gpio_pins; int ** sc_res; } ;
struct TYPE_2__ {int gp_pin; scalar_t__ gp_caps; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static bool
FUNC_1(struct amdgpio_softc *VAR_0, int VAR_1)
{
 FUNC_0("pin %d\n", VAR_1);
 if (VAR_0->sc_res[0] == ((void*)0))
  return (0);

 if ((VAR_0->sc_gpio_pins[VAR_1].gp_pin == VAR_1) &&
  (VAR_0->sc_gpio_pins[VAR_1].gp_caps != 0))
  return (1);

 return (0);
}
