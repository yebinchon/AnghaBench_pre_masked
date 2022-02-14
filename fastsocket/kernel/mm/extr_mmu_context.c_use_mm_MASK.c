
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mm_struct* mm; struct mm_struct* active_mm; } ;
struct mm_struct {int mm_count; } ;


 int FUNC_0 (int *) ;
 struct task_struct* VAR_0 ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*,struct mm_struct*,struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;

void FUNC_5(struct mm_struct *VAR_1)
{
 struct mm_struct *VAR_2;
 struct task_struct *VAR_3 = VAR_0;

 FUNC_3(VAR_3);
 VAR_2 = VAR_3->active_mm;
 if (VAR_2 != VAR_1) {
  FUNC_0(&VAR_1->mm_count);
  VAR_3->active_mm = VAR_1;
 }
 VAR_3->mm = VAR_1;
 FUNC_2(VAR_2, VAR_1, VAR_3);
 FUNC_4(VAR_3);

 if (VAR_2 != VAR_1)
  FUNC_1(VAR_2);
}
