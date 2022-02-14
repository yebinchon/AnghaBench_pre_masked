
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {unsigned int exit_code; int exit_state; scalar_t__ ptrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct task_struct*) ;
 int FUNC_1 (struct task_struct*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct task_struct *VAR_4, unsigned int VAR_5)
{
 bool VAR_6 = 0;

 if (!FUNC_5(VAR_5))
  return -VAR_0;


 FUNC_2(VAR_4);
 FUNC_1(VAR_4, VAR_1);

 FUNC_7(&VAR_3);




 if (VAR_4->ptrace) {
  VAR_4->exit_code = VAR_5;
  VAR_6 = FUNC_0(VAR_2, VAR_4);
  if (!VAR_4->exit_state)
   FUNC_6(VAR_4);
 }
 FUNC_8(&VAR_3);

 if (FUNC_4(VAR_6))
  FUNC_3(VAR_4);

 return 0;
}
