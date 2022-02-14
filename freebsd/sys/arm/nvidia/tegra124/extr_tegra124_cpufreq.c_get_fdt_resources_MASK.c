
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_cpufreq_softc {int clk_dfll; int clk_pll_p; int dev; int clk_pll_x; int clk_cpu_lp; int clk_cpu_g; int supply_vdd_cpu; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ,char*,int *) ;

__attribute__((used)) static int
FUNC_4(struct tegra124_cpufreq_softc *VAR_1, phandle_t VAR_2)
{
 int VAR_3;
 device_t VAR_4;

 VAR_4 = FUNC_1(VAR_1->dev);
 VAR_3 = FUNC_3(VAR_4, 0, "vdd-cpu-supply",
     &VAR_1->supply_vdd_cpu);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'vdd-cpu' regulator\n");
  return (VAR_3);
 }

 VAR_3 = FUNC_0(VAR_4, 0, "cpu_g", &VAR_1->clk_cpu_g);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'cpu_g' clock: %d\n", VAR_3);
  return (VAR_0);
 }

 VAR_3 = FUNC_0(VAR_4, 0, "cpu_lp", &VAR_1->clk_cpu_lp);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'cpu_lp' clock\n");
  return (VAR_0);
 }

 VAR_3 = FUNC_0(VAR_4, 0, "pll_x", &VAR_1->clk_pll_x);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'pll_x' clock\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_0(VAR_4, 0, "pll_p", &VAR_1->clk_pll_p);
 if (VAR_3 != 0) {
  FUNC_2(VAR_4, "Cannot get 'pll_p' clock\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_0(VAR_4, 0, "dfll", &VAR_1->clk_dfll);
 if (VAR_3 != 0) {





 }
 return (0);
}
