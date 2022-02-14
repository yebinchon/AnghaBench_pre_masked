
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sdhci_softc {void* max_clk; void* quirks; } ;
struct ofw_compat_data {scalar_t__ ocd_data; } ;
typedef int phandle_t ;
typedef void* pcell_t ;
typedef int device_t ;
typedef int cid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,void**,int) ;
 int VAR_2 ;
 struct tegra_sdhci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 struct ofw_compat_data* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct tegra_sdhci_softc *VAR_4;
 phandle_t VAR_5;
 pcell_t VAR_6;
 const struct ofw_compat_data *VAR_7;

 VAR_4 = FUNC_1(VAR_3);
 if (!FUNC_6(VAR_3))
  return (VAR_1);

 if (FUNC_4(VAR_3, "nvidia,tegra124-sdhci")) {
  FUNC_2(VAR_3, "Tegra SDHCI controller");
 } else
  return (VAR_1);
 VAR_7 = FUNC_5(VAR_3, VAR_2);
 if (VAR_7->ocd_data == 0)
  return (VAR_1);

 VAR_5 = FUNC_3(VAR_3);


 if ((FUNC_0(VAR_5, "quirks", &VAR_6, sizeof(VAR_6))) > 0)
  VAR_4->quirks = VAR_6;
 if ((FUNC_0(VAR_5, "max-frequency", &VAR_6, sizeof(VAR_6))) > 0)
  VAR_4->max_clk = VAR_6;

 return (VAR_0);
}
