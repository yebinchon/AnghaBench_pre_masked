
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {unsigned int sched_scan_plans_num; unsigned int max_sched_scan_plans; struct sched_scan_plan* sched_scan_plans; scalar_t__ max_sched_scan_plan_iterations; int max_sched_scan_plan_interval; } ;
struct sched_scan_plan {int interval; scalar_t__ iterations; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,char*,char const**) ;
 int FUNC_1 (struct sched_scan_plan*) ;
 int FUNC_2 (struct sched_scan_plan*,struct sched_scan_plan*,int) ;
 struct sched_scan_plan* FUNC_3 (struct sched_scan_plan*,unsigned int,int) ;
 int FUNC_4 (char const*,char*,int *,scalar_t__*) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(struct wpa_supplicant *VAR_3, const char *VAR_4)
{
 struct sched_scan_plan *VAR_5 = ((void*)0);
 const char *VAR_6, *VAR_7 = ((void*)0);
 unsigned int VAR_8 = 0;

 if (!VAR_4)
  return -1;

 if (!VAR_4[0]) {
  FUNC_5(VAR_0, "Clear sched scan plans");
  FUNC_1(VAR_3->sched_scan_plans);
  VAR_3->sched_scan_plans = ((void*)0);
  VAR_3->sched_scan_plans_num = 0;
  return 0;
 }

 while ((VAR_6 = FUNC_0(VAR_4, " ", &VAR_7))) {
  int VAR_9;
  struct sched_scan_plan *VAR_10, *VAR_11;

  VAR_11 = FUNC_3(VAR_5, VAR_8 + 1, sizeof(*VAR_5));
  if (!VAR_11)
   goto fail;

  VAR_5 = VAR_11;
  VAR_10 = &VAR_5[VAR_8];
  VAR_8++;

  VAR_9 = FUNC_4(VAR_6, "%u:%u", &VAR_10->interval,
        &VAR_10->iterations);
  if (VAR_9 <= 0 || VAR_9 > 2 || !VAR_10->interval) {
   FUNC_5(VAR_1,
       "Invalid sched scan plan input: %s", VAR_6);
   goto fail;
  }

  if (VAR_10->interval > VAR_3->max_sched_scan_plan_interval) {
   FUNC_5(VAR_2,
       "scan plan %u: Scan interval too long(%u), use the maximum allowed(%u)",
       VAR_8, VAR_10->interval,
       VAR_3->max_sched_scan_plan_interval);
   VAR_10->interval =
    VAR_3->max_sched_scan_plan_interval;
  }

  if (VAR_9 == 1) {
   VAR_10->iterations = 0;
   break;
  }

  if (!VAR_10->iterations) {
   FUNC_5(VAR_1,
       "scan plan %u: Number of iterations cannot be zero",
       VAR_8);
   goto fail;
  }

  if (VAR_10->iterations >
      VAR_3->max_sched_scan_plan_iterations) {
   FUNC_5(VAR_2,
       "scan plan %u: Too many iterations(%u), use the maximum allowed(%u)",
       VAR_8, VAR_10->iterations,
       VAR_3->max_sched_scan_plan_iterations);
   VAR_10->iterations =
    VAR_3->max_sched_scan_plan_iterations;
  }

  FUNC_5(VAR_0,
      "scan plan %u: interval=%u iterations=%u",
      VAR_8, VAR_10->interval, VAR_10->iterations);
 }

 if (!VAR_5) {
  FUNC_5(VAR_1, "Invalid scan plans entry");
  goto fail;
 }

 if (FUNC_0(VAR_4, " ", &VAR_7) || VAR_5[VAR_8 - 1].iterations) {
  FUNC_5(VAR_1,
      "All scan plans but the last must specify a number of iterations");
  goto fail;
 }

 FUNC_5(VAR_0, "scan plan %u (last plan): interval=%u",
     VAR_8, VAR_5[VAR_8 - 1].interval);

 if (VAR_8 > VAR_3->max_sched_scan_plans) {
  FUNC_5(VAR_2,
      "Too many scheduled scan plans (only %u supported)",
      VAR_3->max_sched_scan_plans);
  FUNC_5(VAR_2,
      "Use only the first %u scan plans, and the last one (in infinite loop)",
      VAR_3->max_sched_scan_plans - 1);
  FUNC_2(&VAR_5[VAR_3->max_sched_scan_plans - 1],
     &VAR_5[VAR_8 - 1], sizeof(*VAR_5));
  VAR_8 = VAR_3->max_sched_scan_plans;
 }

 FUNC_1(VAR_3->sched_scan_plans);
 VAR_3->sched_scan_plans = VAR_5;
 VAR_3->sched_scan_plans_num = VAR_8;

 return 0;

fail:
 FUNC_1(VAR_5);
 FUNC_5(VAR_1, "invalid scan plans list");
 return -1;
}
