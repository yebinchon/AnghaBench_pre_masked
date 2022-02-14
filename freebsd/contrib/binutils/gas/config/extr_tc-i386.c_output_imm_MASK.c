
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
struct TYPE_15__ {scalar_t__ X_op; scalar_t__ X_add_symbol; int X_add_number; int X_op_symbol; } ;
struct TYPE_10__ {int opcode_modifier; } ;
struct TYPE_14__ {unsigned int operands; int* types; scalar_t__ suffix; TYPE_2__* op; int * reloc; TYPE_1__ tm; } ;
struct TYPE_13__ {scalar_t__ X_op; } ;
struct TYPE_11__ {TYPE_9__* imms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (TYPE_3__*,int,int,TYPE_9__*,int ,int) ;
 char* FUNC_1 (int) ;
 TYPE_3__* VAR_15 ;
 TYPE_6__ VAR_16 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,int,int) ;
 int VAR_17 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int ,int,int ) ;
 TYPE_4__* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (fragS *VAR_18, offsetT VAR_19)
{
  char *VAR_20;
  unsigned int VAR_21;

  for (VAR_21 = 0; VAR_21 < VAR_16.operands; VAR_21++)
    {
      if (VAR_16.types[VAR_21] & VAR_7)
 {
   if (VAR_16.op[VAR_21].imms->X_op == VAR_11)
     {
       int VAR_22 = FUNC_2 (VAR_21);
       offsetT VAR_23;

       VAR_23 = FUNC_4 (VAR_16.op[VAR_21].imms->X_add_number,
         VAR_22);
       VAR_20 = FUNC_1 (VAR_22);
       FUNC_3 (VAR_20, VAR_23, VAR_22);
     }
   else
     {




       enum bfd_reloc_code_real VAR_24;
       int VAR_25 = FUNC_2 (VAR_21);
       int VAR_26;

       if ((VAR_16.types[VAR_21] & (VAR_8))
    && (VAR_16.suffix == VAR_14
        || (!VAR_16.suffix && (VAR_16.tm.opcode_modifier & VAR_9))))
  VAR_26 = 1;
       else
  VAR_26 = 0;

       VAR_20 = FUNC_1 (VAR_25);
       VAR_24 = FUNC_5 (VAR_25, 0, VAR_26, VAR_16.reloc[VAR_21]);
       if ((VAR_24 == VAR_0
     || VAR_24 == VAR_3
     || VAR_24 == VAR_2)
    && VAR_6
    && VAR_6 == VAR_16.op[VAR_21].imms->X_add_symbol
    && (VAR_16.op[VAR_21].imms->X_op == VAR_13
        || (VAR_16.op[VAR_21].imms->X_op == VAR_10
     && ((FUNC_6
          (VAR_16.op[VAR_21].imms->X_op_symbol)->X_op)
         == VAR_12))))
  {
    offsetT VAR_27;

    if (VAR_18 == VAR_15)
      VAR_27 = (VAR_20 - VAR_15->fr_literal) - VAR_19;
    else
      {
        fragS *VAR_28;

        VAR_27 = VAR_18->fr_fix - VAR_19;
        for (VAR_28 = VAR_18->fr_next;
      VAR_28 && VAR_28 != VAR_15; VAR_28 = VAR_28->fr_next)
   VAR_27 += VAR_28->fr_fix;
        VAR_27 += VAR_20 - VAR_15->fr_literal;
      }

    if (!VAR_17)
      VAR_24 = VAR_1;
    else if (VAR_25 == 4)
      VAR_24 = VAR_4;
    else if (VAR_25 == 8)
      VAR_24 = VAR_5;
    VAR_16.op[VAR_21].imms->X_add_number += VAR_27;
  }
       FUNC_0 (VAR_15, VAR_20 - VAR_15->fr_literal, VAR_25,
      VAR_16.op[VAR_21].imms, 0, VAR_24);
     }
 }
    }
}
