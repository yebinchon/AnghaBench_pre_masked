
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_timer_instance {scalar_t__ running; int running_list; struct ct_timer* timer_base; } ;
struct ct_timer {int lock; } ;


 int FUNC_0 (struct ct_timer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ct_timer_instance *VAR_0)
{
 struct ct_timer *VAR_1 = VAR_0->timer_base;
 unsigned long VAR_2;

 FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_1(&VAR_0->running_list);
 VAR_0->running = 0;
 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_1);
}
