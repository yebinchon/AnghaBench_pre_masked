
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tegra124_cpufreq_softc {int cpu_max_freq; } ;
struct cf_setting {scalar_t__ freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct tegra124_cpufreq_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct tegra124_cpufreq_softc*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, const struct cf_setting *VAR_3)
{
 struct tegra124_cpufreq_softc *VAR_4;
 uint64_t VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0) || VAR_3->freq < 0)
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_2);

 VAR_5 = VAR_3->freq;
 if (VAR_5 < VAR_1)
  VAR_5 = VAR_1;
 VAR_5 *= 1000000;
 if (VAR_5 >= VAR_4->cpu_max_freq)
  VAR_5 = VAR_4->cpu_max_freq;
 VAR_6 = FUNC_1(VAR_4, VAR_5);

 return (VAR_6);
}
