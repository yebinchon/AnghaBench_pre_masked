
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(driver_t *VAR_0, device_t VAR_1)
{
 phandle_t VAR_2;


 VAR_2 = FUNC_4(VAR_1);


 if (!FUNC_1(VAR_2, "clocks") ||
     (!FUNC_1(VAR_2, "cpu-supply") &&
     !FUNC_1(VAR_2, "cpu0-supply")))
  return;

 if (!FUNC_1(VAR_2, "operating-points") &&
     !FUNC_1(VAR_2, "operating-points-v2"))
  return;

 if (FUNC_2(VAR_1, "cpufreq_dt", -1) != ((void*)0))
  return;

 if (FUNC_0(VAR_1, 0, "cpufreq_dt", -1) == ((void*)0))
  FUNC_3(VAR_1, "add cpufreq_dt child failed\n");
}
