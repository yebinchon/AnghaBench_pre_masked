
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ar71xx_gpio_softc {int gpio_npins; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ar71xx_gpio_softc*,int ,int) ;
 struct ar71xx_gpio_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, uint32_t VAR_4, unsigned int VAR_5)
{
 struct ar71xx_gpio_softc *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6->gpio_npins; VAR_7++) {
  if (VAR_6->gpio_pins[VAR_7].gp_pin == VAR_4)
   break;
 }

 if (VAR_7 >= VAR_6->gpio_npins)
  return (VAR_2);

 if (VAR_5)
  FUNC_0(VAR_6, VAR_1, (1 << VAR_4));
 else
  FUNC_0(VAR_6, VAR_0, (1 << VAR_4));

 return (0);
}
