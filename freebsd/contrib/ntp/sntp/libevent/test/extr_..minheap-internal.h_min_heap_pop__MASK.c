
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int min_heap_idx; } ;
struct event {TYPE_1__ ev_timeout_pos; } ;
struct TYPE_6__ {int n; struct event** p; } ;
typedef TYPE_2__ min_heap_t ;


 int FUNC_0 (TYPE_2__*,unsigned int,struct event*) ;

struct event* FUNC_1(min_heap_t* VAR_0)
{
 if (VAR_0->n)
 {
  struct event* VAR_1 = *VAR_0->p;
  FUNC_0(VAR_0, 0u, VAR_0->p[--VAR_0->n]);
  VAR_1->ev_timeout_pos.min_heap_idx = -1;
  return VAR_1;
 }
 return 0;
}
