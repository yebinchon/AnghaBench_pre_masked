
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 phandle_t VAR_3;

 VAR_3 = FUNC_3(FUNC_1(VAR_2));

 if (!FUNC_0(VAR_3, "clocks") ||
     (!FUNC_0(VAR_3, "cpu-supply") &&
     !FUNC_0(VAR_3, "cpu0-supply")))

  return (VAR_1);

 if (!FUNC_0(VAR_3, "operating-points") &&
   !FUNC_0(VAR_3, "operating-points-v2"))
  return (VAR_1);

 FUNC_2(VAR_2, "Generic cpufreq driver");
 return (VAR_0);
}
