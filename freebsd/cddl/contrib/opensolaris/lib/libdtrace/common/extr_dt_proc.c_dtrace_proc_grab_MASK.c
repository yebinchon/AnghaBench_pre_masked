
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
typedef scalar_t__ pid_t ;
struct TYPE_6__ {int dt_macros; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_7__ {scalar_t__ di_id; } ;
typedef TYPE_2__ dt_ident_t ;


 TYPE_2__* FUNC_0 (int ,char*) ;
 struct ps_prochandle* FUNC_1 (TYPE_1__*,scalar_t__,int,int ) ;

struct ps_prochandle *
FUNC_2(dtrace_hdl_t *VAR_0, pid_t VAR_1, int VAR_2)
{
 dt_ident_t *VAR_3 = FUNC_0(VAR_0->dt_macros, "target");
 struct ps_prochandle *VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, 0);

 if (VAR_4 != ((void*)0) && VAR_3 != ((void*)0) && VAR_3->di_id == 0)
  VAR_3->di_id = VAR_1;

 return (VAR_4);
}
