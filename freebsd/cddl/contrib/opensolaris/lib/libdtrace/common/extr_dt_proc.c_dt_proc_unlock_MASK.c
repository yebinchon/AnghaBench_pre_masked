
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
typedef int dtrace_hdl_t ;
struct TYPE_3__ {int dpr_lock; } ;
typedef TYPE_1__ dt_proc_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,struct ps_prochandle*,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(dtrace_hdl_t *VAR_1, struct ps_prochandle *VAR_2)
{
 dt_proc_t *VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
 int VAR_4 = FUNC_2(&VAR_3->dpr_lock);
 FUNC_0(VAR_4 == 0);
}
