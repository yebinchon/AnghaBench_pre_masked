
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_dt_softc {int nopp; int * opp; } ;
struct cf_setting {int dummy; } ;
typedef size_t ssize_t ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,struct cf_setting*) ;
 struct cpufreq_dt_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, struct cf_setting *VAR_3, int *VAR_4)
{
 struct cpufreq_dt_softc *VAR_5;
 ssize_t VAR_6;

 FUNC_0(VAR_2, "cpufreq_dt_settings\n");
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_1);

 VAR_5 = FUNC_2(VAR_2);

 if (*VAR_4 < VAR_5->nopp) {
  *VAR_4 = (int)VAR_5->nopp;
  return (VAR_0);
 }

 for (VAR_6 = 0; VAR_6 < VAR_5->nopp; VAR_6++)
  FUNC_1(VAR_2, &VAR_5->opp[VAR_6], &VAR_3[VAR_6]);

 *VAR_4 = (int)VAR_5->nopp;

 return (0);
}
