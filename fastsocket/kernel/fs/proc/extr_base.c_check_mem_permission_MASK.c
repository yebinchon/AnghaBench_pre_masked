
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int cred_guard_mutex; } ;
struct mm_struct {int dummy; } ;


 struct mm_struct* FUNC_0 (int) ;
 struct mm_struct* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct mm_struct *FUNC_4(struct task_struct *VAR_0)
{
 struct mm_struct *VAR_1;
 int VAR_2;





 VAR_2 = FUNC_2(&VAR_0->cred_guard_mutex);
 if (VAR_2)
  return FUNC_0(VAR_2);

 VAR_1 = FUNC_1(VAR_0);
 FUNC_3(&VAR_0->cred_guard_mutex);

 return VAR_1;
}
