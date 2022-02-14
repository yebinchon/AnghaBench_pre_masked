
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct rlimit {int dummy; } ;
struct TYPE_2__ {int (* task_setrlimit ) (struct task_struct*,unsigned int,struct rlimit*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct task_struct*,unsigned int,struct rlimit*) ;

int FUNC_1(struct task_struct *VAR_1, unsigned int VAR_2,
  struct rlimit *VAR_3)
{
 return VAR_0->task_setrlimit(VAR_1, VAR_2, VAR_3);
}
