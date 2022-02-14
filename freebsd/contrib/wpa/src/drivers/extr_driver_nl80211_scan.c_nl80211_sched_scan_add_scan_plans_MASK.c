
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_driver_scan_params {unsigned int sched_scan_plans_num; struct sched_scan_plan* sched_scan_plans; } ;
struct TYPE_2__ {scalar_t__ max_sched_scan_plan_interval; scalar_t__ max_sched_scan_plan_iterations; } ;
struct wpa_driver_nl80211_data {TYPE_1__ capa; } ;
struct sched_scan_plan {scalar_t__ interval; scalar_t__ iterations; } ;
struct nlattr {int dummy; } ;
struct nl_msg {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nl_msg*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct nl_msg*,unsigned int) ;
 scalar_t__ FUNC_2 (struct nl_msg*,int ,scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_4(struct wpa_driver_nl80211_data *VAR_4,
      struct nl_msg *VAR_5,
      struct wpa_driver_scan_params *VAR_6)
{
 struct nlattr *VAR_7;
 struct sched_scan_plan *VAR_8 = VAR_6->sched_scan_plans;
 unsigned int VAR_9;

 VAR_7 = FUNC_1(VAR_5, VAR_1);
 if (!VAR_7)
  return -1;

 for (VAR_9 = 0; VAR_9 < VAR_6->sched_scan_plans_num; VAR_9++) {
  struct nlattr *VAR_10 = FUNC_1(VAR_5, VAR_9 + 1);

  if (!VAR_10)
   return -1;

  if (!VAR_8[VAR_9].interval ||
      VAR_8[VAR_9].interval >
      VAR_4->capa.max_sched_scan_plan_interval) {
   FUNC_3(VAR_0,
       "nl80211: sched scan plan no. %u: Invalid interval: %u",
       VAR_9, VAR_8[VAR_9].interval);
   return -1;
  }

  if (FUNC_2(VAR_5, VAR_2,
    VAR_8[VAR_9].interval))
   return -1;

  if (VAR_8[VAR_9].iterations >
      VAR_4->capa.max_sched_scan_plan_iterations) {
   FUNC_3(VAR_0,
       "nl80211: sched scan plan no. %u: Invalid number of iterations: %u",
       VAR_9, VAR_8[VAR_9].iterations);
   return -1;
  }

  if (VAR_8[VAR_9].iterations &&
      FUNC_2(VAR_5, VAR_3,
    VAR_8[VAR_9].iterations))
   return -1;

  FUNC_0(VAR_5, VAR_10);







  if (!VAR_8[VAR_9].iterations)
   break;
 }

 if (VAR_9 != VAR_6->sched_scan_plans_num - 1) {
  FUNC_3(VAR_0,
      "nl80211: All sched scan plans but the last must specify number of iterations");
  return -1;
 }

 FUNC_0(VAR_5, VAR_7);
 return 0;
}
