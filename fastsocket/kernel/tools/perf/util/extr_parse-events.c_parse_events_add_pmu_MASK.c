
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu {int cpus; } ;
struct perf_event_attr {int dummy; } ;
struct list_head {int dummy; } ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (struct list_head**,int*,struct perf_event_attr*,int ,int ) ;
 int FUNC_1 (struct perf_event_attr*,struct list_head*,int ) ;
 int FUNC_2 (struct perf_event_attr*,int ,int) ;
 scalar_t__ FUNC_3 (struct perf_pmu*,struct list_head*) ;
 scalar_t__ FUNC_4 (struct perf_pmu*,struct perf_event_attr*,struct list_head*) ;
 struct perf_pmu* FUNC_5 (char*) ;
 int FUNC_6 (struct list_head*) ;

int FUNC_7(struct list_head **VAR_1, int *VAR_2,
    char *VAR_3, struct list_head *VAR_4)
{
 struct perf_event_attr VAR_5;
 struct perf_pmu *VAR_6;

 VAR_6 = FUNC_5(VAR_3);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 if (FUNC_3(VAR_6, VAR_4))
  return -VAR_0;





 FUNC_1(&VAR_5, VAR_4, 0);

 if (FUNC_4(VAR_6, &VAR_5, VAR_4))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, &VAR_5, FUNC_6(VAR_4),
      VAR_6->cpus);
}
