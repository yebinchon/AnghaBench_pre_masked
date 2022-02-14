
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
struct TYPE_7__ {int dpr_bps; int dpr_hdl; int dpr_lock; struct ps_prochandle* dpr_proc; } ;
typedef TYPE_1__ dt_proc_t ;
struct TYPE_8__ {uintptr_t dbp_addr; int dbp_active; int dbp_instr; void* dbp_data; int * dbp_func; } ;
typedef TYPE_2__ dt_bkpt_t ;
typedef int dt_bkpt_f ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ps_prochandle*,uintptr_t,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ,int) ;

__attribute__((used)) static dt_bkpt_t *
FUNC_5(dt_proc_t *VAR_1, uintptr_t VAR_2, dt_bkpt_f *VAR_3, void *VAR_4)
{
 struct ps_prochandle *VAR_5 = VAR_1->dpr_proc;
 dt_bkpt_t *VAR_6;

 FUNC_2(FUNC_0(&VAR_1->dpr_lock));

 if ((VAR_6 = FUNC_4(VAR_1->dpr_hdl, sizeof (dt_bkpt_t))) != ((void*)0)) {
  VAR_6->dbp_func = VAR_3;
  VAR_6->dbp_data = VAR_4;
  VAR_6->dbp_addr = VAR_2;

  if (FUNC_1(VAR_5, VAR_6->dbp_addr, &VAR_6->dbp_instr) == 0)
   VAR_6->dbp_active = VAR_0;

  FUNC_3(&VAR_1->dpr_bps, VAR_6);
 }

 return (VAR_6);
}
