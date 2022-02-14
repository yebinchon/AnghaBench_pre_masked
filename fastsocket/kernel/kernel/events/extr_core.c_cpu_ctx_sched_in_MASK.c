
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_context {int dummy; } ;
struct perf_cpu_context {struct perf_event_context ctx; } ;
typedef enum event_type_t { ____Placeholder_event_type_t } event_type_t ;


 int FUNC_0 (struct perf_event_context*,struct perf_cpu_context*,int,struct task_struct*) ;

__attribute__((used)) static void FUNC_1(struct perf_cpu_context *VAR_0,
        enum event_type_t VAR_1,
        struct task_struct *VAR_2)
{
 struct perf_event_context *VAR_3 = &VAR_0->ctx;

 FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2);
}
