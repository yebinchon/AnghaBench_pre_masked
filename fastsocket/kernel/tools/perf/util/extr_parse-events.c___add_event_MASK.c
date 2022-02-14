
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int node; int name; struct cpu_map* cpus; } ;
struct perf_event_attr {int dummy; } ;
struct list_head {int dummy; } ;
struct cpu_map {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct perf_event_attr*) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (int *,struct list_head*) ;
 struct list_head* FUNC_4 (int) ;
 struct perf_evsel* FUNC_5 (struct perf_event_attr*,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct list_head **VAR_1, int *VAR_2,
         struct perf_event_attr *VAR_3,
         char *VAR_4, struct cpu_map *VAR_5)
{
 struct perf_evsel *VAR_6;
 struct list_head *VAR_7 = *VAR_1;

 if (!VAR_7) {
  VAR_7 = FUNC_4(sizeof(*VAR_7));
  if (!VAR_7)
   return -VAR_0;
  FUNC_0(VAR_7);
 }

 FUNC_1(VAR_3);

 VAR_6 = FUNC_5(VAR_3, (*VAR_2)++);
 if (!VAR_6) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }

 VAR_6->cpus = VAR_5;
 if (VAR_4)
  VAR_6->name = FUNC_6(VAR_4);
 FUNC_3(&VAR_6->node, VAR_7);
 *VAR_1 = VAR_7;
 return 0;
}
