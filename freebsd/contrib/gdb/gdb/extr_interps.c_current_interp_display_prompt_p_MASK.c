
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data; TYPE_1__* procs; } ;
struct TYPE_3__ {int (* prompt_proc_p ) (int ) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1 (void)
{
  if (VAR_0 == ((void*)0)
      || VAR_0->procs->prompt_proc_p == ((void*)0))
    return 0;
  else
    return VAR_0->procs->prompt_proc_p (VAR_0->
            data);
}
