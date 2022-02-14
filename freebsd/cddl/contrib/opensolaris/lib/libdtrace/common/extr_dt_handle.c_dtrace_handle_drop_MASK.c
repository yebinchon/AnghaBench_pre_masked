
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* dt_droparg; int * dt_drophdlr; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int dtrace_handle_drop_f ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int
FUNC_1(dtrace_hdl_t *VAR_1, dtrace_handle_drop_f *VAR_2, void *VAR_3)
{
 if (VAR_1->dt_drophdlr != ((void*)0))
  return (FUNC_0(VAR_1, VAR_0));

 VAR_1->dt_drophdlr = VAR_2;
 VAR_1->dt_droparg = VAR_3;

 return (0);
}
