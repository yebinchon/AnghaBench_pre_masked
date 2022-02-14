
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct tegra_gpio_softc {size_t gpio_npins; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {size_t gp_caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_gpio_softc*) ;
 int FUNC_1 (struct tegra_gpio_softc*) ;
 struct tegra_gpio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
 struct tegra_gpio_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_2 >= VAR_4->gpio_npins)
  return (VAR_0);

 FUNC_0(VAR_4);
 *VAR_3 = VAR_4->gpio_pins[VAR_2].gp_caps;
 FUNC_1(VAR_4);

 return (0);
}
