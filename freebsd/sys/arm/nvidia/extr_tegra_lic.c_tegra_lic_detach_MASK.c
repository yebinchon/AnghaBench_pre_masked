
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_lic_sc {int ** mem_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *) ;
 struct tegra_lic_sc* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct tegra_lic_sc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_1); VAR_4++) {
  if (VAR_3->mem_res[VAR_4] == ((void*)0))
   continue;
  FUNC_0(VAR_2, VAR_0, VAR_4,
      VAR_3->mem_res[VAR_4]);
 }
 return (0);
}
