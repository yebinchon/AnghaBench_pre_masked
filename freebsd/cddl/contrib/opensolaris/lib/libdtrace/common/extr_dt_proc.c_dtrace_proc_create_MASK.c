
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
typedef int proc_child_func ;
struct TYPE_7__ {int dt_macros; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_8__ {scalar_t__ di_id; } ;
typedef TYPE_2__ dt_ident_t ;
struct TYPE_9__ {scalar_t__ pr_pid; } ;


 TYPE_6__* FUNC_0 (struct ps_prochandle*) ;
 TYPE_2__* FUNC_1 (int ,char*) ;
 struct ps_prochandle* FUNC_2 (TYPE_1__*,char const*,char* const*,int *,void*) ;
 scalar_t__ FUNC_3 (struct ps_prochandle*) ;

struct ps_prochandle *
FUNC_4(dtrace_hdl_t *VAR_0, const char *VAR_1, char *const *VAR_2,
    proc_child_func *VAR_3, void *VAR_4)
{
 dt_ident_t *VAR_5 = FUNC_1(VAR_0->dt_macros, "target");
 struct ps_prochandle *VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_6 != ((void*)0) && VAR_5 != ((void*)0) && VAR_5->di_id == 0) {



  VAR_5->di_id = FUNC_3(VAR_6);

 }

 return (VAR_6);
}
