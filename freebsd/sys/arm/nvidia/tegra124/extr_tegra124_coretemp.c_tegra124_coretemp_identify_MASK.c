
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(driver_t *VAR_0, device_t VAR_1)
{
 phandle_t VAR_2;

 VAR_2 = FUNC_1("/");
 if (!FUNC_4(VAR_2, "nvidia,tegra124"))
  return;
 if (FUNC_2(VAR_1, "tegra124_coretemp", -1) != ((void*)0))
  return;
 if (FUNC_0(VAR_1, 0, "tegra124_coretemp", -1) == ((void*)0))
  FUNC_3(VAR_1, "add child failed\n");
}
