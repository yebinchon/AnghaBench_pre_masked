
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {int (* set_timer_irq ) (struct hw*,int) ;int (* set_timer_tick ) (struct hw*,int) ;} ;
struct ct_timer {int running; TYPE_1__* atc; } ;
struct TYPE_2__ {struct hw* hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct hw*,int) ;
 int FUNC_1 (struct hw*,int) ;

__attribute__((used)) static void FUNC_2(struct ct_timer *VAR_1, int VAR_2)
{
 struct hw *VAR_3 = VAR_1->atc->hw;
 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;
 VAR_3->set_timer_tick(VAR_3, VAR_2);
 if (!VAR_1->running)
  VAR_3->set_timer_irq(VAR_3, 1);
 VAR_1->running = 1;
}
