
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mm_struct* mm; } ;
struct mm_struct {int mm_users; } ;


 int FUNC_0 (int *) ;

struct mm_struct *
FUNC_1(struct task_struct *VAR_0)
{
 struct mm_struct *VAR_1;

 VAR_1 = VAR_0->mm;
 if (VAR_1 != ((void*)0)) {
  FUNC_0(&VAR_1->mm_users);
  return (VAR_1);
 }
 return (((void*)0));
}
