
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int dummy; } ;
struct tegra_sdhci_softc {int mem_res; int irq_res; int intr_cookie; int clk; int gpio; struct sdhci_slot slot; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 struct tegra_sdhci_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sdhci_slot*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct tegra_sdhci_softc *VAR_3 = FUNC_4(VAR_2);
 struct sdhci_slot *VAR_4 = &VAR_3->slot;

 FUNC_0(VAR_2);
 FUNC_7(VAR_3->gpio);
 FUNC_3(VAR_3->clk);
 FUNC_2(VAR_2, VAR_3->irq_res, VAR_3->intr_cookie);
 FUNC_1(VAR_2, VAR_0, FUNC_5(VAR_3->irq_res),
        VAR_3->irq_res);

 FUNC_6(VAR_4);
 FUNC_1(VAR_2, VAR_1,
        FUNC_5(VAR_3->mem_res),
        VAR_3->mem_res);
 return (0);
}
