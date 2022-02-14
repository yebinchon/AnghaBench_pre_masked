
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gdbarch_tdep {int ppc_ps_regnum; int ppc_cr_regnum; int ppc_lr_regnum; int ppc_ctr_regnum; int ppc_xer_regnum; int ppc_fpscr_regnum; int ppc_mq_regnum; } ;
struct TYPE_5__ {int mq; int fpscr; int xer; int ctr; int lr; int cr; int msr; int iar; int * fpr; int * gpr; } ;
struct TYPE_4__ {int fpscr; int xer; int ctr; int lr; int cr; int msr; int iar; int * fpr; int * gpr; } ;
struct TYPE_6__ {TYPE_2__ r32; TYPE_1__ r64; } ;
typedef TYPE_3__ CoreRegs ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 struct gdbarch_tdep* FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_4, unsigned VAR_5,
        int VAR_6, CORE_ADDR VAR_7)
{
  CoreRegs *VAR_8;
  int VAR_9;
  struct gdbarch_tdep *VAR_10 = FUNC_2 (VAR_2);

  if (VAR_6 != 0)
    {
      FUNC_1
 (VAR_3,
  "Gdb error: unknown parameter to fetch_core_registers().\n");
      return;
    }

  VAR_8 = (CoreRegs *) VAR_4;



  if (FUNC_0 ())
    {
      for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
        FUNC_3 (VAR_9, (char *) &VAR_8->r64.gpr[VAR_9]);

      for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
 FUNC_3 (VAR_0 + VAR_9, (char *) &VAR_8->r64.fpr[VAR_9]);

      FUNC_3 (VAR_1, (char *) &VAR_8->r64.iar);
      FUNC_3 (VAR_10->ppc_ps_regnum, (char *) &VAR_8->r64.msr);
      FUNC_3 (VAR_10->ppc_cr_regnum, (char *) &VAR_8->r64.cr);
      FUNC_3 (VAR_10->ppc_lr_regnum, (char *) &VAR_8->r64.lr);
      FUNC_3 (VAR_10->ppc_ctr_regnum, (char *) &VAR_8->r64.ctr);
      FUNC_3 (VAR_10->ppc_xer_regnum, (char *) &VAR_8->r64.xer);
      FUNC_3 (VAR_10->ppc_fpscr_regnum, (char *) &VAR_8->r64.fpscr);
    }
  else
    {
      for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
        FUNC_3 (VAR_9, (char *) &VAR_8->r32.gpr[VAR_9]);

      for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
 FUNC_3 (VAR_0 + VAR_9, (char *) &VAR_8->r32.fpr[VAR_9]);

      FUNC_3 (VAR_1, (char *) &VAR_8->r32.iar);
      FUNC_3 (VAR_10->ppc_ps_regnum, (char *) &VAR_8->r32.msr);
      FUNC_3 (VAR_10->ppc_cr_regnum, (char *) &VAR_8->r32.cr);
      FUNC_3 (VAR_10->ppc_lr_regnum, (char *) &VAR_8->r32.lr);
      FUNC_3 (VAR_10->ppc_ctr_regnum, (char *) &VAR_8->r32.ctr);
      FUNC_3 (VAR_10->ppc_xer_regnum, (char *) &VAR_8->r32.xer);
      FUNC_3 (VAR_10->ppc_fpscr_regnum, (char *) &VAR_8->r32.fpscr);
      if (VAR_10->ppc_mq_regnum >= 0)
 FUNC_3 (VAR_10->ppc_mq_regnum, (char *) &VAR_8->r32.mq);
    }
}
