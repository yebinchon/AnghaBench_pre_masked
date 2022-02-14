
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_pmc_softc {int dev; } ;
typedef enum tegra_powergate_id { ____Placeholder_tegra_powergate_id } tegra_powergate_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 struct tegra124_pmc_softc* FUNC_2 () ;
 int FUNC_3 (struct tegra124_pmc_softc*,int,int ) ;
 int FUNC_4 (int) ;

int
FUNC_5(enum tegra_powergate_id VAR_0)
{
 struct tegra124_pmc_softc *VAR_1;
 int VAR_2, VAR_3;

 VAR_1 = FUNC_2();

 VAR_2 = FUNC_3(VAR_1, VAR_0, 0);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev, "Cannot set powergate: %d\n", VAR_0);
  return (VAR_2);
 }
 for (VAR_3 = 100; VAR_3 > 0; VAR_3--) {
  if (!FUNC_4(VAR_0))
   break;
  FUNC_0(1);
 }
 if (VAR_3 <= 0)
  FUNC_1(VAR_1->dev, "Timeout when waiting on power off\n");

 return (VAR_2);
}
