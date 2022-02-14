
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int event_lock; } ;
struct perf_event {int waitq; int rb_entry; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_0,
          struct ring_buffer *VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_1(&VAR_0->rb_entry))
  return;

 FUNC_2(&VAR_1->event_lock, VAR_2);
 FUNC_0(&VAR_0->rb_entry);
 FUNC_4(&VAR_0->waitq);
 FUNC_3(&VAR_1->event_lock, VAR_2);
}
