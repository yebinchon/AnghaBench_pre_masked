
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
typedef int pid_t ;
struct TYPE_2__ {int (* task_setpgid ) (struct task_struct*,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct task_struct*,int ) ;

int FUNC_1(struct task_struct *VAR_1, pid_t VAR_2)
{
 return VAR_0->task_setpgid(VAR_1, VAR_2);
}
