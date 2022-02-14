
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siginfo {scalar_t__ si_sys_private; int si_overrun; int si_tid; } ;
struct k_itimer {scalar_t__ it_requeue_pending; scalar_t__ it_clock; scalar_t__ it_overrun_last; } ;


 struct k_itimer* FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (struct k_itimer*) ;
 int FUNC_2 (struct k_itimer*) ;
 int FUNC_3 (struct k_itimer*,unsigned long) ;

void FUNC_4(struct siginfo *VAR_0)
{
 struct k_itimer *VAR_1;
 unsigned long VAR_2;

 VAR_1 = FUNC_0(VAR_0->si_tid, &VAR_2);

 if (VAR_1 && VAR_1->it_requeue_pending == VAR_0->si_sys_private) {
  if (VAR_1->it_clock < 0)
   FUNC_1(VAR_1);
  else
   FUNC_2(VAR_1);

  VAR_0->si_overrun += VAR_1->it_overrun_last;
 }

 if (VAR_1)
  FUNC_3(VAR_1, VAR_2);
}
