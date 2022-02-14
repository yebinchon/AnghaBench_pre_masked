
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int min_heap_idx; } ;
struct event {TYPE_1__ ev_timeout_pos; } ;
struct TYPE_5__ {struct event** p; } ;
typedef TYPE_2__ min_heap_t ;


 scalar_t__ FUNC_0 (struct event*,struct event*) ;

void FUNC_1(min_heap_t* VAR_0, unsigned VAR_1, struct event* VAR_2)
{
    unsigned VAR_3 = (VAR_1 - 1) / 2;
    do
    {
 (VAR_0->p[VAR_1] = VAR_0->p[VAR_3])->ev_timeout_pos.min_heap_idx = VAR_1;
 VAR_1 = VAR_3;
 VAR_3 = (VAR_1 - 1) / 2;
    } while (VAR_1 && FUNC_0(VAR_0->p[VAR_3], VAR_2));
    (VAR_0->p[VAR_1] = VAR_2)->ev_timeout_pos.min_heap_idx = VAR_1;
}
