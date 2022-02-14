
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rk30_gpio_softc {int sc_gpio_npins; TYPE_1__* sc_gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ gp_pin; } ;


 int VAR_0 ;
 struct rk30_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct rk30_gpio_softc*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 struct rk30_gpio_softc *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->sc_gpio_npins; VAR_5++) {
  if (VAR_4->sc_gpio_pins[VAR_5].gp_pin == VAR_2)
   break;
 }

 if (VAR_5 >= VAR_4->sc_gpio_npins)
  return (VAR_0);

 FUNC_1(VAR_4, &VAR_4->sc_gpio_pins[VAR_5], VAR_3);

 return (0);
}
