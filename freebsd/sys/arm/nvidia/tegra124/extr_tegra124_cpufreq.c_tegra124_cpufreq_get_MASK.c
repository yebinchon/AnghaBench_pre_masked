
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra124_cpufreq_softc {int latency; TYPE_1__* act_speed_point; } ;
struct cf_setting {int freq; int volts; int * dev; int lat; } ;
typedef int * device_t ;
struct TYPE_2__ {int freq; int uvolt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tegra124_cpufreq_softc* FUNC_0 (int *) ;
 int FUNC_1 (struct cf_setting*,int ,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, struct cf_setting *VAR_3)
{
 struct tegra124_cpufreq_softc *VAR_4;

 if (VAR_3 == ((void*)0))
  return (VAR_1);

 VAR_4 = FUNC_0(VAR_2);
 FUNC_1(VAR_3, VAR_0, sizeof(*VAR_3));
 VAR_3->dev = ((void*)0);
 VAR_3->freq = VAR_4->act_speed_point->freq / 1000000;
 VAR_3->volts = VAR_4->act_speed_point->uvolt / 1000;

 VAR_3->lat = VAR_4->latency;

 VAR_3->dev = VAR_2;

 return (0);
}
