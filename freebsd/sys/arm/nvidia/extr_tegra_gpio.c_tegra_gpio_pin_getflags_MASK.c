
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct tegra_gpio_softc {size_t gpio_npins; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {size_t gp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_gpio_softc*) ;
 int FUNC_1 (struct tegra_gpio_softc*) ;
 struct tegra_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct tegra_gpio_softc*,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, uint32_t VAR_4, uint32_t *VAR_5)
{
 struct tegra_gpio_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_4 >= VAR_6->gpio_npins)
  return (VAR_0);

 FUNC_0(VAR_6);
 VAR_7 = FUNC_3(VAR_6, VAR_2, &VAR_6->gpio_pins[VAR_4]);
 if (VAR_7 == 0) {
  FUNC_1(VAR_6);
  return (VAR_1);
 }
 *VAR_5 = VAR_6->gpio_pins[VAR_4].gp_flags;
 FUNC_1(VAR_6);

 return (0);
}
