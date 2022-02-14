
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int (* getprocattr ) (struct task_struct*,char*,char**) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct task_struct*,char*,char**) ;

int FUNC_1(struct task_struct *VAR_1, char *VAR_2, char **VAR_3)
{
 return VAR_0->getprocattr(VAR_1, VAR_2, VAR_3);
}
