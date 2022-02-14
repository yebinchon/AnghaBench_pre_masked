
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ spe_64bit_regs_used; int abi; int first_gp_reg_save; int gp_size; int first_fp_reg_save; int fp_size; int first_altivec_reg_save; int altivec_size; int calls_p; int lr_save_p; int cr_save_p; int cr_size; int reg_size; int fixed_size; void* vars_size; int parm_size; int spe_gp_size; scalar_t__ vrsave_mask; int vrsave_size; int fp_save_offset; int gp_save_offset; int vrsave_save_offset; int altivec_padding_size; int altivec_save_offset; int ehrd_offset; int cr_save_offset; int lr_save_offset; int spe_padding_size; int spe_gp_save_offset; int save_size; int push_p; void* total_size; } ;
typedef TYPE_2__ rs6000_stack_t ;
typedef int info ;
struct TYPE_9__ {TYPE_1__* machine; } ;
struct TYPE_7__ {scalar_t__ insn_chain_scanned_p; scalar_t__ ra_needs_full_frame; } ;
typedef int HOST_WIDE_INT ;





 int VAR_0 ;

 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_2 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 TYPE_6__* VAR_26 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (TYPE_2__*,int ,int) ;
 int* VAR_34 ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ VAR_35 ;

__attribute__((used)) static rs6000_stack_t *
FUNC_15 (void)
{
  static rs6000_stack_t VAR_36;
  rs6000_stack_t *VAR_37 = &VAR_36;
  int VAR_38 = VAR_13 ? 4 : 8;
  int VAR_39;
  int VAR_40;
  HOST_WIDE_INT VAR_41;

  FUNC_12 (&VAR_36, 0, sizeof (VAR_36));

  if (VAR_20)
    {

      if (VAR_26->machine->insn_chain_scanned_p == 0)
 VAR_26->machine->insn_chain_scanned_p
   = FUNC_14 () + 1;
      VAR_37->spe_64bit_regs_used = VAR_26->machine->insn_chain_scanned_p - 1;
    }


  VAR_37->abi = VAR_5;


  VAR_37->first_gp_reg_save = FUNC_7 ();


  if (((VAR_22 && VAR_17)
       || (VAR_32 == 1 && VAR_5 == 128)
       || (VAR_32 && VAR_5 == 130))
      && VAR_37->first_gp_reg_save > VAR_11)
    VAR_37->gp_size = VAR_38 * (32 - VAR_11);
  else
    VAR_37->gp_size = VAR_38 * (32 - VAR_37->first_gp_reg_save);
  if (VAR_21 && VAR_37->spe_64bit_regs_used != 0)
    VAR_37->gp_size = 0;

  VAR_37->first_fp_reg_save = FUNC_6 ();
  VAR_37->fp_size = 8 * (64 - VAR_37->first_fp_reg_save);

  VAR_37->first_altivec_reg_save = FUNC_5 ();
  VAR_37->altivec_size = 16 * (VAR_8 + 1
     - VAR_37->first_altivec_reg_save);


  VAR_37->calls_p = (! VAR_29
         || VAR_26->machine->ra_needs_full_frame);


  if ((VAR_5 == 131
       && VAR_31
       && !VAR_18)



      || (VAR_37->first_fp_reg_save != 64
   && !FUNC_1 (VAR_37->first_fp_reg_save))
      || VAR_37->first_altivec_reg_save <= VAR_8
      || (VAR_5 == 128 && VAR_27)
      || VAR_37->calls_p
      || FUNC_13 ())
    {
      VAR_37->lr_save_p = 1;
      VAR_34[VAR_9] = 1;
    }


  if (VAR_34[VAR_2]
      || VAR_34[VAR_3]
      || VAR_34[VAR_4])
    {
      VAR_37->cr_save_p = 1;
      if (VAR_5 == 128)
 VAR_37->cr_size = VAR_38;
    }




  if (VAR_28)
    {
      unsigned int VAR_42;
      for (VAR_42 = 0; FUNC_0 (VAR_42) != VAR_7; ++VAR_42)
 continue;


      VAR_39 = VAR_42 * (VAR_21
         && VAR_37->spe_64bit_regs_used != 0
         ? VAR_24 : VAR_25);
    }
  else
    VAR_39 = 0;


  VAR_37->reg_size = VAR_38;
  VAR_37->fixed_size = VAR_12;
  VAR_37->vars_size = FUNC_2 (FUNC_10 (), 8);
  VAR_37->parm_size = FUNC_2 (VAR_30,
      VAR_14 ? 16 : 8);
  if (VAR_6)
    VAR_37->vars_size
      += FUNC_2 (VAR_37->fixed_size + VAR_37->vars_size
         + VAR_37->parm_size,
         VAR_0 / VAR_1)
  - (VAR_37->fixed_size + VAR_37->vars_size
     + VAR_37->parm_size);

  if (VAR_21 && VAR_37->spe_64bit_regs_used != 0)
    VAR_37->spe_gp_size = 8 * (32 - VAR_37->first_gp_reg_save);
  else
    VAR_37->spe_gp_size = 0;

  if (VAR_15)
    VAR_37->vrsave_mask = FUNC_4 ();
  else
    VAR_37->vrsave_mask = 0;

  if (VAR_16 && VAR_37->vrsave_mask)
    VAR_37->vrsave_size = 4;
  else
    VAR_37->vrsave_size = 0;

  FUNC_3 (VAR_37);


  switch (VAR_5)
    {
    case 129:
    default:
      FUNC_9 ();

    case 131:
    case 130:
      VAR_37->fp_save_offset = - VAR_37->fp_size;
      VAR_37->gp_save_offset = VAR_37->fp_save_offset - VAR_37->gp_size;

      if (VAR_15)
 {
   VAR_37->vrsave_save_offset
     = VAR_37->gp_save_offset - VAR_37->vrsave_size;



   if (VAR_37->altivec_size != 0)
     VAR_37->altivec_padding_size
       = VAR_37->vrsave_save_offset & 0xF;
   else
     VAR_37->altivec_padding_size = 0;

   VAR_37->altivec_save_offset
     = VAR_37->vrsave_save_offset
     - VAR_37->altivec_padding_size
     - VAR_37->altivec_size;
   FUNC_8 (VAR_37->altivec_size == 0
        || VAR_37->altivec_save_offset % 16 == 0);


   VAR_37->ehrd_offset = VAR_37->altivec_save_offset - VAR_39;
 }
      else
 VAR_37->ehrd_offset = VAR_37->gp_save_offset - VAR_39;
      VAR_37->cr_save_offset = VAR_38;
      VAR_37->lr_save_offset = 2*VAR_38;
      break;

    case 128:
      VAR_37->fp_save_offset = - VAR_37->fp_size;
      VAR_37->gp_save_offset = VAR_37->fp_save_offset - VAR_37->gp_size;
      VAR_37->cr_save_offset = VAR_37->gp_save_offset - VAR_37->cr_size;

      if (VAR_21 && VAR_37->spe_64bit_regs_used != 0)
 {


   if (VAR_37->spe_gp_size != 0)
     VAR_37->spe_padding_size
       = 8 - (-VAR_37->cr_save_offset % 8);
   else
     VAR_37->spe_padding_size = 0;

   VAR_37->spe_gp_save_offset
     = VAR_37->cr_save_offset
     - VAR_37->spe_padding_size
     - VAR_37->spe_gp_size;


   VAR_37->ehrd_offset = VAR_37->spe_gp_save_offset;
 }
      else if (VAR_15)
 {
   VAR_37->vrsave_save_offset
     = VAR_37->cr_save_offset - VAR_37->vrsave_size;


   if (VAR_37->altivec_size != 0)
     VAR_37->altivec_padding_size
       = 16 - (-VAR_37->vrsave_save_offset % 16);
   else
     VAR_37->altivec_padding_size = 0;

   VAR_37->altivec_save_offset
     = VAR_37->vrsave_save_offset
     - VAR_37->altivec_padding_size
     - VAR_37->altivec_size;


   VAR_37->ehrd_offset = VAR_37->altivec_save_offset;
 }
      else
 VAR_37->ehrd_offset = VAR_37->cr_save_offset;
      VAR_37->ehrd_offset -= VAR_39;
      VAR_37->lr_save_offset = VAR_38;
      break;
    }

  VAR_40 = (VAR_15 || VAR_5 == 130) ? 16 : 8;
  VAR_37->save_size = FUNC_2 (VAR_37->fp_size
      + VAR_37->gp_size
      + VAR_37->altivec_size
      + VAR_37->altivec_padding_size
      + VAR_37->spe_gp_size
      + VAR_37->spe_padding_size
      + VAR_39
      + VAR_37->cr_size
      + VAR_37->vrsave_size,
      VAR_40);

  VAR_41 = (VAR_37->vars_size
       + VAR_37->parm_size
       + VAR_37->save_size);

  VAR_37->total_size = FUNC_2 (VAR_41 + VAR_37->fixed_size,
           VAR_0 / VAR_1);
  if (VAR_37->calls_p)
    VAR_37->push_p = 1;

  else if (VAR_5 == 128)
    VAR_37->push_p = VAR_41 != 0;

  else if (VAR_33)
    VAR_37->push_p = 1;

  else if (VAR_23 && VAR_35 != VAR_10)
    VAR_37->push_p = 1;

  else
    VAR_37->push_p = VAR_41 > (VAR_13 ? 220 : 288);


  if (VAR_37->fp_size == 0)
    VAR_37->fp_save_offset = 0;

  if (VAR_37->gp_size == 0)
    VAR_37->gp_save_offset = 0;

  if (! VAR_15 || VAR_37->altivec_size == 0)
    VAR_37->altivec_save_offset = 0;

  if (! VAR_15 || VAR_37->vrsave_mask == 0)
    VAR_37->vrsave_save_offset = 0;

  if (! VAR_21
      || VAR_37->spe_64bit_regs_used == 0
      || VAR_37->spe_gp_size == 0)
    VAR_37->spe_gp_save_offset = 0;

  if (! VAR_37->lr_save_p)
    VAR_37->lr_save_offset = 0;

  if (! VAR_37->cr_save_p)
    VAR_37->cr_save_offset = 0;

  return VAR_37;
}
