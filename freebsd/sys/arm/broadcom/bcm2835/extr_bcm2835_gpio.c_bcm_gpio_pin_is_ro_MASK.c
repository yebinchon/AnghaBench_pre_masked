
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_gpio_softc {int sc_ro_npins; int* sc_ro_pins; } ;



__attribute__((used)) static int
FUNC_0(struct bcm_gpio_softc *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->sc_ro_npins; VAR_2++)
  if (VAR_1 == VAR_0->sc_ro_pins[VAR_2])
   return (1);
 return (0);
}
