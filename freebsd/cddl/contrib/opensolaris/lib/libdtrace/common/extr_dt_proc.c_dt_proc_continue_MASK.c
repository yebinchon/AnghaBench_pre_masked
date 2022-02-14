
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
typedef int dtrace_hdl_t ;
struct TYPE_3__ {int dpr_stop; int dpr_lock; int dpr_cv; } ;
typedef TYPE_1__ dt_proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,struct ps_prochandle*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(dtrace_hdl_t *VAR_2, struct ps_prochandle *VAR_3)
{
 dt_proc_t *VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);

 (void) FUNC_2(&VAR_4->dpr_lock);

 if (VAR_4->dpr_stop & VAR_1) {
  VAR_4->dpr_stop &= ~VAR_1;
  (void) FUNC_1(&VAR_4->dpr_cv);
 }

 (void) FUNC_3(&VAR_4->dpr_lock);
}
