
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;


 scalar_t__ FUNC_0 (int *,int*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ***,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int **,int ) ;

int
FUNC_8(device_t VAR_1)
{
 device_t VAR_2, *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;






 VAR_6 = FUNC_3(FUNC_4(VAR_1), &VAR_3, &VAR_5);
 if (VAR_6)
  return (VAR_6);
 VAR_2 = FUNC_2(FUNC_4(VAR_1), "cpufreq", -1);
 if (VAR_2 == ((void*)0)) {
  FUNC_6(VAR_1,
 "warning: cpufreq_unregister called with no cpufreq device active\n");
  FUNC_7(VAR_3, VAR_0);
  return (0);
 }
 VAR_4 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (!FUNC_5(VAR_3[VAR_7]))
   continue;
  if (FUNC_0(VAR_3[VAR_7], &VAR_8) == 0)
   VAR_4++;
 }
 if (VAR_4 <= 1)
  FUNC_1(FUNC_4(VAR_2), VAR_2);
 FUNC_7(VAR_3, VAR_0);

 return (0);
}
