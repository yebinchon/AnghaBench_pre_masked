
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct tegra124_cpufreq_softc {size_t speedo_id; int act_speed_point; void* cpu_max_freq; int clk_cpu_g; int node; int * cpu_def; int speedo_value; int process_id; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {size_t cpu_speedo_id; int cpu_speedo_value; int cpu_process_id; } ;


 int FUNC_0 (struct tegra124_cpufreq_softc*) ;
 int FUNC_1 (int ,int *) ;
 void** VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct tegra124_cpufreq_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct tegra124_cpufreq_softc*,int ) ;
 int FUNC_7 (struct tegra124_cpufreq_softc*,int ) ;
 size_t FUNC_8 (void**) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct tegra124_cpufreq_softc*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int
FUNC_11(device_t VAR_4)
{
 struct tegra124_cpufreq_softc *VAR_5;
 uint64_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(VAR_4);
 VAR_5->dev = VAR_4;
 VAR_5->node = FUNC_9(FUNC_3(VAR_4));

 VAR_5->process_id = VAR_3.cpu_process_id;
 VAR_5->speedo_id = VAR_3.cpu_speedo_id;
 VAR_5->speedo_value = VAR_3.cpu_speedo_value;



 if (1)
  VAR_5->cpu_def = &VAR_2;
 else
  VAR_5->cpu_def = &VAR_1;


 VAR_7 = FUNC_6(VAR_5, VAR_5->node);
 if (VAR_7 != 0) {
  return (VAR_7);
 }

 FUNC_0(VAR_5);

 VAR_7 = FUNC_1(VAR_5->clk_cpu_g, &VAR_6);
 if (VAR_7 != 0) {
  FUNC_5(VAR_4, "Can't get CPU clock frequency\n");
  return (VAR_7);
 }
 if (VAR_5->speedo_id < FUNC_8(VAR_0))
  VAR_5->cpu_max_freq = VAR_0[VAR_5->speedo_id];
 else
  VAR_5->cpu_max_freq = VAR_0[0];
 VAR_5->act_speed_point = FUNC_7(VAR_5, VAR_6);


 VAR_7 = FUNC_10(VAR_5, 1632000000);
 if (VAR_7 != 0) {
  FUNC_5(VAR_4, "Can't set initial CPU clock frequency\n");
  return (VAR_7);
 }


 FUNC_2(VAR_4);

 return (0);
}
