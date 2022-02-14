
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace {int lock; scalar_t__ vfork_stop; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct utrace* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,struct utrace*,int ) ;

void FUNC_4(struct task_struct *VAR_1)
{
 struct utrace *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->vfork_stop) {
  FUNC_0(&VAR_2->lock);
  VAR_2->vfork_stop = 0;
  FUNC_1(&VAR_2->lock);
  FUNC_3(VAR_1, VAR_2, VAR_0);
 }
}
