
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tvec_base {int lock; int next_timer; } ;
struct timer_list {int expires; int base; int function; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct timer_list*,int ) ;
 int FUNC_2 (struct tvec_base*,struct timer_list*) ;
 struct tvec_base* FUNC_3 (int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct timer_list*) ;
 int FUNC_9 (struct timer_list*,struct tvec_base*) ;
 int FUNC_10 (struct timer_list*) ;
 int VAR_0 ;
 int FUNC_11 (int) ;

void FUNC_12(struct timer_list *VAR_1, int VAR_2)
{
 struct tvec_base *VAR_3 = FUNC_3(VAR_0, VAR_2);
 unsigned long VAR_4;

 FUNC_10(VAR_1);
 FUNC_0(FUNC_8(VAR_1) || !VAR_1->function);
 FUNC_4(&VAR_3->lock, VAR_4);
 FUNC_9(VAR_1, VAR_3);
 FUNC_1(VAR_1, VAR_1->expires);
 if (FUNC_7(VAR_1->expires, VAR_3->next_timer) &&
     !FUNC_6(VAR_1->base))
  VAR_3->next_timer = VAR_1->expires;
 FUNC_2(VAR_3, VAR_1);
 FUNC_11(VAR_2);
 FUNC_5(&VAR_3->lock, VAR_4);
}
