
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct tegra_gpio_softc {size_t gpio_npins; int * gpio_pins; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_gpio_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct tegra_gpio_softc*) ;
 struct tegra_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct tegra_gpio_softc*,int ,int *,unsigned int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, uint32_t VAR_3, unsigned int VAR_4)
{
 struct tegra_gpio_softc *VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_3 >= VAR_5->gpio_npins)
  return (VAR_0);
 FUNC_0(VAR_5);
 FUNC_3(VAR_5, VAR_1, &VAR_5->gpio_pins[VAR_3], VAR_4);
 FUNC_1(VAR_5);

 return (0);
}
