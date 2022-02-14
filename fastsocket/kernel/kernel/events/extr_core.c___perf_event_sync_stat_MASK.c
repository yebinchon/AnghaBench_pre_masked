
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int inherit_stat; } ;
struct perf_event {int state; int total_time_running; int total_time_enabled; int count; TYPE_2__* pmu; TYPE_1__ attr; } ;
struct TYPE_4__ {int (* read ) (struct perf_event*) ;} ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct perf_event*) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_0,
         struct perf_event *VAR_1)
{
 u64 VAR_2;

 if (!VAR_0->attr.inherit_stat)
  return;
 switch (VAR_0->state) {
 case 129:
  VAR_0->pmu->read(VAR_0);


 case 128:
  FUNC_6(VAR_0);
  break;

 default:
  break;
 }





 VAR_2 = FUNC_0(&VAR_1->count);
 VAR_2 = FUNC_2(&VAR_0->count, VAR_2);
 FUNC_1(&VAR_1->count, VAR_2);

 FUNC_5(VAR_0->total_time_enabled, VAR_1->total_time_enabled);
 FUNC_5(VAR_0->total_time_running, VAR_1->total_time_running);




 FUNC_3(VAR_0);
 FUNC_3(VAR_1);
}
