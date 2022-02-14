
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_read_values {int counters_max; int threads; void** value; void* countername; void* counterrawid; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (void*,int) ;

__attribute__((used)) static void FUNC_2(struct perf_read_values *VAR_0)
{
 int VAR_1;

 VAR_0->counters_max *= 2;
 VAR_0->counterrawid = FUNC_1(VAR_0->counterrawid,
           VAR_0->counters_max * sizeof(*VAR_0->counterrawid));
 VAR_0->countername = FUNC_1(VAR_0->countername,
          VAR_0->counters_max * sizeof(*VAR_0->countername));
 if (!VAR_0->counterrawid || !VAR_0->countername)
  FUNC_0("failed to enlarge read_values counters arrays");

 for (VAR_1 = 0; VAR_1 < VAR_0->threads; VAR_1++) {
  VAR_0->value[VAR_1] = FUNC_1(VAR_0->value[VAR_1],
        VAR_0->counters_max * sizeof(**VAR_0->value));
  if (!VAR_0->value[VAR_1])
   FUNC_0("failed to enlarge read_values counters arrays");
 }
}
