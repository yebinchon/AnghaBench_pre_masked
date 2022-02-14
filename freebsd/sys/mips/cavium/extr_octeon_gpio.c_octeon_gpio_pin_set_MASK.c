
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct octeon_gpio_softc {int gpio_npins; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_pin; } ;


 int VAR_0 ;
 int FUNC_0 (struct octeon_gpio_softc*) ;
 int FUNC_1 (struct octeon_gpio_softc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct octeon_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, uint32_t VAR_2, unsigned int VAR_3)
{
 struct octeon_gpio_softc *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->gpio_npins; VAR_5++) {
  if (VAR_4->gpio_pins[VAR_5].gp_pin == VAR_2)
   break;
 }

 if (VAR_5 >= VAR_4->gpio_npins)
  return (VAR_0);

 FUNC_0(VAR_4);
 if (VAR_3)
  FUNC_3(1 << VAR_2);
 else
  FUNC_2(1 << VAR_2);
 FUNC_1(VAR_4);

 return (0);
}
