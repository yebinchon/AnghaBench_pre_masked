
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trapframe {int tf_spsr; } ;
struct thread {TYPE_1__* td_pcb; } ;
struct TYPE_6__ {int dbg_flags; } ;
struct TYPE_5__ {int dbg_flags; } ;
struct TYPE_4__ {TYPE_3__ pcb_dbg_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_9 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 () ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;

void
FUNC_5(struct thread *VAR_12, struct trapframe *VAR_13)
{
 int VAR_14;

 VAR_13->tf_spsr |= VAR_7;
 if ((VAR_12->td_pcb->pcb_dbg_regs.dbg_flags & VAR_0) != 0) {

  FUNC_2(&VAR_12->td_pcb->pcb_dbg_regs);
  VAR_13->tf_spsr &= ~VAR_7;
 } else if ((VAR_10.dbg_flags & VAR_0) != 0) {

  for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
   FUNC_3(VAR_5, VAR_14, 0);
   FUNC_3(VAR_6, VAR_14, 0);
  }

  for (VAR_14 = 0; VAR_14 < VAR_8; ++VAR_14) {
   FUNC_3(VAR_3, VAR_14, 0);
   FUNC_3(VAR_4, VAR_14, 0);
  }
  FUNC_1(VAR_11,
      FUNC_0(VAR_11) &
      ~(VAR_2 | VAR_1));
  FUNC_4();
 }
}
