
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace {int dummy; } ;
struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*,struct utrace*,int *,int ,int ,struct pt_regs*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct task_struct* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct utrace* FUNC_3 (struct task_struct*) ;

void FUNC_4(struct pt_regs *VAR_4)
{
 struct task_struct *VAR_5 = VAR_1;
 struct utrace *VAR_6 = FUNC_3(VAR_5);
 FUNC_0(VAR_2);

 FUNC_1(VAR_5, VAR_6, &VAR_2, FUNC_2(VAR_0),
        VAR_3, VAR_4);
}
