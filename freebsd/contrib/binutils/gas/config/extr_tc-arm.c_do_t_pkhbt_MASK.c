
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int X_add_number; scalar_t__ X_op; } ;
struct TYPE_6__ {TYPE_1__ exp; } ;
struct TYPE_8__ {int instruction; TYPE_2__ reloc; TYPE_3__* operands; } ;
struct TYPE_7__ {int reg; scalar_t__ present; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  VAR_1.instruction |= VAR_1.operands[0].reg << 8;
  VAR_1.instruction |= VAR_1.operands[1].reg << 16;
  VAR_1.instruction |= VAR_1.operands[2].reg;
  if (VAR_1.operands[3].present)
    {
      unsigned int VAR_2 = VAR_1.reloc.exp.X_add_number;
      FUNC_1 (VAR_1.reloc.exp.X_op != VAR_0,
    FUNC_0("expression too complex"));
      VAR_1.instruction |= (VAR_2 & 0x1c) << 10;
      VAR_1.instruction |= (VAR_2 & 0x03) << 6;
    }
}
