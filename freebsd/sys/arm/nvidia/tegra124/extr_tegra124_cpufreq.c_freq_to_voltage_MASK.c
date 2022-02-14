
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct tegra124_cpufreq_softc {int speedo_value; TYPE_1__* cpu_def; } ;
struct speedo_entry {scalar_t__ freq; int c2; int c1; int c0; } ;
struct TYPE_2__ {int speedo_nitems; int speedo_scale; int step_uvolt; int min_uvolt; int max_uvolt; struct speedo_entry* speedo_tbl; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct tegra124_cpufreq_softc *VAR_0, uint64_t VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 struct speedo_entry *VAR_7;
 int VAR_8;


 VAR_7 = ((void*)0);
 for (VAR_8 = 0; VAR_8 < VAR_0->cpu_def->speedo_nitems; VAR_8++) {
  if (VAR_0->cpu_def->speedo_tbl[VAR_8].freq >= VAR_1) {
   VAR_7 = &VAR_0->cpu_def->speedo_tbl[VAR_8];
   break;
  }
 }
 if (VAR_7 == ((void*)0))
  VAR_7 = &VAR_0->cpu_def->speedo_tbl[VAR_0->cpu_def->speedo_nitems - 1];
 VAR_3 = VAR_0->cpu_def->speedo_scale;



 VAR_2 = FUNC_0(VAR_7->c2 * VAR_0->speedo_value, VAR_3);
 VAR_2 = FUNC_0((VAR_2 + VAR_7->c1) * VAR_0->speedo_value, VAR_3) +
     VAR_7->c0;
 VAR_6 = VAR_0->cpu_def->step_uvolt;

 VAR_2 = FUNC_2(VAR_2, VAR_6);


 VAR_4 = FUNC_2(VAR_0->cpu_def->min_uvolt, VAR_6);
 VAR_5 = FUNC_1(VAR_0->cpu_def->max_uvolt, VAR_6);
 if (VAR_2 < VAR_4)
  VAR_2 = VAR_4;
 if (VAR_2 > VAR_5)
  VAR_2 = VAR_5;
 return (VAR_2);

}
