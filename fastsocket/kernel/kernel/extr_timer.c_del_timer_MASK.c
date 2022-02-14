
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tvec_base {scalar_t__ next_timer; scalar_t__ timer_jiffies; int lock; } ;
struct timer_list {scalar_t__ expires; int base; } ;


 int FUNC_0 (struct timer_list*,int) ;
 struct tvec_base* FUNC_1 (struct timer_list*,unsigned long*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct timer_list*) ;
 int FUNC_5 (struct timer_list*) ;

int FUNC_6(struct timer_list *VAR_0)
{
 struct tvec_base *VAR_1;
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_5(VAR_0);
 if (FUNC_4(VAR_0)) {
  VAR_1 = FUNC_1(VAR_0, &VAR_2);
  if (FUNC_4(VAR_0)) {
   FUNC_0(VAR_0, 1);
   if (VAR_0->expires == VAR_1->next_timer &&
       !FUNC_3(VAR_0->base))
    VAR_1->next_timer = VAR_1->timer_jiffies;
   VAR_3 = 1;
  }
  FUNC_2(&VAR_1->lock, VAR_2);
 }

 return VAR_3;
}
