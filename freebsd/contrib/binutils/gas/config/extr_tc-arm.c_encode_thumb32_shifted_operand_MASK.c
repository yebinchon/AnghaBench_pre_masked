
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int X_add_number; scalar_t__ X_op; } ;
struct TYPE_7__ {TYPE_2__ exp; } ;
struct TYPE_8__ {int instruction; TYPE_3__ reloc; TYPE_1__* operands; } ;
struct TYPE_5__ {unsigned int shift_kind; int immisreg; int reg; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static void
FUNC_2 (int VAR_5)
{
  unsigned int VAR_6 = VAR_4.reloc.exp.X_add_number;
  unsigned int VAR_7 = VAR_4.operands[VAR_5].shift_kind;

  FUNC_1 (VAR_4.operands[VAR_5].immisreg,
       FUNC_0("shift by register not allowed in thumb mode"));
  VAR_4.instruction |= VAR_4.operands[VAR_5].reg;
  if (VAR_7 == VAR_3)
    VAR_4.instruction |= VAR_2 << 4;
  else
    {
      FUNC_1 (VAR_4.reloc.exp.X_op != VAR_0,
    FUNC_0("expression too complex"));

      FUNC_1 (VAR_6 > 32
    || (VAR_6 == 32 && (VAR_7 == VAR_1
          || VAR_7 == VAR_2)),
    FUNC_0("shift expression is too large"));

      if (VAR_6 == 0)
 VAR_7 = VAR_1;
      else if (VAR_6 == 32)
 VAR_6 = 0;

      VAR_4.instruction |= VAR_7 << 4;
      VAR_4.instruction |= (VAR_6 & 0x1c) << 10;
      VAR_4.instruction |= (VAR_6 & 0x03) << 6;
    }
}
