
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcib_softc {int dummy; } ;
struct tegra_pcib_irqsrc {int dummy; } ;
struct resource {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; } ;
typedef int device_t ;


 struct tegra_pcib_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_pcib_softc*,struct tegra_pcib_irqsrc*,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1,
    struct resource *VAR_2, struct intr_map_data *VAR_3)
{
 struct tegra_pcib_softc *VAR_4;
 struct tegra_pcib_irqsrc *VAR_5;

 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = (struct tegra_pcib_irqsrc *)VAR_1;

 if (VAR_1->isrc_handlers == 0)
  FUNC_1(VAR_4, VAR_5, 0);
 return (0);
}
