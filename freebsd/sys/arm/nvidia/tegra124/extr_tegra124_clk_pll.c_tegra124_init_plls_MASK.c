
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_car_softc {int clkdom; } ;


 int FUNC_0 (struct tegra124_car_softc*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,scalar_t__) ;

void
FUNC_4(struct tegra124_car_softc *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0); VAR_2++) {
  VAR_3 = FUNC_3(VAR_1->clkdom, VAR_0 + VAR_2);
  if (VAR_3 != 0)
   FUNC_2("pll_register failed");
 }
 FUNC_0(VAR_1);

}
