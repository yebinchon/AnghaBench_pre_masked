
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_2__ {int sched_scan_results_wk; scalar_t__ sched_scan_req; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct wiphy*) ;
 TYPE_1__* FUNC_2 (struct wiphy*) ;

void FUNC_3(struct wiphy *VAR_1)
{
 FUNC_1(VAR_1);

 if (FUNC_2(VAR_1)->sched_scan_req)
  FUNC_0(VAR_0,
      &FUNC_2(VAR_1)->sched_scan_results_wk);
}
