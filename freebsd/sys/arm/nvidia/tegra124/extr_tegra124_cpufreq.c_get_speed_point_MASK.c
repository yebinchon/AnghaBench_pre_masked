
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct tegra124_cpufreq_softc {int nspeed_points; struct cpu_speed_point* speed_points; } ;
struct cpu_speed_point {scalar_t__ freq; } ;



__attribute__((used)) static struct cpu_speed_point *
FUNC_0(struct tegra124_cpufreq_softc *VAR_0, uint64_t VAR_1)
{
 int VAR_2;

 if (VAR_0->speed_points[0].freq >= VAR_1)
  return (VAR_0->speed_points + 0);

 for (VAR_2 = 0; VAR_2 < VAR_0->nspeed_points - 1; VAR_2++) {
  if (VAR_0->speed_points[VAR_2 + 1].freq > VAR_1)
   return (VAR_0->speed_points + VAR_2);
 }

 return (VAR_0->speed_points + VAR_0->nspeed_points - 1);
}
