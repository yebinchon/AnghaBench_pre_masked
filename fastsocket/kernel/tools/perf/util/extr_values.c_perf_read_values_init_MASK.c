
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_read_values {int threads_max; int counters_max; scalar_t__ counters; void* countername; void* counterrawid; scalar_t__ threads; void* value; void* tid; void* pid; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (int) ;

void FUNC_2(struct perf_read_values *VAR_0)
{
 VAR_0->threads_max = 16;
 VAR_0->pid = FUNC_1(VAR_0->threads_max * sizeof(*VAR_0->pid));
 VAR_0->tid = FUNC_1(VAR_0->threads_max * sizeof(*VAR_0->tid));
 VAR_0->value = FUNC_1(VAR_0->threads_max * sizeof(*VAR_0->value));
 if (!VAR_0->pid || !VAR_0->tid || !VAR_0->value)
  FUNC_0("failed to allocate read_values threads arrays");
 VAR_0->threads = 0;

 VAR_0->counters_max = 16;
 VAR_0->counterrawid = FUNC_1(VAR_0->counters_max
          * sizeof(*VAR_0->counterrawid));
 VAR_0->countername = FUNC_1(VAR_0->counters_max
         * sizeof(*VAR_0->countername));
 if (!VAR_0->counterrawid || !VAR_0->countername)
  FUNC_0("failed to allocate read_values counters arrays");
 VAR_0->counters = 0;
}
