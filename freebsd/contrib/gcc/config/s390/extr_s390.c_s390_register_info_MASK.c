
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int va_list_gpr_size; int va_list_fpr_size; TYPE_1__* machine; } ;
struct TYPE_7__ {int first_save_gpr_slot; int last_save_gpr_slot; int first_save_gpr; int first_restore_gpr; int last_save_gpr; int last_restore_gpr; scalar_t__ save_return_addr_p; scalar_t__ high_fprs; scalar_t__ fpr_bitmap; } ;
struct TYPE_6__ {int gprs; int fprs; } ;
struct TYPE_5__ {scalar_t__ split_branches_pending_p; scalar_t__ base_reg; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (scalar_t__) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_4__* VAR_11 ;
 TYPE_3__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int * VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_2 () ;
 int * VAR_22 ;
 int* VAR_23 ;
 int FUNC_3 (int*) ;

__attribute__((used)) static void
FUNC_4 (int VAR_24[])
{
  int VAR_25, VAR_26;


  VAR_12.fpr_bitmap = 0;
  VAR_12.high_fprs = 0;
  if (VAR_7)
    for (VAR_25 = 24; VAR_25 < 32; VAR_25++)
      if (VAR_23[VAR_25] && !VAR_22[VAR_25])
 {
   FUNC_1 (VAR_25 - 16);
   VAR_12.high_fprs++;
 }







  FUNC_3 (VAR_24);

  for (VAR_25 = 0; VAR_25 < 16; VAR_25++)
    VAR_24[VAR_25] = VAR_24[VAR_25] && !VAR_22[VAR_25] && !VAR_19[VAR_25];

  if (VAR_21)
    VAR_24[VAR_3] = 1;

  if (VAR_20)
    VAR_24[VAR_4]
      |= VAR_23[VAR_4];

  VAR_24[VAR_0]
    |= (VAR_11->machine->base_reg
        && FUNC_0 (VAR_11->machine->base_reg) == VAR_0);

  VAR_24[VAR_5]
    |= (!VAR_17
 || VAR_10
 || VAR_11->machine->split_branches_pending_p
 || VAR_12.save_return_addr_p
 || VAR_16
 || VAR_18);

  VAR_24[VAR_6]
    |= (!VAR_17
 || VAR_10
 || VAR_13
 || FUNC_2 () > 0
 || VAR_15
 || VAR_18);

  for (VAR_25 = 6; VAR_25 < 16; VAR_25++)
    if (VAR_23[VAR_25] || VAR_24[VAR_25])
      break;
  for (VAR_26 = 15; VAR_26 > VAR_25; VAR_26--)
    if (VAR_23[VAR_26] || VAR_24[VAR_26])
      break;

  if (VAR_25 == 16)
    {

      VAR_12.first_save_gpr_slot = -1;
      VAR_12.last_save_gpr_slot = -1;
      VAR_12.first_save_gpr = -1;
      VAR_12.first_restore_gpr = -1;
      VAR_12.last_save_gpr = -1;
      VAR_12.last_restore_gpr = -1;
    }
  else
    {

      VAR_12.first_save_gpr_slot = VAR_25;
      VAR_12.last_save_gpr_slot = VAR_26;

      for (VAR_25 = VAR_12.first_save_gpr_slot;
    VAR_25 < VAR_12.last_save_gpr_slot + 1;
    VAR_25++)
 if (VAR_24[VAR_25])
   break;

      for (VAR_26 = VAR_12.last_save_gpr_slot; VAR_26 > VAR_25; VAR_26--)
 if (VAR_24[VAR_26])
   break;

      if (VAR_25 == VAR_12.last_save_gpr_slot + 1)
 {

   VAR_12.first_save_gpr = -1;
   VAR_12.first_restore_gpr = -1;
   VAR_12.last_save_gpr = -1;
   VAR_12.last_restore_gpr = -1;
 }
      else
 {

   VAR_12.first_save_gpr = VAR_25;
   VAR_12.first_restore_gpr = VAR_25;
   VAR_12.last_save_gpr = VAR_26;
   VAR_12.last_restore_gpr = VAR_26;
 }
    }

  if (VAR_18)
    {

      if (VAR_11->va_list_gpr_size
   && VAR_14.gprs < VAR_2)
 {
   int VAR_27 = VAR_14.gprs;
   int VAR_28 = VAR_27 + VAR_11->va_list_gpr_size;
   if (VAR_28 > VAR_2)
     VAR_28 = VAR_2;

   if (VAR_12.first_save_gpr == -1
       || VAR_12.first_save_gpr > 2 + VAR_27)
     {
       VAR_12.first_save_gpr = 2 + VAR_27;
       VAR_12.first_save_gpr_slot = 2 + VAR_27;
     }

   if (VAR_12.last_save_gpr == -1
       || VAR_12.last_save_gpr < 2 + VAR_28 - 1)
     {
       VAR_12.last_save_gpr = 2 + VAR_28 - 1;
       VAR_12.last_save_gpr_slot = 2 + VAR_28 - 1;
     }
 }


      if (VAR_8 && VAR_11->va_list_fpr_size
   && VAR_14.fprs < VAR_1)
 {
   int VAR_29 = VAR_14.fprs;
   int VAR_30 = VAR_29 + VAR_11->va_list_fpr_size;
   if (VAR_30 > VAR_1)
     VAR_30 = VAR_1;



   if (VAR_9)
     VAR_29 = 0;

   for (VAR_25 = VAR_29; VAR_25 < VAR_30; VAR_25++)
     FUNC_1 (VAR_25);
 }
    }

  if (!VAR_7)
    for (VAR_25 = 2; VAR_25 < 4; VAR_25++)
      if (VAR_23[VAR_25 + 16] && !VAR_22[VAR_25 + 16])
 FUNC_1 (VAR_25);
}
