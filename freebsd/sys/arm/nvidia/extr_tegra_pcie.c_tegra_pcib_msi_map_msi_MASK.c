
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct tegra_pcib_softc {int msi_page; } ;
struct tegra_pcib_irqsrc {int irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 struct tegra_pcib_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, struct intr_irqsrc *VAR_2,
    uint64_t *VAR_3, uint32_t *VAR_4)
{
 struct tegra_pcib_softc *VAR_5 = FUNC_0(VAR_0);
 struct tegra_pcib_irqsrc *VAR_6 = (struct tegra_pcib_irqsrc *)VAR_2;

 *VAR_3 = FUNC_1(VAR_5->msi_page);
 *VAR_4 = VAR_6->irq;
 return (0);
}
