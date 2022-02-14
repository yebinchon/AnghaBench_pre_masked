
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_4__ {scalar_t__ dm_pid; scalar_t__ dm_nctflibs; } ;
typedef TYPE_1__ dt_module_t ;


 int * FUNC_0 (int *,TYPE_1__*) ;

int
FUNC_1(dtrace_hdl_t *VAR_0, dt_module_t *VAR_1)
{
 if (VAR_1->dm_pid != 0 && VAR_1->dm_nctflibs > 0)
  return (1);
 return (FUNC_0(VAR_0, VAR_1) != ((void*)0));
}
