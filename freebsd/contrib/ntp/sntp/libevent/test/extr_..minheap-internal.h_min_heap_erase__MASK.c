
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int min_heap_idx; } ;
struct event {TYPE_1__ ev_timeout_pos; } ;
struct TYPE_7__ {size_t n; struct event** p; } ;
typedef TYPE_2__ min_heap_t ;


 scalar_t__ FUNC_0 (struct event*,struct event*) ;
 int FUNC_1 (TYPE_2__*,int,struct event*) ;
 int FUNC_2 (TYPE_2__*,int,struct event*) ;

int FUNC_3(min_heap_t* VAR_0, struct event* VAR_1)
{
 if (-1 != VAR_1->ev_timeout_pos.min_heap_idx)
 {
  struct event *VAR_2 = VAR_0->p[--VAR_0->n];
  unsigned VAR_3 = (VAR_1->ev_timeout_pos.min_heap_idx - 1) / 2;





  if (VAR_1->ev_timeout_pos.min_heap_idx > 0 && FUNC_0(VAR_0->p[VAR_3], VAR_2))
   FUNC_2(VAR_0, VAR_1->ev_timeout_pos.min_heap_idx, VAR_2);
  else
   FUNC_1(VAR_0, VAR_1->ev_timeout_pos.min_heap_idx, VAR_2);
  VAR_1->ev_timeout_pos.min_heap_idx = -1;
  return 0;
 }
 return -1;
}
