
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct tegra_gpio_softc {size_t gpio_npins; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_gpio_softc*) ;
 int FUNC_1 (struct tegra_gpio_softc*) ;
 struct tegra_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{
 struct tegra_gpio_softc *VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_3 >= VAR_5->gpio_npins)
  return (VAR_0);

 FUNC_0(VAR_5);
 FUNC_3(VAR_4, VAR_5->gpio_pins[VAR_3].gp_name, VAR_1);
 FUNC_1(VAR_5);

 return (0);
}
