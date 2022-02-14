
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct thread {TYPE_1__* td_pcb; } ;
struct debug_monitor_state {int dbg_flags; int * dbg_bcr; int * dbg_bvr; } ;
struct dbreg {int db_info; TYPE_2__* db_regs; } ;
struct TYPE_4__ {int dbr_ctrl; int dbr_addr; } ;
struct TYPE_3__ {struct debug_monitor_state pcb_dbg_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (struct dbreg*,int ,int) ;

int
FUNC_2(struct thread *VAR_4, struct dbreg *VAR_5)
{
 struct debug_monitor_state *VAR_6;
 int VAR_7, VAR_8;
 uint8_t VAR_9, VAR_10;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));

 FUNC_0(VAR_3, VAR_2,
     &VAR_9);
 FUNC_0(VAR_3, VAR_1,
     &VAR_10);






 VAR_7 = VAR_10 + 1;

 VAR_5->db_info = VAR_9;
 VAR_5->db_info <<= 8;
 VAR_5->db_info |= VAR_7;

 VAR_6 = &VAR_4->td_pcb->pcb_dbg_regs;
 if ((VAR_6->dbg_flags & VAR_0) != 0) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_5->db_regs[VAR_8].dbr_addr = VAR_6->dbg_bvr[VAR_8];
   VAR_5->db_regs[VAR_8].dbr_ctrl = VAR_6->dbg_bcr[VAR_8];
  }
 }

 return (0);
}
