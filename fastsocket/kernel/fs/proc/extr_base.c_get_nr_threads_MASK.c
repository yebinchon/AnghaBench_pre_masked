
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct TYPE_2__ {int count; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct task_struct*,unsigned long*) ;
 int FUNC_2 (struct task_struct*,unsigned long*) ;

int FUNC_3(struct task_struct *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2 = 0;

 if (FUNC_1(VAR_0, &VAR_1)) {
  VAR_2 = FUNC_0(&VAR_0->signal->count);
  FUNC_2(VAR_0, &VAR_1);
 }
 return VAR_2;
}
