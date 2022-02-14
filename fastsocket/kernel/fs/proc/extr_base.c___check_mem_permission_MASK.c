
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mm_struct* FUNC_0 (int ) ;
 int VAR_2 ;
 struct task_struct* VAR_3 ;
 struct mm_struct* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct task_struct*) ;
 struct task_struct* FUNC_7 (struct task_struct*) ;

__attribute__((used)) static struct mm_struct *FUNC_8(struct task_struct *VAR_4)
{
 struct mm_struct *VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5)
  return FUNC_0(-VAR_0);





 if (VAR_4 == VAR_3)
  return VAR_5;





 if (FUNC_6(VAR_4)) {
  int VAR_6;
  FUNC_4();
  VAR_6 = (FUNC_7(VAR_4) == VAR_3);
  FUNC_5();
  if (VAR_6 && FUNC_3(VAR_4, VAR_2))
   return VAR_5;
 }




 FUNC_2(VAR_5);
 return FUNC_0(-VAR_1);
}
