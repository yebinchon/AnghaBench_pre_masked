
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int tmparr ;
typedef int tmp ;
struct tegra124_pmc_softc {scalar_t__ suspend_mode; int cpu_good_time; int cpu_off_time; int core_osc_time; int core_pmu_time; int core_off_time; int lp0_vec_phys; void* lp0_vec_size; void* cpu_pwr_good_en; void* combined_req; void* sysclkreq_high; void* corereq_high; } ;
typedef int phandle_t ;


 int FUNC_0 (int ,char*,int*,int) ;
 void* FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct tegra124_pmc_softc *VAR_4, phandle_t VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8[2];

 VAR_6 = FUNC_0(VAR_5, "nvidia,suspend-mode", &VAR_7, sizeof(VAR_7));
 if (VAR_6 > 0) {
  switch (VAR_7) {
  case 0:
   VAR_4->suspend_mode = VAR_0;
   break;

  case 1:
   VAR_4->suspend_mode = VAR_1;
   break;

  case 2:
   VAR_4->suspend_mode = VAR_2;
   break;

  default:
   VAR_4->suspend_mode = VAR_3;
   break;
  }
 }

 VAR_6 = FUNC_0(VAR_5, "nvidia,cpu-pwr-good-time", &VAR_7, sizeof(VAR_7));
 if (VAR_6 > 0) {
  VAR_4->cpu_good_time = VAR_7;
  VAR_4->suspend_mode = VAR_3;
 }

 VAR_6 = FUNC_0(VAR_5, "nvidia,cpu-pwr-off-time", &VAR_7, sizeof(VAR_7));
 if (VAR_6 > 0) {
  VAR_4->cpu_off_time = VAR_7;
  VAR_4->suspend_mode = VAR_3;
 }

 VAR_6 = FUNC_0(VAR_5, "nvidia,core-pwr-good-time", VAR_8,
     sizeof(VAR_8));
 if (VAR_6 == sizeof(VAR_8)) {
  VAR_4->core_osc_time = VAR_8[0];
  VAR_4->core_pmu_time = VAR_8[1];
  VAR_4->suspend_mode = VAR_3;
 }

 VAR_6 = FUNC_0(VAR_5, "nvidia,core-pwr-off-time", &VAR_7, sizeof(VAR_7));
 if (VAR_6 > 0) {
  VAR_4->core_off_time = VAR_7;
  VAR_4->suspend_mode = VAR_3;
 }

 VAR_4->corereq_high =
     FUNC_1(VAR_5, "nvidia,core-power-req-active-high");
 VAR_4->sysclkreq_high =
     FUNC_1(VAR_5, "nvidia,sys-clock-req-active-high");
 VAR_4->combined_req =
     FUNC_1(VAR_5, "nvidia,combined-power-req");
 VAR_4->cpu_pwr_good_en =
     FUNC_1(VAR_5, "nvidia,cpu-pwr-good-en");

 VAR_6 = FUNC_0(VAR_5, "nvidia,lp0-vec", VAR_8, sizeof(VAR_8));
 if (VAR_6 == sizeof(VAR_8)) {

  VAR_4->lp0_vec_phys = VAR_8[0];
  VAR_4->core_pmu_time = VAR_8[1];
  VAR_4->lp0_vec_size = VAR_3;
  if (VAR_4->suspend_mode == VAR_0)
   VAR_4->suspend_mode = VAR_1;
 }
 return 0;
}
