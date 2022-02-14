
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_car_softc {int clkdom; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(struct tegra124_car_softc *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = FUNC_2(VAR_1->clkdom, &VAR_0[VAR_2]);
  if (VAR_3 != 0)
   FUNC_1("super_mux_register failed");
 }

}
