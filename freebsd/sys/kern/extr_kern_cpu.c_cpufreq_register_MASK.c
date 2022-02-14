
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_softc {int max_mhz; } ;
typedef int * device_t ;


 int * FUNC_0 (int *,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int * FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (int *) ;
 struct cpufreq_softc* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(device_t VAR_6)
{
 struct cpufreq_softc *VAR_7;
 device_t VAR_8, VAR_9;


 FUNC_1(FUNC_6(VAR_6),
     FUNC_2(FUNC_7(VAR_6)),
     VAR_4, "freq_settings", VAR_2 | VAR_1, VAR_6, 0,
     VAR_5, "A", "CPU frequency driver settings");





 VAR_9 = FUNC_4(VAR_6);
 if ((VAR_8 = FUNC_3(VAR_9, "cpufreq", -1))) {
  VAR_7 = FUNC_5(VAR_8);
  VAR_7->max_mhz = VAR_0;
  return (0);
 }


 VAR_8 = FUNC_0(VAR_9, 0, "cpufreq", -1);
 if (VAR_8 == ((void*)0))
  return (VAR_3);
 FUNC_9(VAR_8);

 return (FUNC_8(VAR_8));
}
