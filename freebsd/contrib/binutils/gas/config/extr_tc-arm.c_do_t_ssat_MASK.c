
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ X_op; int X_add_number; } ;
struct TYPE_7__ {int type; TYPE_2__ exp; } ;
struct TYPE_8__ {int instruction; TYPE_3__ reloc; TYPE_1__* operands; } ;
struct TYPE_5__ {int reg; int imm; scalar_t__ shift_kind; scalar_t__ present; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_4__ VAR_3 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  VAR_3.instruction |= VAR_3.operands[0].reg << 8;
  VAR_3.instruction |= VAR_3.operands[1].imm - 1;
  VAR_3.instruction |= VAR_3.operands[2].reg << 16;

  if (VAR_3.operands[3].present)
    {
      FUNC_1 (VAR_3.reloc.exp.X_op != VAR_1,
    FUNC_0("expression too complex"));

      if (VAR_3.reloc.exp.X_add_number != 0)
 {
   if (VAR_3.operands[3].shift_kind == VAR_2)
     VAR_3.instruction |= 0x00200000;
   VAR_3.instruction |= (VAR_3.reloc.exp.X_add_number & 0x1c) << 10;
   VAR_3.instruction |= (VAR_3.reloc.exp.X_add_number & 0x03) << 6;
 }
      VAR_3.reloc.type = VAR_0;
    }
}
