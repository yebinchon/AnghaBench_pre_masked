
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct thread {scalar_t__ td_lend_user_pri; scalar_t__ td_user_pri; scalar_t__ td_base_user_pri; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ) ;

void
FUNC_1(struct thread *VAR_1, u_char VAR_2)
{

 FUNC_0(VAR_1, VAR_0);
 VAR_1->td_base_user_pri = VAR_2;
 if (VAR_1->td_lend_user_pri <= VAR_2)
  return;
 VAR_1->td_user_pri = VAR_2;
}
