
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int refcount; int event_list; int flexible_groups; int pinned_groups; int mutex; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct perf_event_context *VAR_0)
{
 FUNC_3(&VAR_0->lock);
 FUNC_2(&VAR_0->mutex);
 FUNC_0(&VAR_0->pinned_groups);
 FUNC_0(&VAR_0->flexible_groups);
 FUNC_0(&VAR_0->event_list);
 FUNC_1(&VAR_0->refcount, 1);
}
