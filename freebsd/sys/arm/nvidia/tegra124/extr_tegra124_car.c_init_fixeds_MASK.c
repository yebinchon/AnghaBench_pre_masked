
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra124_car_softc {int clkdom; int dev; } ;
struct clk_fixed_def {scalar_t__ freq; int div; } ;


 int FUNC_0 (int ,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct clk_fixed_def*) ;
 struct clk_fixed_def VAR_3 ;
 struct clk_fixed_def VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct tegra124_car_softc *VAR_6, struct clk_fixed_def *VAR_7,
    int VAR_8)
{
 int VAR_9, VAR_10;
 uint32_t VAR_11;
 int VAR_12;

 FUNC_0(VAR_6->dev, VAR_0, &VAR_11);
 VAR_12 = VAR_11 >> VAR_1;
 VAR_3.freq = VAR_5[VAR_12];
 if (VAR_3.freq == 0)
  FUNC_2("Undefined input frequency");
 VAR_10 = FUNC_1(VAR_6->clkdom, &VAR_3);
 if (VAR_10 != 0) FUNC_2("clk_fixed_register failed");

 VAR_11 = (VAR_11 >> VAR_2) & 3;
 VAR_4.div = 1 << VAR_11;
 VAR_10 = FUNC_1(VAR_6->clkdom, &VAR_4);
 if (VAR_10 != 0) FUNC_2("clk_fixed_register failed");

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_10 = FUNC_1(VAR_6->clkdom, VAR_7 + VAR_9);
  if (VAR_10 != 0)
   FUNC_2("clk_fixed_register failed");
 }
}
