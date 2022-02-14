
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct interp {int data; TYPE_1__* procs; } ;
struct TYPE_2__ {int (* exec_proc ) (int ,char const*) ;} ;


 int FUNC_0 (int ,char const*) ;

int
FUNC_1 (struct interp *VAR_0, const char *VAR_1)
{
  if (VAR_0->procs->exec_proc != ((void*)0))
    {
      return VAR_0->procs->exec_proc (VAR_0->data, VAR_1);
    }
  return 0;
}
