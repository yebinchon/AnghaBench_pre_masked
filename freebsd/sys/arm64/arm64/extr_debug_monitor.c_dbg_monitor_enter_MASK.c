
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {TYPE_2__* td_pcb; } ;
struct TYPE_7__ {int dbg_flags; } ;
struct TYPE_5__ {int dbg_flags; } ;
struct TYPE_6__ {TYPE_1__ pcb_dbg_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_8 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 () ;
 TYPE_3__ VAR_9 ;
 int VAR_10 ;

void
FUNC_5(struct thread *VAR_11)
{
 int VAR_12;

 if ((VAR_9.dbg_flags & VAR_0) != 0) {

  FUNC_2(&VAR_9);
 } else if ((VAR_11->td_pcb->pcb_dbg_regs.dbg_flags & VAR_0) != 0) {

  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
   FUNC_3(VAR_5, VAR_12, 0);
   FUNC_3(VAR_6, VAR_12, 0);
  }

  for (VAR_12 = 0; VAR_12 < VAR_7; ++VAR_12) {
   FUNC_3(VAR_3, VAR_12, 0);
   FUNC_3(VAR_4, VAR_12, 0);
  }
  FUNC_1(VAR_10,
      FUNC_0(VAR_10) &
      ~(VAR_2 | VAR_1));
  FUNC_4();
 }
}
