
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ar5315_gpio_softc {int gpio_npins; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ gp_pin; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar5315_gpio_softc*,TYPE_1__*,scalar_t__) ;
 struct ar5315_gpio_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 int VAR_4;
 struct ar5315_gpio_softc *VAR_5 = FUNC_1(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_5->gpio_npins; VAR_4++) {
  if (VAR_5->gpio_pins[VAR_4].gp_pin == VAR_2)
   break;
 }

 if (VAR_4 >= VAR_5->gpio_npins)
  return (VAR_0);

 FUNC_0(VAR_5, &VAR_5->gpio_pins[VAR_4], VAR_3);

 return (0);
}
