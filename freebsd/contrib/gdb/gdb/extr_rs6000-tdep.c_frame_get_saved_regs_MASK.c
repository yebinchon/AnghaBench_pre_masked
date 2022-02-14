
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs6000_framedata {scalar_t__ saved_fpr; scalar_t__ saved_gpr; scalar_t__ saved_vr; scalar_t__ saved_ev; scalar_t__ lr_offset; scalar_t__ cr_offset; scalar_t__ vr_offset; scalar_t__ ev_offset; int fpr_offset; int gpr_offset; scalar_t__ vrsave_offset; } ;
struct gdbarch_tdep {int wordsize; int ppc_gp0_regnum; int ppc_vr0_regnum; int ppc_vrsave_regnum; int ppc_ev0_regnum; int ppc_ev31_regnum; size_t ppc_cr_regnum; size_t ppc_lr_regnum; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct frame_info*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_2 (struct frame_info*) ;
 int FUNC_3 (struct frame_info*) ;
 struct gdbarch_tdep* FUNC_4 (int ) ;
 int FUNC_5 (struct frame_info*) ;
 int FUNC_6 (struct frame_info*) ;
 int FUNC_7 (int ,int ,struct rs6000_framedata*) ;

__attribute__((used)) static void
FUNC_8 (struct frame_info *VAR_2, struct rs6000_framedata *VAR_3)
{
  CORE_ADDR VAR_4;
  struct rs6000_framedata VAR_5;
  struct gdbarch_tdep * VAR_6 = FUNC_4 (VAR_1);
  int VAR_7 = VAR_6->wordsize;

  if (FUNC_2 (VAR_2))
    return;

  if (VAR_3 == ((void*)0))
    {
      VAR_3 = &VAR_5;
      (void) FUNC_7 (FUNC_5 (VAR_2), FUNC_6 (VAR_2), VAR_3);
    }

  FUNC_3 (VAR_2);






  if (VAR_3->saved_fpr == 0
      && VAR_3->saved_gpr == 0
      && VAR_3->saved_vr == 0
      && VAR_3->saved_ev == 0
      && VAR_3->lr_offset == 0
      && VAR_3->cr_offset == 0
      && VAR_3->vr_offset == 0
      && VAR_3->ev_offset == 0)
    VAR_4 = 0;
  else





    VAR_4 = FUNC_0 (VAR_2);




  if (VAR_3->saved_fpr >= 0)
    {
      int VAR_8;
      CORE_ADDR VAR_9 = VAR_4 + VAR_3->fpr_offset;
      for (VAR_8 = VAR_3->saved_fpr; VAR_8 < 32; VAR_8++)
 {
   FUNC_2 (VAR_2)[VAR_0 + VAR_8] = VAR_9;
   VAR_9 += 8;
 }
    }




  if (VAR_3->saved_gpr >= 0)
    {
      int VAR_10;
      CORE_ADDR VAR_11 = VAR_4 + VAR_3->gpr_offset;
      for (VAR_10 = VAR_3->saved_gpr; VAR_10 < 32; VAR_10++)
 {
   FUNC_2 (VAR_2)[VAR_6->ppc_gp0_regnum + VAR_10] = VAR_11;
   VAR_11 += VAR_7;
 }
    }



  if (VAR_6->ppc_vr0_regnum != -1 && VAR_6->ppc_vrsave_regnum != -1)
    {
      if (VAR_3->saved_vr >= 0)
 {
   int VAR_12;
   CORE_ADDR VAR_13 = VAR_4 + VAR_3->vr_offset;
   for (VAR_12 = VAR_3->saved_vr; VAR_12 < 32; VAR_12++)
     {
       FUNC_2 (VAR_2)[VAR_6->ppc_vr0_regnum + VAR_12] = VAR_13;
       VAR_13 += FUNC_1 (VAR_6->ppc_vr0_regnum);
     }
 }
    }



  if (VAR_6->ppc_ev0_regnum != -1 && VAR_6->ppc_ev31_regnum != -1)
    {
      if (VAR_3->saved_ev >= 0)
 {
   int VAR_14;
   CORE_ADDR VAR_15 = VAR_4 + VAR_3->ev_offset;
   for (VAR_14 = VAR_3->saved_ev; VAR_14 < 32; VAR_14++)
     {
       FUNC_2 (VAR_2)[VAR_6->ppc_ev0_regnum + VAR_14] = VAR_15;
              FUNC_2 (VAR_2)[VAR_6->ppc_gp0_regnum + VAR_14] = VAR_15 + 4;
       VAR_15 += FUNC_1 (VAR_6->ppc_ev0_regnum);
            }
 }
    }



  if (VAR_3->cr_offset != 0)
    FUNC_2 (VAR_2)[VAR_6->ppc_cr_regnum] = VAR_4 + VAR_3->cr_offset;



  if (VAR_3->lr_offset != 0)
    FUNC_2 (VAR_2)[VAR_6->ppc_lr_regnum] = VAR_4 + VAR_3->lr_offset;



  if (VAR_3->vrsave_offset != 0)
    FUNC_2 (VAR_2)[VAR_6->ppc_vrsave_regnum] = VAR_4 + VAR_3->vrsave_offset;
}
