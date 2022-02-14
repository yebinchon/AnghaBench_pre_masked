
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; int perf_event_mutex; scalar_t__* perf_event_ctxp; } ;
struct pmu {int task_ctx_nr; int pmu_cpu_context; } ;
struct perf_event_context {int pin_count; int lock; } ;
struct perf_cpu_context {struct perf_event_context ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct perf_event_context* FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 struct perf_event_context* FUNC_1 (struct pmu*,struct task_struct*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct perf_event_context*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct perf_cpu_context* FUNC_7 (int ,int) ;
 struct perf_event_context* FUNC_8 (struct task_struct*,int,unsigned long*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct perf_event_context*) ;
 int FUNC_11 (scalar_t__,struct perf_event_context*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (struct perf_event_context*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static struct perf_event_context *
FUNC_15(struct pmu *VAR_8, struct task_struct *VAR_9, int VAR_10)
{
 struct perf_event_context *VAR_11;
 struct perf_cpu_context *VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15;

 if (!VAR_9) {

  if (FUNC_9() && !FUNC_2(VAR_0))
   return FUNC_0(-VAR_1);






  if (!FUNC_3(VAR_10))
   return FUNC_0(-VAR_4);

  VAR_12 = FUNC_7(VAR_8->pmu_cpu_context, VAR_10);
  VAR_11 = &VAR_12->ctx;
  FUNC_4(VAR_11);
  ++VAR_11->pin_count;

  return VAR_11;
 }

 VAR_15 = -VAR_3;
 VAR_14 = VAR_8->task_ctx_nr;
 if (VAR_14 < 0)
  goto errout;

retry:
 VAR_11 = FUNC_8(VAR_9, VAR_14, &VAR_13);
 if (VAR_11) {
  FUNC_13(VAR_11);
  ++VAR_11->pin_count;
  FUNC_12(&VAR_11->lock, VAR_13);
 } else {
  VAR_11 = FUNC_1(VAR_8, VAR_9);
  VAR_15 = -VAR_5;
  if (!VAR_11)
   goto errout;

  VAR_15 = 0;
  FUNC_5(&VAR_9->perf_event_mutex);




  if (VAR_9->flags & VAR_7)
   VAR_15 = -VAR_6;
  else if (VAR_9->perf_event_ctxp[VAR_14])
   VAR_15 = -VAR_2;
  else {
   FUNC_4(VAR_11);
   ++VAR_11->pin_count;
   FUNC_11(VAR_9->perf_event_ctxp[VAR_14], VAR_11);
  }
  FUNC_6(&VAR_9->perf_event_mutex);

  if (FUNC_14(VAR_15)) {
   FUNC_10(VAR_11);

   if (VAR_15 == -VAR_2)
    goto retry;
   goto errout;
  }
 }

 return VAR_11;

errout:
 return FUNC_0(VAR_15);
}
