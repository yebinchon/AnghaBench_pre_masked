
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tegra_sdhci_softc {int mem_res; } ;
struct sdhci_slot {int dummy; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ) ;
 struct tegra_sdhci_softc* FUNC_1 (int ) ;

__attribute__((used)) static uint8_t
FUNC_2(device_t VAR_0, struct sdhci_slot *VAR_1, bus_size_t VAR_2)
{
 struct tegra_sdhci_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 return (FUNC_0(VAR_3->mem_res, VAR_2));
}
