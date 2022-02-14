
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct imx51_gpio_softc {size_t gpio_npins; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {size_t gp_caps; } ;


 int VAR_0 ;
 struct imx51_gpio_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
 struct imx51_gpio_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_4->gpio_npins)
  return (VAR_0);

 *VAR_3 = VAR_4->gpio_pins[VAR_2].gp_caps;

 return (0);
}
