
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int min_heap_idx; } ;
struct event {TYPE_1__ ev_timeout_pos; } ;
struct TYPE_8__ {int * p; } ;
typedef TYPE_2__ min_heap_t ;


 scalar_t__ FUNC_0 (int ,struct event*) ;
 int FUNC_1 (TYPE_2__*,struct event*) ;
 int FUNC_2 (TYPE_2__*,int,struct event*) ;
 int FUNC_3 (TYPE_2__*,int,struct event*) ;

int FUNC_4(min_heap_t *VAR_0, struct event *VAR_1)
{
 if (-1 == VAR_1->ev_timeout_pos.min_heap_idx) {
  return FUNC_1(VAR_0, VAR_1);
 } else {
  unsigned VAR_2 = (VAR_1->ev_timeout_pos.min_heap_idx - 1) / 2;


  if (VAR_1->ev_timeout_pos.min_heap_idx > 0 && FUNC_0(VAR_0->p[VAR_2], VAR_1))
   FUNC_3(VAR_0, VAR_1->ev_timeout_pos.min_heap_idx, VAR_1);
  else
   FUNC_2(VAR_0, VAR_1->ev_timeout_pos.min_heap_idx, VAR_1);
  return 0;
 }
}
