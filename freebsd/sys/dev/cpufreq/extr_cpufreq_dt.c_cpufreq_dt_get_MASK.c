
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct cpufreq_dt_softc {int clk; } ;
struct cpufreq_dt_opp {int dummy; } ;
struct cf_setting {int freq; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 struct cpufreq_dt_opp* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct cpufreq_dt_opp const*,struct cf_setting*) ;
 struct cpufreq_dt_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, struct cf_setting *VAR_3)
{
 struct cpufreq_dt_softc *VAR_4;
 const struct cpufreq_dt_opp *VAR_5;
 uint64_t VAR_6;

 VAR_4 = FUNC_4(VAR_2);

 FUNC_0(VAR_2, "cpufreq_dt_get\n");
 if (FUNC_1(VAR_4->clk, &VAR_6) != 0)
  return (VAR_1);

 VAR_5 = FUNC_2(VAR_2, VAR_6);
 if (VAR_5 == ((void*)0)) {
  FUNC_5(VAR_2, "Can't find the current freq in opp\n");
  return (VAR_0);
 }

 FUNC_3(VAR_2, VAR_5, VAR_3);

 FUNC_0(VAR_2, "Current freq %dMhz\n", VAR_3->freq);
 return (0);
}
