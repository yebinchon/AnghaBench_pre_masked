
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int offsetT ;
struct TYPE_12__ {char* fr_literal; int fr_fix; struct TYPE_12__* fr_next; } ;
typedef TYPE_3__ fragS ;
typedef enum bfd_reloc_code_real { ____Placeholder_bfd_reloc_code_real } bfd_reloc_code_real ;
struct TYPE_15__ {scalar_t__ X_op; int X_add_number; scalar_t__ X_add_symbol; int X_op_symbol; } ;
struct TYPE_14__ {unsigned int operands; int* types; int* flags; TYPE_2__* op; int * reloc; scalar_t__ imm_operands; } ;
struct TYPE_13__ {scalar_t__ X_op; } ;
struct TYPE_11__ {TYPE_9__* disps; TYPE_1__* imms; } ;
struct TYPE_10__ {int X_add_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_3__*,int,int,TYPE_9__*,int,int) ;
 char* FUNC_3 (int) ;
 TYPE_3__* VAR_17 ;
 TYPE_6__ VAR_18 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,int,int) ;
 scalar_t__ VAR_19 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int,int,int ) ;
 TYPE_4__* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9 (fragS *VAR_20, offsetT VAR_21)
{
  char *VAR_22;
  unsigned int VAR_23;

  for (VAR_23 = 0; VAR_23 < VAR_18.operands; VAR_23++)
    {
      if (VAR_18.types[VAR_23] & VAR_7)
 {
   if (VAR_18.op[VAR_23].disps->X_op == VAR_13)
     {
       int VAR_24 = FUNC_1 (VAR_23);
       offsetT VAR_25;

       VAR_25 = FUNC_6 (VAR_18.op[VAR_23].disps->X_add_number,
         VAR_24);
       VAR_22 = FUNC_3 (VAR_24);
       FUNC_5 (VAR_22, VAR_25, VAR_24);
     }
   else
     {
       enum bfd_reloc_code_real VAR_26;
       int VAR_27 = FUNC_1 (VAR_23);
       int VAR_28 = (VAR_18.types[VAR_23] & VAR_8) != 0;
       int VAR_29 = (VAR_18.flags[VAR_23] & VAR_16) != 0;


       FUNC_0 ((VAR_18.types[VAR_23] & VAR_9) == 0);




       if (VAR_29 && VAR_18.imm_operands)
  {
    unsigned int VAR_30;
    int VAR_31 = 0;

    for (VAR_30 = 0; VAR_30 < VAR_18.operands; VAR_30++)
      if (VAR_18.types[VAR_30] & VAR_11)
        {


   FUNC_0 (VAR_31 == 0);
   VAR_31 = FUNC_4 (VAR_30);
   VAR_18.op[VAR_23].disps->X_add_number -= VAR_31;
        }

    FUNC_0 (VAR_31 != 0);
  }

       VAR_22 = FUNC_3 (VAR_27);
       VAR_26 = FUNC_7 (VAR_27, VAR_29, VAR_28, VAR_18.reloc[VAR_23]);
       if (VAR_10
    && VAR_10 == VAR_18.op[VAR_23].disps->X_add_symbol
    && (((VAR_26 == VAR_0
   || VAR_26 == VAR_4
   || (VAR_26 == VAR_3
       && VAR_19))
         && (VAR_18.op[VAR_23].disps->X_op == VAR_15
      || (VAR_18.op[VAR_23].disps->X_op == VAR_12
          && ((FUNC_8
        (VAR_18.op[VAR_23].disps->X_op_symbol)->X_op)
       == VAR_14))))
        || VAR_26 == VAR_1))
  {
    offsetT VAR_32;

    if (VAR_20 == VAR_17)
      VAR_32 = (VAR_22 - VAR_17->fr_literal) - VAR_21;
    else
      {
        fragS *VAR_33;

        VAR_32 = VAR_20->fr_fix - VAR_21;
        for (VAR_33 = VAR_20->fr_next;
      VAR_33 && VAR_33 != VAR_17; VAR_33 = VAR_33->fr_next)
   VAR_32 += VAR_33->fr_fix;
        VAR_32 += VAR_22 - VAR_17->fr_literal;
      }

    if (!VAR_19)
      {
        VAR_26 = VAR_2;
        VAR_18.op[VAR_23].imms->X_add_number += VAR_32;
      }
    else if (VAR_26 == VAR_3)
      VAR_26 = VAR_6;
    else



      VAR_26 = VAR_5;
  }
       FUNC_2 (VAR_17, VAR_22 - VAR_17->fr_literal, VAR_27,
      VAR_18.op[VAR_23].disps, VAR_29, VAR_26);
     }
 }
    }
}
