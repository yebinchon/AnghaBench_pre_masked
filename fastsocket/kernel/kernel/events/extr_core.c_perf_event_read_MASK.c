
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event_context {int lock; scalar_t__ is_active; } ;
struct perf_event {scalar_t__ state; struct perf_event_context* ctx; int oncpu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int ,int ,struct perf_event*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event_context*) ;
 int FUNC_6 (struct perf_event*) ;

__attribute__((used)) static u64 FUNC_7(struct perf_event *VAR_3)
{




 if (VAR_3->state == VAR_0) {
  FUNC_1(VAR_3->oncpu,
      VAR_2, VAR_3, 1);
 } else if (VAR_3->state == VAR_1) {
  struct perf_event_context *VAR_4 = VAR_3->ctx;
  unsigned long VAR_5;

  FUNC_2(&VAR_4->lock, VAR_5);





  if (VAR_4->is_active) {
   FUNC_5(VAR_4);
   FUNC_4(VAR_3);
  }
  FUNC_6(VAR_3);
  FUNC_3(&VAR_4->lock, VAR_5);
 }

 return FUNC_0(VAR_3);
}
