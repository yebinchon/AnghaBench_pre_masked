
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tegra124_cpufreq_softc {struct cpu_speed_point* act_speed_point; int supply_vdd_cpu; int dev; int clk_pll_x; int clk_cpu_g; int clk_pll_p; } ;
struct cpu_speed_point {scalar_t__ uvolt; int freq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 struct cpu_speed_point* FUNC_4 (struct tegra124_cpufreq_softc*,int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct tegra124_cpufreq_softc *VAR_1, uint64_t VAR_2)
{
 struct cpu_speed_point *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_1, VAR_2);

 if (VAR_1->act_speed_point->uvolt < VAR_3->uvolt) {

  VAR_4 = FUNC_5(VAR_1->supply_vdd_cpu,
      VAR_3->uvolt, VAR_3->uvolt);
  FUNC_0(10000);
  if (VAR_4 != 0)
   return (VAR_4);
 }


 VAR_4 = FUNC_2(VAR_1->clk_cpu_g, VAR_1->clk_pll_p);
 if (VAR_4 != 0) {
  FUNC_3(VAR_1->dev, "Can't set parent to PLLP\n");
  return (VAR_4);
 }


 VAR_4 = FUNC_1(VAR_1->clk_pll_x, VAR_3->freq, VAR_0);
 if (VAR_4 != 0) {
  FUNC_3(VAR_1->dev, "Can't set CPU clock frequency\n");
  return (VAR_4);
 }

 VAR_4 = FUNC_2(VAR_1->clk_cpu_g, VAR_1->clk_pll_x);
 if (VAR_4 != 0) {
  FUNC_3(VAR_1->dev, "Can't set parent to PLLX\n");
  return (VAR_4);
 }

 if (VAR_1->act_speed_point->uvolt > VAR_3->uvolt) {

  VAR_4 = FUNC_5(VAR_1->supply_vdd_cpu,
      VAR_3->uvolt, VAR_3->uvolt);
  if (VAR_4 != 0)
   return (VAR_4);
 }

 VAR_1->act_speed_point = VAR_3;

 return (0);
}
