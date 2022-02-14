
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int dbp_instr; int dbp_addr; scalar_t__ dbp_active; } ;
struct TYPE_9__ {int dpr_hdl; TYPE_2__ dpr_bps; int dpr_proc; int dpr_lock; } ;
typedef TYPE_1__ dt_proc_t ;
typedef TYPE_2__ dt_bkpt_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(dt_proc_t *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2->dpr_proc);
 dt_bkpt_t *VAR_5, *VAR_6;

 FUNC_3(FUNC_0(&VAR_2->dpr_lock));

 for (VAR_5 = FUNC_6(&VAR_2->dpr_bps); VAR_5 != ((void*)0); VAR_5 = VAR_6) {
  if (VAR_3 && VAR_5->dbp_active &&
      VAR_4 != VAR_0 && VAR_4 != VAR_1) {
   (void) FUNC_1(VAR_2->dpr_proc,
       VAR_5->dbp_addr, VAR_5->dbp_instr);
  }
  VAR_6 = FUNC_6(VAR_5);
  FUNC_5(&VAR_2->dpr_bps, VAR_5);
  FUNC_4(VAR_2->dpr_hdl, VAR_5);
 }
}
