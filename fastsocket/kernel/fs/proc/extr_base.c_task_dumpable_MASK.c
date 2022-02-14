
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mm_struct* mm; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_0)
{
 int VAR_1 = 0;
 struct mm_struct *VAR_2;

 FUNC_1(VAR_0);
 VAR_2 = VAR_0->mm;
 if (VAR_2)
  VAR_1 = FUNC_0(VAR_2);
 FUNC_2(VAR_0);
 if(VAR_1 == 1)
  return 1;
 return 0;
}
