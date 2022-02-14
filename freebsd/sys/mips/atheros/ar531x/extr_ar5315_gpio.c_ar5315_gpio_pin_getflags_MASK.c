
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ar5315_gpio_softc {int gpio_npins; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ar5315_gpio_softc*,int ) ;
 int FUNC_1 () ;
 struct ar5315_gpio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, uint32_t VAR_4, uint32_t *VAR_5)
{
 struct ar5315_gpio_softc *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6->gpio_npins; VAR_7++) {
  if (VAR_6->gpio_pins[VAR_7].gp_pin == VAR_4)
   break;
 }

 if (VAR_7 >= VAR_6->gpio_npins)
  return (VAR_0);

 VAR_8 = FUNC_0(VAR_6, FUNC_1()) & (1 << VAR_4);

 *VAR_5 = VAR_8 ? VAR_2 : VAR_1;







 return (0);
}
