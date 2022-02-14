
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* dt_bufarg; int * dt_bufhdlr; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int dtrace_handle_buffered_f ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int
FUNC_1(dtrace_hdl_t *VAR_2, dtrace_handle_buffered_f *VAR_3,
    void *VAR_4)
{
 if (VAR_2->dt_bufhdlr != ((void*)0))
  return (FUNC_0(VAR_2, VAR_0));

 if (VAR_3 == ((void*)0))
  return (FUNC_0(VAR_2, VAR_1));

 VAR_2->dt_bufhdlr = VAR_3;
 VAR_2->dt_bufarg = VAR_4;

 return (0);
}
