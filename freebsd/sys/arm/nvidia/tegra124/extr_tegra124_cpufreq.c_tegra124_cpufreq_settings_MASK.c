
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra124_cpufreq_softc {int nspeed_points; int cpu_max_freq; int latency; TYPE_1__* speed_points; } ;
struct cf_setting {int freq; int volts; int dev; int lat; } ;
typedef int device_t ;
struct TYPE_2__ {int freq; int uvolt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tegra124_cpufreq_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct cf_setting*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, struct cf_setting *VAR_3, int *VAR_4)
{
 struct tegra124_cpufreq_softc *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_1);

 VAR_5 = FUNC_0(VAR_2);
 FUNC_1(VAR_3, VAR_0, sizeof(*VAR_3) * (*VAR_4));

 VAR_8 = FUNC_2(VAR_5->nspeed_points, *VAR_4);
 for (VAR_6 = 0, VAR_7 = VAR_5->nspeed_points - 1; VAR_7 >= 0; VAR_7--) {
  if (VAR_5->cpu_max_freq < VAR_5->speed_points[VAR_7].freq)
   continue;
  VAR_3[VAR_6].freq = VAR_5->speed_points[VAR_7].freq / 1000000;
  VAR_3[VAR_6].volts = VAR_5->speed_points[VAR_7].uvolt / 1000;
  VAR_3[VAR_6].lat = VAR_5->latency;
  VAR_3[VAR_6].dev = VAR_2;
  VAR_6++;
 }
 *VAR_4 = VAR_6;

 return (0);
}
