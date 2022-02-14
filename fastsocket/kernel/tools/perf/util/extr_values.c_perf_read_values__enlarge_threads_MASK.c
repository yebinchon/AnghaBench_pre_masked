
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_read_values {int threads_max; void* value; void* tid; void* pid; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (void*,int) ;

__attribute__((used)) static void FUNC_2(struct perf_read_values *VAR_0)
{
 VAR_0->threads_max *= 2;
 VAR_0->pid = FUNC_1(VAR_0->pid,
         VAR_0->threads_max * sizeof(*VAR_0->pid));
 VAR_0->tid = FUNC_1(VAR_0->tid,
         VAR_0->threads_max * sizeof(*VAR_0->tid));
 VAR_0->value = FUNC_1(VAR_0->value,
    VAR_0->threads_max * sizeof(*VAR_0->value));
 if (!VAR_0->pid || !VAR_0->tid || !VAR_0->value)
  FUNC_0("failed to enlarge read_values threads arrays");
}
