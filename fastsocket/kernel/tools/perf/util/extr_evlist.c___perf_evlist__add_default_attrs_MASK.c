
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evlist {int dummy; } ;
struct perf_event_attr {int dummy; } ;


 int FUNC_0 (struct perf_event_attr*) ;
 int FUNC_1 (struct perf_evlist*,struct perf_event_attr*,size_t) ;

int FUNC_2(struct perf_evlist *VAR_0,
         struct perf_event_attr *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_1 + VAR_3);

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
