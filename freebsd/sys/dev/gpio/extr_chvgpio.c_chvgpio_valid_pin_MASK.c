
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chvgpio_softc {int sc_ngroups; int* sc_pins; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct chvgpio_softc *VAR_1, int VAR_2)
{
 if (VAR_2 < 0)
  return VAR_0;
 if ((VAR_2 / 15) >= VAR_1->sc_ngroups)
  return VAR_0;
 if ((VAR_2 % 15) >= VAR_1->sc_pins[VAR_2 / 15])
  return VAR_0;
 return (0);
}
