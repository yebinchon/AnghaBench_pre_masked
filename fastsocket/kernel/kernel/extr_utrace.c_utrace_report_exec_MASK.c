
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace {int dummy; } ;
struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;
struct linux_binprm {int dummy; } ;
struct linux_binfmt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*,struct utrace*,int *,int ,int ,struct linux_binfmt*,struct linux_binprm*,struct pt_regs*) ;
 int FUNC_2 (int ) ;
 struct task_struct* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct utrace* FUNC_3 (struct task_struct*) ;

void FUNC_4(struct linux_binfmt *VAR_4, struct linux_binprm *VAR_5,
   struct pt_regs *VAR_6)
{
 struct task_struct *VAR_7 = VAR_1;
 struct utrace *VAR_8 = FUNC_3(VAR_7);
 FUNC_0(VAR_2);

 FUNC_1(VAR_7, VAR_8, &VAR_2, FUNC_2(VAR_0),
        VAR_3, VAR_4, VAR_5, VAR_6);
}
