
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dt_errprog; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 void* FUNC_1 (TYPE_1__*,int *,int ) ;

void *
FUNC_2(dtrace_hdl_t *VAR_1)
{
 if (VAR_1->dt_errprog != ((void*)0))
  return (FUNC_1(VAR_1, VAR_1->dt_errprog, 0));

 (void) FUNC_0(VAR_1, VAR_0);
 return (((void*)0));
}
