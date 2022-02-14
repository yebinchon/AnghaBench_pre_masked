
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int offsetT ;
typedef int addressT ;
struct TYPE_9__ {scalar_t__ X_op; int X_add_number; } ;
struct TYPE_8__ {scalar_t__ fr_literal; } ;
struct TYPE_7__ {int operands; int* types; scalar_t__* reloc; TYPE_1__* op; int disp_operands; } ;
struct TYPE_6__ {TYPE_5__* disps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int ,TYPE_5__*,int ,scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_3__* VAR_12 ;
 TYPE_2__ VAR_13 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  int VAR_14;

  for (VAR_14 = VAR_13.operands; --VAR_14 >= 0;)
    if (VAR_13.types[VAR_14] & VAR_4)
      {
 if (VAR_13.op[VAR_14].disps->X_op == VAR_10)
   {
     offsetT VAR_15 = VAR_13.op[VAR_14].disps->X_add_number;

     if ((VAR_13.types[VAR_14] & VAR_5)
  && (VAR_15 & ~(offsetT) 0xffff) == 0)
       {



  VAR_15 = (((VAR_15 & 0xffff) ^ 0x8000) - 0x8000);
  VAR_13.types[VAR_14] &= ~VAR_8;
       }
     if ((VAR_13.types[VAR_14] & VAR_6)
  && (VAR_15 & ~(((offsetT) 2 << 31) - 1)) == 0)
       {



  VAR_15 &= (((offsetT) 2 << 31) - 1);
  VAR_15 = (VAR_15 ^ ((offsetT) 1 << 31)) - ((addressT) 1 << 31);
  VAR_13.types[VAR_14] &= ~VAR_8;
       }
     if (!VAR_15 && (VAR_13.types[VAR_14] & VAR_2))
       {
  VAR_13.types[VAR_14] &= ~VAR_4;
  VAR_13.op[VAR_14].disps = 0;
  VAR_13.disp_operands--;
       }
     else if (VAR_11 == VAR_3)
       {
  if (FUNC_1 (VAR_15))
    {
      VAR_13.types[VAR_14] &= ~VAR_8;
      VAR_13.types[VAR_14] |= VAR_7;
    }
  if (FUNC_2 (VAR_15))
    VAR_13.types[VAR_14] |= VAR_6;
       }
     if ((VAR_13.types[VAR_14] & (VAR_6 | VAR_7 | VAR_5))
  && FUNC_0 (VAR_15))
       VAR_13.types[VAR_14] |= VAR_9;
   }
 else if (VAR_13.reloc[VAR_14] == VAR_0
   || VAR_13.reloc[VAR_14] == VAR_1)
   {
     FUNC_3 (VAR_12, FUNC_4 (0) - VAR_12->fr_literal, 0,
    VAR_13.op[VAR_14].disps, 0, VAR_13.reloc[VAR_14]);
     VAR_13.types[VAR_14] &= ~VAR_4;
   }
  else

   VAR_13.types[VAR_14] &= ~VAR_8;
      }
}
