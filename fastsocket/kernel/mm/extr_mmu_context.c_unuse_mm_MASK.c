
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * mm; } ;
struct mm_struct {int dummy; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (struct mm_struct*,struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

void FUNC_3(struct mm_struct *VAR_1)
{
 struct task_struct *VAR_2 = VAR_0;

 FUNC_1(VAR_2);
 VAR_2->mm = ((void*)0);

 FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_2);
}
