
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ct_timer_instance {int instance_list; struct ct_timer* timer_base; } ;
struct ct_timer {int list_lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* free_instance ) (struct ct_timer_instance*) ;int (* stop ) (struct ct_timer_instance*) ;} ;


 int FUNC_0 (struct ct_timer_instance*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ct_timer_instance*) ;
 int FUNC_5 (struct ct_timer_instance*) ;

void FUNC_6(struct ct_timer_instance *VAR_0)
{
 struct ct_timer *VAR_1 = VAR_0->timer_base;

 VAR_1->ops->stop(VAR_0);
 if (VAR_1->ops->free_instance)
  VAR_1->ops->free_instance(VAR_0);

 FUNC_2(&VAR_1->list_lock);
 FUNC_1(&VAR_0->instance_list);
 FUNC_3(&VAR_1->list_lock);

 FUNC_0(VAR_0);
}
