
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_efuse_softc {int * mem_res; int * reset; int * clk; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int * VAR_1 ;
 struct tegra_efuse_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct tegra_efuse_softc *VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 VAR_1 = ((void*)0);
 if (VAR_3->clk != ((void*)0))
  FUNC_2(VAR_3->clk);
 if (VAR_3->reset != ((void*)0))
  FUNC_4(VAR_3->reset);
 if (VAR_3->mem_res != ((void*)0))
  FUNC_1(VAR_2, VAR_0, 0, VAR_3->mem_res);

 return (FUNC_0(VAR_2));
}
