
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_context {int mutex; int generation; int parent_ctx; int pmu; } ;
struct perf_event_attr {int dummy; } ;
struct perf_event {int mutex; int generation; int parent_ctx; int pmu; } ;
typedef int perf_overflow_handler_t ;


 struct perf_event_context* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct perf_event_context*) ;
 int FUNC_2 (struct perf_event_context*) ;
 int FUNC_3 (int ) ;
 struct perf_event_context* FUNC_4 (int ,struct task_struct*,int) ;
 int FUNC_5 (struct perf_event_context*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct perf_event_context* FUNC_8 (struct perf_event_attr*,int,struct task_struct*,int *,int *,int ,void*) ;
 int FUNC_9 (struct perf_event_context*,struct perf_event_context*,int) ;
 int FUNC_10 (struct perf_event_context*) ;

struct perf_event *
FUNC_11(struct perf_event_attr *VAR_0, int VAR_1,
     struct task_struct *VAR_2,
     perf_overflow_handler_t VAR_3,
     void *VAR_4)
{
 struct perf_event_context *VAR_5;
 struct perf_event *VAR_6;
 int VAR_7;





 VAR_6 = FUNC_8(VAR_0, VAR_1, VAR_2, ((void*)0), ((void*)0),
     VAR_3, VAR_4);
 if (FUNC_1(VAR_6)) {
  VAR_7 = FUNC_2(VAR_6);
  goto err;
 }

 VAR_5 = FUNC_4(VAR_6->pmu, VAR_2, VAR_1);
 if (FUNC_1(VAR_5)) {
  VAR_7 = FUNC_2(VAR_5);
  goto err_free;
 }

 FUNC_3(VAR_5->parent_ctx);
 FUNC_6(&VAR_5->mutex);
 FUNC_9(VAR_5, VAR_6, VAR_1);
 ++VAR_5->generation;
 FUNC_10(VAR_5);
 FUNC_7(&VAR_5->mutex);

 return VAR_6;

err_free:
 FUNC_5(VAR_6);
err:
 return FUNC_0(VAR_7);
}
