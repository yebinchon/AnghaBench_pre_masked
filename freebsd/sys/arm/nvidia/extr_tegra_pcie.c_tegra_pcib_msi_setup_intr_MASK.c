
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcib_softc {int dummy; } ;
struct tegra_pcib_irqsrc {int dummy; } ;
struct resource {int dummy; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tegra_pcib_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct intr_irqsrc*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, struct intr_irqsrc *VAR_3,
    struct resource *VAR_4, struct intr_map_data *VAR_5)
{
 struct tegra_pcib_softc *VAR_6;
 struct tegra_pcib_irqsrc *VAR_7;

 VAR_6 = FUNC_0(VAR_2);
 VAR_7 = (struct tegra_pcib_irqsrc *)VAR_3;

 if (VAR_5 == ((void*)0) || VAR_5->type != VAR_1)
  return (VAR_0);

 if (VAR_3->isrc_handlers == 0)
  FUNC_1(VAR_2, VAR_3);

 return (0);
}
