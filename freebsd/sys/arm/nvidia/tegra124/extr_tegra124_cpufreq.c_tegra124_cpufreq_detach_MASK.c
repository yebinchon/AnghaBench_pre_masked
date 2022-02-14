
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_cpufreq_softc {int * clk_dfll; int * clk_pll_p; int * clk_pll_x; int * clk_cpu_lp; int * clk_cpu_g; int * supply_vdd_cpu; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct tegra124_cpufreq_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct tegra124_cpufreq_softc *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_0);

 if (VAR_1->supply_vdd_cpu != ((void*)0))
  FUNC_3(VAR_1->supply_vdd_cpu);

 if (VAR_1->clk_cpu_g != ((void*)0))
  FUNC_0(VAR_1->clk_cpu_g);
 if (VAR_1->clk_cpu_lp != ((void*)0))
  FUNC_0(VAR_1->clk_cpu_lp);
 if (VAR_1->clk_pll_x != ((void*)0))
  FUNC_0(VAR_1->clk_pll_x);
 if (VAR_1->clk_pll_p != ((void*)0))
  FUNC_0(VAR_1->clk_pll_p);
 if (VAR_1->clk_dfll != ((void*)0))
  FUNC_0(VAR_1->clk_dfll);
 return (0);
}
