
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ct_timer_instance {struct ct_timer* timer_base; } ;
struct ct_timer {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop ) (struct ct_timer_instance*) ;} ;


 int FUNC_0 (struct ct_timer_instance*) ;

void FUNC_1(struct ct_timer_instance *VAR_0)
{
 struct ct_timer *VAR_1 = VAR_0->timer_base;
 VAR_1->ops->stop(VAR_0);
}
