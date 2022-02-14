
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_setoptdata_t ;
struct TYPE_4__ {scalar_t__ (* dt_setopthdlr ) (int *,void*) ;void* dt_setoptarg; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *,void*) ;

int
FUNC_2(dtrace_hdl_t *VAR_2, dtrace_setoptdata_t *VAR_3)
{
 void *VAR_4 = VAR_2->dt_setoptarg;

 if (VAR_2->dt_setopthdlr == ((void*)0))
  return (0);

 if ((*VAR_2->dt_setopthdlr)(VAR_3, VAR_4) == VAR_0)
  return (FUNC_0(VAR_2, VAR_1));

 return (0);
}
