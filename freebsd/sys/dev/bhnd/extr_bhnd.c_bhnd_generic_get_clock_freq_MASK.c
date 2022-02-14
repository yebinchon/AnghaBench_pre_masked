
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhnd_core_clkctl {int cc_pmu_dev; } ;
typedef scalar_t__ device_t ;
typedef int bhnd_clock ;


 int VAR_0 ;
 struct bhnd_core_clkctl* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;

int
FUNC_4(device_t VAR_1, device_t VAR_2, bhnd_clock VAR_3,
    u_int *VAR_4)
{
 struct bhnd_core_clkctl *VAR_5;

 if (FUNC_2(VAR_2) != VAR_1)
  return (VAR_0);

 if ((VAR_5 = FUNC_0(VAR_2)) == ((void*)0))
  FUNC_3("no active PMU allocation");

 return (FUNC_1(VAR_5->cc_pmu_dev, VAR_3, VAR_4));
}
