
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_pmc_softc {int dev; } ;
typedef int hwreset_t ;
typedef enum tegra_powergate_id { ____Placeholder_tegra_powergate_id } tegra_powergate_id ;
typedef int clk_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct tegra124_pmc_softc* FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

int
FUNC_11(enum tegra_powergate_id VAR_0, clk_t VAR_1,
    hwreset_t VAR_2)
{
 struct tegra124_pmc_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_7();

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4 != 0) {
  FUNC_4(VAR_3->dev, "Cannot assert reset\n");
  return (VAR_4);
 }

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 != 0) {
  FUNC_4(VAR_3->dev, "Cannot stop clock\n");
  goto clk_fail;
 }

 VAR_4 = FUNC_9(VAR_0);
 if (VAR_4 != 0) {
  FUNC_4(VAR_3->dev, "Cannot power on powergate\n");
  goto clk_fail;
 }

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 != 0) {
  FUNC_4(VAR_3->dev, "Cannot enable clock\n");
  goto clk_fail;
 }
 FUNC_0(20);

 VAR_4 = FUNC_10(VAR_0);
 if (VAR_4 != 0) {
  FUNC_4(VAR_3->dev, "Cannot remove clamping\n");
  goto fail;
 }
 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4 != 0) {
  FUNC_4(VAR_3->dev, "Cannot unreset reset\n");
  goto fail;
 }
 return 0;

fail:
 FUNC_1(VAR_1);
clk_fail:
 FUNC_5(VAR_2);
 FUNC_8(VAR_0);
 return (VAR_4);
}
