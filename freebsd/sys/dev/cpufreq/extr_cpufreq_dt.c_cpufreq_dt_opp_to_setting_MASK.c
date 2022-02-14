
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_dt_softc {int dummy; } ;
struct cpufreq_dt_opp {int freq; int uvolt_target; int clk_latency; } ;
struct cf_setting {int freq; int volts; int dev; int lat; int power; } ;
typedef int device_t ;


 int VAR_0 ;
 struct cpufreq_dt_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct cf_setting*,int ,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1, const struct cpufreq_dt_opp *VAR_2,
    struct cf_setting *VAR_3)
{
 struct cpufreq_dt_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->freq = VAR_2->freq / 1000000;
 VAR_3->volts = VAR_2->uvolt_target / 1000;
 VAR_3->power = VAR_0;
 VAR_3->lat = VAR_2->clk_latency;
 VAR_3->dev = VAR_1;
}
