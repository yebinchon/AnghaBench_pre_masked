
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct order_id {scalar_t__ thr; scalar_t__ instance; } ;



int FUNC_0(const void* VAR_0, const void* VAR_1)
{
        const struct order_id* VAR_2 = VAR_0;
        const struct order_id* VAR_3 = VAR_1;
        if(VAR_2->thr < VAR_3->thr) return -1;
        if(VAR_2->thr > VAR_3->thr) return 1;
        if(VAR_2->instance < VAR_3->instance) return -1;
        if(VAR_2->instance > VAR_3->instance) return 1;
        return 0;
}
