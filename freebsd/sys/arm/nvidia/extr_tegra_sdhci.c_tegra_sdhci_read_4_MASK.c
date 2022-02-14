
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_sdhci_softc {scalar_t__ force_card_present; int mem_res; } ;
struct sdhci_slot {int dummy; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct tegra_sdhci_softc* FUNC_1 (int ) ;

__attribute__((used)) static uint32_t
FUNC_2(device_t VAR_2, struct sdhci_slot *VAR_3, bus_size_t VAR_4)
{
 struct tegra_sdhci_softc *VAR_5;
 uint32_t VAR_6;

 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = FUNC_0(VAR_5->mem_res, VAR_4);

 if (VAR_4 == VAR_1 && VAR_5->force_card_present)
  VAR_6 |= VAR_0;
 return (VAR_6);
}
