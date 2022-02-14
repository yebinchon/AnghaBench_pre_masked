
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_softc {int * clk; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 struct tegra_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct tegra_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1->clk != ((void*)0)) {
  FUNC_0(VAR_1->clk);
 }

 return (FUNC_2(VAR_0));
}
