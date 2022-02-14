
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int event_lock; int event_list; } ;
struct perf_event {int rb_entry; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_0,
          struct ring_buffer *VAR_1)
{
 unsigned long VAR_2;

 if (!FUNC_1(&VAR_0->rb_entry))
  return;

 FUNC_2(&VAR_1->event_lock, VAR_2);
 if (!FUNC_1(&VAR_0->rb_entry))
  goto unlock;

 FUNC_0(&VAR_0->rb_entry, &VAR_1->event_list);
unlock:
 FUNC_3(&VAR_1->event_lock, VAR_2);
}
