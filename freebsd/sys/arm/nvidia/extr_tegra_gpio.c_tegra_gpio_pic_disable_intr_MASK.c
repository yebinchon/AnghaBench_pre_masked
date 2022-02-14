
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gpio_softc {int dummy; } ;
struct tegra_gpio_irqsrc {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 struct tegra_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_gpio_softc*,struct tegra_gpio_irqsrc*,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct tegra_gpio_softc *VAR_2;
 struct tegra_gpio_irqsrc *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = (struct tegra_gpio_irqsrc *)VAR_1;
 FUNC_1(VAR_2, VAR_3, 0);
}
