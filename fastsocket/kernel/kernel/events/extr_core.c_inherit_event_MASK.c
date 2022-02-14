
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct task_struct {int dummy; } ;
struct perf_event_context {int parent_ctx; int lock; } ;
struct hw_perf_event {int period_left; void* last_period; void* sample_period; } ;
struct TYPE_2__ {scalar_t__ freq; } ;
struct perf_event {scalar_t__ state; int child_mutex; int child_list; struct perf_event_context* ctx; int overflow_handler_context; int overflow_handler; struct hw_perf_event hw; TYPE_1__ attr; int refcount; int cpu; struct perf_event* parent; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event_context*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct perf_event*) ;
 int FUNC_11 (struct perf_event*) ;
 struct perf_event* FUNC_12 (TYPE_1__*,int ,struct task_struct*,struct perf_event*,struct perf_event*,int *,int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static struct perf_event *
FUNC_15(struct perf_event *VAR_2,
       struct task_struct *VAR_3,
       struct perf_event_context *VAR_4,
       struct task_struct *VAR_5,
       struct perf_event *VAR_6,
       struct perf_event_context *VAR_7)
{
 struct perf_event *VAR_8;
 unsigned long VAR_9;







 if (VAR_2->parent)
  VAR_2 = VAR_2->parent;

 VAR_8 = FUNC_12(&VAR_2->attr,
        VAR_2->cpu,
        VAR_5,
        VAR_6, VAR_2,
               ((void*)0), ((void*)0));
 if (FUNC_0(VAR_8))
  return VAR_8;

 if (!FUNC_3(&VAR_2->refcount)) {
  FUNC_4(VAR_8);
  return ((void*)0);
 }

 FUNC_5(VAR_7);






 if (VAR_2->state >= VAR_0)
  VAR_8->state = VAR_0;
 else
  VAR_8->state = VAR_1;

 if (VAR_2->attr.freq) {
  u64 VAR_10 = VAR_2->hw.sample_period;
  struct hw_perf_event *VAR_11 = &VAR_8->hw;

  VAR_11->sample_period = VAR_10;
  VAR_11->last_period = VAR_10;

  FUNC_7(&VAR_11->period_left, VAR_10);
 }

 VAR_8->ctx = VAR_7;
 VAR_8->overflow_handler = VAR_2->overflow_handler;
 VAR_8->overflow_handler_context
  = VAR_2->overflow_handler_context;




 FUNC_10(VAR_8);
 FUNC_11(VAR_8);




 FUNC_13(&VAR_7->lock, VAR_9);
 FUNC_2(VAR_8, VAR_7);
 FUNC_14(&VAR_7->lock, VAR_9);




 FUNC_1(VAR_2->ctx->parent_ctx);
 FUNC_8(&VAR_2->child_mutex);
 FUNC_6(&VAR_8->child_list, &VAR_2->child_list);
 FUNC_9(&VAR_2->child_mutex);

 return VAR_8;
}
