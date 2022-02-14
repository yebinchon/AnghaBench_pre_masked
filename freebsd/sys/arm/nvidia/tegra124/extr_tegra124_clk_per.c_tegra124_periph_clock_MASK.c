
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_car_softc {int clkdom; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int * VAR_1 ;
 int FUNC_3 (int ,int *) ;

void
FUNC_4(struct tegra124_car_softc *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_4 = FUNC_2(VAR_2->clkdom, &VAR_0[VAR_3]);
  if (VAR_4 != 0)
   FUNC_1("tegra124_periph_register failed");
 }
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_4 = FUNC_3(VAR_2->clkdom, &VAR_1[VAR_3]);
  if (VAR_4 != 0)
   FUNC_1("tegra124_pgate_register failed");
 }

}
