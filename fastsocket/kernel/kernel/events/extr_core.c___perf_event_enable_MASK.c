
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_context {int lock; int is_active; } ;
struct TYPE_2__ {scalar_t__ pinned; } ;
struct perf_event {scalar_t__ state; TYPE_1__ attr; struct perf_event* group_leader; struct perf_event_context* ctx; } ;
struct perf_cpu_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 struct perf_cpu_context* FUNC_1 (struct perf_event_context*) ;
 int FUNC_2 (struct perf_event*) ;
 int VAR_5 ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_5 (struct perf_event*,struct perf_cpu_context*,int) ;
 int FUNC_6 (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_7 (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*) ;
 scalar_t__ FUNC_8 (struct perf_event*) ;
 int FUNC_9 (struct perf_event*) ;
 int FUNC_10 (int ,struct perf_event_context*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct perf_event_context*) ;
 int FUNC_14 (struct perf_event*) ;

__attribute__((used)) static int FUNC_15(void *VAR_6)
{
 struct perf_event *VAR_7 = VAR_6;
 struct perf_event_context *VAR_8 = VAR_7->ctx;
 struct perf_event *VAR_9 = VAR_7->group_leader;
 struct perf_cpu_context *VAR_10 = FUNC_1(VAR_8);
 int VAR_11;

 if (FUNC_0(!VAR_8->is_active))
  return -VAR_1;

 FUNC_11(&VAR_8->lock);
 FUNC_13(VAR_8);

 if (VAR_7->state >= VAR_4)
  goto unlock;




 FUNC_10(VAR_5, VAR_8);

 FUNC_2(VAR_7);

 if (!FUNC_3(VAR_7)) {
  if (FUNC_8(VAR_7))
   FUNC_9(VAR_7);
  goto unlock;
 }





 if (VAR_9 != VAR_7 && VAR_9->state != VAR_2)
  goto unlock;

 if (!FUNC_5(VAR_7, VAR_10, 1)) {
  VAR_11 = -VAR_0;
 } else {
  if (VAR_7 == VAR_9)
   VAR_11 = FUNC_6(VAR_7, VAR_10, VAR_8);
  else
   VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_8);
 }

 if (VAR_11) {




  if (VAR_9 != VAR_7)
   FUNC_7(VAR_9, VAR_10, VAR_8);
  if (VAR_9->attr.pinned) {
   FUNC_14(VAR_9);
   VAR_9->state = VAR_3;
  }
 }

unlock:
 FUNC_12(&VAR_8->lock);

 return 0;
}
