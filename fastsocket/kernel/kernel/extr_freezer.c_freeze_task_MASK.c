
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*,int ) ;

bool FUNC_8(struct task_struct *VAR_1, bool VAR_2)
{





 if (!FUNC_1(VAR_1)) {
  FUNC_3();
  if (FUNC_2(VAR_1))
   return 0;

  if (!VAR_2 || FUNC_5(VAR_1))
   FUNC_4(VAR_1);
  else
   return 0;
 }

 if (FUNC_5(VAR_1)) {
  if (!FUNC_6(VAR_1))
   FUNC_0(VAR_1);
 } else if (VAR_2) {
  return 0;
 } else {
  FUNC_7(VAR_1, VAR_0);
 }

 return 1;
}
