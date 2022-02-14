
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_car_softc {int clkdom; } ;
struct clk_div_def {int dummy; } ;


 int FUNC_0 (int ,struct clk_div_def*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct tegra124_car_softc *VAR_0, struct clk_div_def *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0->clkdom, VAR_1 + VAR_3);
  if (VAR_4 != 0)
   FUNC_1("clk_div_register failed");
 }
}
