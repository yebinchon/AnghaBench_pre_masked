
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* dt_setoptarg; int * dt_setopthdlr; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int dtrace_handle_setopt_f ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int
FUNC_1(dtrace_hdl_t *VAR_1, dtrace_handle_setopt_f *VAR_2,
    void *VAR_3)
{
 if (VAR_2 == ((void*)0))
  return (FUNC_0(VAR_1, VAR_0));

 VAR_1->dt_setopthdlr = VAR_2;
 VAR_1->dt_setoptarg = VAR_3;

 return (0);
}
