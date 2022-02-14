
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* machine; } ;
struct TYPE_6__ {unsigned int n_local_regs; int n_input_regs; int n_output_regs; unsigned int reg_fp; int reg_save_b0; int reg_save_ar_pfs; scalar_t__ reg_save_gp; scalar_t__ reg_save_pr; scalar_t__ reg_save_ar_unat; scalar_t__ reg_save_ar_lc; int n_spilled; scalar_t__ initialized; int mask; scalar_t__ extra_spill_size; scalar_t__ spill_size; scalar_t__ spill_cfa_off; scalar_t__ total_size; scalar_t__ n_rotate_regs; } ;
struct TYPE_5__ {scalar_t__ n_varargs; scalar_t__ ia64_eh_epilogue_bsp; scalar_t__ ia64_eh_epilogue_sp; } ;
typedef scalar_t__ HOST_WIDE_INT ;
typedef int HARD_REG_SET ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 unsigned int FUNC_6 (int) ;
 unsigned int FUNC_7 (int) ;
 void* FUNC_8 (int,scalar_t__) ;
 unsigned int FUNC_9 (int) ;
 unsigned int FUNC_10 (int) ;
 int FUNC_11 (int ,size_t) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int * VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_14 (int (*) (scalar_t__,int *),int *) ;
 void* FUNC_15 (int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_16 (char*,int ) ;
 int FUNC_17 (scalar_t__,int *) ;
 int FUNC_18 (TYPE_2__*,int ,int) ;
 int* VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void
FUNC_19 (HOST_WIDE_INT VAR_15)
{
  HOST_WIDE_INT VAR_16;
  HOST_WIDE_INT VAR_17 = 0;
  HOST_WIDE_INT VAR_18 = 0;
  HOST_WIDE_INT VAR_19;
  HARD_REG_SET VAR_20;
  int VAR_21 = 0;
  int VAR_22 = 0;
  int VAR_23 = 0;
  unsigned int VAR_24;
  int VAR_25;

  if (VAR_5.initialized)
    return;

  FUNC_18 (&VAR_5, 0, sizeof VAR_5);
  FUNC_1 (VAR_20);


  FUNC_14 (FUNC_17, ((void*)0));


  if (VAR_4->machine->ia64_eh_epilogue_sp)
    FUNC_17 (VAR_4->machine->ia64_eh_epilogue_sp, ((void*)0));
  if (VAR_4->machine->ia64_eh_epilogue_bsp)
    FUNC_17 (VAR_4->machine->ia64_eh_epilogue_bsp, ((void*)0));







  VAR_24 = FUNC_7 (78) + ! VAR_12;
  for (; VAR_24 >= FUNC_7 (0); VAR_24--)
    if (VAR_13[VAR_24])
      break;
  VAR_5.n_local_regs = VAR_24 - FUNC_7 (0) + 1;





  if (VAR_4->machine->n_varargs > 0
      || FUNC_16 ("syscall_linkage",
      FUNC_13 (FUNC_12 (VAR_7))))
    VAR_5.n_input_regs = 8;
  else
    {
      for (VAR_24 = FUNC_6 (7); VAR_24 >= FUNC_6 (0); VAR_24--)
 if (VAR_13[VAR_24])
   break;
      VAR_5.n_input_regs = VAR_24 - FUNC_6 (0) + 1;
    }

  for (VAR_24 = FUNC_9 (7); VAR_24 >= FUNC_9 (0); VAR_24--)
    if (VAR_13[VAR_24])
      break;
  VAR_25 = VAR_24 - FUNC_9 (0) + 1;






  if (VAR_11)
    VAR_25 = FUNC_8 (VAR_25, 1);

  VAR_5.n_output_regs = VAR_25;


  VAR_5.n_rotate_regs = 0;





  for (VAR_24 = FUNC_3 (2); VAR_24 <= FUNC_3 (127); VAR_24++)
    if (VAR_13[VAR_24] && ! VAR_3[VAR_24])
      {
 FUNC_11 (VAR_20, VAR_24);
 VAR_17 += 16;
 VAR_21 += 1;
 VAR_23 = 1;
      }

  for (VAR_24 = FUNC_4 (1); VAR_24 <= FUNC_4 (31); VAR_24++)
    if (VAR_13[VAR_24] && ! VAR_3[VAR_24])
      {
 FUNC_11 (VAR_20, VAR_24);
 VAR_17 += 8;
 VAR_21 += 1;
 VAR_22 = 1;
      }

  for (VAR_24 = FUNC_0 (1); VAR_24 <= FUNC_0 (7); VAR_24++)
    if (VAR_13[VAR_24] && ! VAR_3[VAR_24])
      {
 FUNC_11 (VAR_20, VAR_24);
 VAR_17 += 8;
 VAR_21 += 1;
      }




  if (VAR_12)
    {
      VAR_5.reg_fp = FUNC_15 (1);




      if (VAR_5.reg_fp == 0)
 {
   VAR_5.reg_fp = FUNC_7 (79);
   VAR_5.n_local_regs++;
 }
    }

  if (! VAR_8)
    {



      FUNC_11 (VAR_20, FUNC_0 (0));

      VAR_5.reg_save_b0 = FUNC_15 (1);
      if (VAR_5.reg_save_b0 == 0)
 {
   VAR_18 += 8;
   VAR_21 += 1;
 }


      FUNC_11 (VAR_20, VAR_1);
      VAR_5.reg_save_ar_pfs = FUNC_15 (1);
      if (VAR_5.reg_save_ar_pfs == 0)
 {
   VAR_18 += 8;
   VAR_21 += 1;
 }



      VAR_5.reg_save_gp
 = (VAR_6 ? 0 : FUNC_15 (1));
      if (VAR_5.reg_save_gp == 0)
 {
   FUNC_11 (VAR_20, FUNC_4 (1));
   VAR_17 += 8;
   VAR_21 += 1;
 }
    }
  else
    {
      if (VAR_13[FUNC_0 (0)] && ! VAR_3[FUNC_0 (0)])
 {
   FUNC_11 (VAR_20, FUNC_0 (0));
   VAR_18 += 8;
   VAR_21 += 1;
 }

      if (VAR_13[VAR_1])
 {
   FUNC_11 (VAR_20, VAR_1);
   VAR_5.reg_save_ar_pfs = FUNC_15 (1);
   if (VAR_5.reg_save_ar_pfs == 0)
     {
       VAR_18 += 8;
       VAR_21 += 1;
     }
 }
    }







  if (VAR_5.reg_fp != 0
      && VAR_5.reg_save_b0 == VAR_5.reg_fp + 1
      && VAR_5.reg_save_ar_pfs == VAR_5.reg_fp + 2)
    {
      VAR_5.reg_save_b0 = VAR_5.reg_fp;
      VAR_5.reg_save_ar_pfs = VAR_5.reg_fp + 1;
      VAR_5.reg_fp = VAR_5.reg_fp + 2;
    }


  for (VAR_24 = FUNC_10 (0); VAR_24 <= FUNC_10 (63); VAR_24++)
    if (VAR_13[VAR_24] && ! VAR_3[VAR_24])
      break;
  if (VAR_24 <= FUNC_10 (63))
    {
      FUNC_11 (VAR_20, FUNC_10 (0));
      VAR_5.reg_save_pr = FUNC_15 (1);
      if (VAR_5.reg_save_pr == 0)
 {
   VAR_18 += 8;
   VAR_21 += 1;
 }



      for (VAR_24 = FUNC_10 (0); VAR_24 <= FUNC_10 (63); VAR_24++)
 VAR_13[VAR_24] = 1;
    }




  if (VAR_22 || VAR_4->machine->n_varargs
      || VAR_13[VAR_2])
    {
      VAR_13[VAR_2] = 1;
      FUNC_11 (VAR_20, VAR_2);
      VAR_5.reg_save_ar_unat = FUNC_15 (VAR_17 == 0);
      if (VAR_5.reg_save_ar_unat == 0)
 {
   VAR_18 += 8;
   VAR_21 += 1;
 }
    }

  if (VAR_13[VAR_0])
    {
      FUNC_11 (VAR_20, VAR_0);
      VAR_5.reg_save_ar_lc = FUNC_15 (VAR_17 == 0);
      if (VAR_5.reg_save_ar_lc == 0)
 {
   VAR_18 += 8;
   VAR_21 += 1;
 }
    }




  if (VAR_23)
    VAR_19 = FUNC_5 (VAR_10);
  else
    VAR_19 = VAR_10;

  VAR_16 = (VAR_17 + VAR_18 + VAR_15 + VAR_19
  + VAR_9);
  VAR_16 = FUNC_5 (VAR_16);




  if (VAR_8)
    VAR_16 = FUNC_8 (0, VAR_16 - 16);

  VAR_5.total_size = VAR_16;
  VAR_5.spill_cfa_off = VAR_19 - 16;
  VAR_5.spill_size = VAR_17;
  VAR_5.extra_spill_size = VAR_18;
  FUNC_2 (VAR_5.mask, VAR_20);
  VAR_5.n_spilled = VAR_21;
  VAR_5.initialized = VAR_14;
}
