
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int X_add_number; } ;
struct TYPE_6__ {int pc_rel; TYPE_1__ exp; int type; } ;
struct TYPE_8__ {int size_req; int relax; int instruction; TYPE_3__* operands; TYPE_2__ reloc; } ;
struct TYPE_7__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_4__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  if (VAR_3 && VAR_2.size_req == 0 && VAR_2.operands[0].reg <= 7)
    {

      VAR_2.relax = VAR_2.instruction;
      VAR_2.instruction = FUNC_0 (VAR_2.instruction);
      VAR_2.instruction |= VAR_2.operands[0].reg << 4;
    }
  else if (VAR_3 && VAR_2.size_req != 2)
    {

      VAR_2.instruction = FUNC_1 (VAR_2.instruction);
      VAR_2.instruction |= VAR_2.operands[0].reg << 8;
      VAR_2.reloc.type = VAR_0;
      VAR_2.reloc.pc_rel = 1;
    }
  else
    {

      VAR_2.instruction = FUNC_0 (VAR_2.instruction);
      VAR_2.reloc.type = VAR_1;
      VAR_2.reloc.exp.X_add_number -= 4;
      VAR_2.reloc.pc_rel = 1;

      VAR_2.instruction |= VAR_2.operands[0].reg << 4;
    }
}
