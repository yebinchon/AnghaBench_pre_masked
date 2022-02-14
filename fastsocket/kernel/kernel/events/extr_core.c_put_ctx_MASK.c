
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int rcu_head; scalar_t__ task; struct perf_event_context* parent_ctx; int refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct perf_event_context *VAR_1)
{
 if (FUNC_0(&VAR_1->refcount)) {
  if (VAR_1->parent_ctx)
   FUNC_3(VAR_1->parent_ctx);
  if (VAR_1->task)
   FUNC_2(VAR_1->task);
  FUNC_1(&VAR_1->rcu_head, VAR_0);
 }
}
