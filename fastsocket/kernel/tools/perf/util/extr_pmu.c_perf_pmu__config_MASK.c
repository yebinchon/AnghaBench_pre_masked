
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu {int format; int type; } ;
struct perf_event_attr {int type; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct perf_event_attr*,struct list_head*) ;

int FUNC_1(struct perf_pmu *VAR_0, struct perf_event_attr *VAR_1,
       struct list_head *VAR_2)
{
 VAR_1->type = VAR_0->type;
 return FUNC_0(&VAR_0->format, VAR_1, VAR_2);
}
