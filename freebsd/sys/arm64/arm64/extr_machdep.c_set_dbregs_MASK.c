
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_1__* td_pcb; } ;
struct debug_monitor_state {scalar_t__ dbg_enable_count; int* dbg_bcr; int dbg_flags; int * dbg_bvr; } ;
struct dbreg {TYPE_2__* db_regs; } ;
struct TYPE_4__ {int dbr_ctrl; int dbr_addr; } ;
struct TYPE_3__ {struct debug_monitor_state pcb_dbg_regs; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct thread *VAR_2, struct dbreg *VAR_3)
{
 struct debug_monitor_state *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = &VAR_2->td_pcb->pcb_dbg_regs;
 VAR_5 = 0;
 VAR_4->dbg_enable_count = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

  VAR_4->dbg_bvr[VAR_6] = VAR_3->db_regs[VAR_6].dbr_addr;
  VAR_4->dbg_bcr[VAR_6] = VAR_3->db_regs[VAR_6].dbr_ctrl;
  if ((VAR_4->dbg_bcr[VAR_6] & 1) != 0)
   VAR_4->dbg_enable_count++;
 }
 if (VAR_4->dbg_enable_count > 0)
  VAR_4->dbg_flags |= VAR_0;

 return (0);
}
