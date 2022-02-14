
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dbp_active; int dbp_instr; int dbp_addr; } ;
struct TYPE_6__ {int dpr_proc; TYPE_2__ dpr_bps; int dpr_lock; } ;
typedef TYPE_1__ dt_proc_t ;
typedef TYPE_2__ dt_bkpt_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(dt_proc_t *VAR_1)
{
 dt_bkpt_t *VAR_2;

 FUNC_2(FUNC_0(&VAR_1->dpr_lock));

 for (VAR_2 = FUNC_4(&VAR_1->dpr_bps);
     VAR_2 != ((void*)0); VAR_2 = FUNC_4(VAR_2)) {
  if (!VAR_2->dbp_active && FUNC_1(VAR_1->dpr_proc,
      VAR_2->dbp_addr, &VAR_2->dbp_instr) == 0)
   VAR_2->dbp_active = VAR_0;
 }

 FUNC_3("breakpoints enabled\n");
}
