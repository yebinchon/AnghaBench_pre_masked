
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct thread {scalar_t__ td_lend_user_pri; scalar_t__ td_user_pri; scalar_t__ td_base_user_pri; } ;



void
FUNC_0(struct thread *VAR_0, u_char VAR_1)
{

 VAR_0->td_base_user_pri = VAR_1;
 if (VAR_0->td_lend_user_pri <= VAR_1)
  return;
 VAR_0->td_user_pri = VAR_1;
}
