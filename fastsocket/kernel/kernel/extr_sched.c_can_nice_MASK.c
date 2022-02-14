
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* signal; } ;
struct TYPE_4__ {TYPE_1__* rlim; } ;
struct TYPE_3__ {int rlim_cur; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(const struct task_struct *VAR_2, const int VAR_3)
{

 int VAR_4 = 20 - VAR_3;

 return (VAR_4 <= VAR_2->signal->rlim[VAR_1].rlim_cur ||
  FUNC_0(VAR_0));
}
