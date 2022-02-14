
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra124_cpufreq_softc {int nspeed_points; TYPE_1__* speed_points; } ;
struct cpu_speed_point {int dummy; } ;
struct TYPE_2__ {int uvolt; int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct tegra124_cpufreq_softc*,int ) ;
 TYPE_1__* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct tegra124_cpufreq_softc *VAR_3) {
 int VAR_4;

 VAR_3->nspeed_points = FUNC_2(VAR_2);
 VAR_3->speed_points = FUNC_1(sizeof(struct cpu_speed_point) *
     VAR_3->nspeed_points, VAR_0, VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_3->nspeed_points; VAR_4++) {
  VAR_3->speed_points[VAR_4].freq = VAR_2[VAR_4];
  VAR_3->speed_points[VAR_4].uvolt = FUNC_0(VAR_3,
      VAR_2[VAR_4]);
 }
}
