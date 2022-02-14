
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_flags; int l_blocking; int l_ex_holders; int l_ro_holders; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 int FUNC_1 (struct user_lock_res*) ;

__attribute__((used)) static void FUNC_2(struct user_lock_res *VAR_1)
{
 int VAR_2 = 0;

 if (!(VAR_1->l_flags & VAR_0))
  return;

 switch (VAR_1->l_blocking) {
 case 129:
  if (!VAR_1->l_ex_holders && !VAR_1->l_ro_holders)
   VAR_2 = 1;
  break;
 case 128:
  if (!VAR_1->l_ex_holders)
   VAR_2 = 1;
  break;
 default:
  FUNC_0();
 }

 if (VAR_2)
  FUNC_1(VAR_1);
}
