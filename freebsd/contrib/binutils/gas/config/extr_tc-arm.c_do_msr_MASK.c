
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pc_rel; int type; } ;
struct TYPE_6__ {TYPE_1__ reloc; int instruction; TYPE_2__* operands; } ;
struct TYPE_5__ {int reg; scalar_t__ isreg; int imm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  if (FUNC_0 () == VAR_2)
    return;

  VAR_3.instruction |= VAR_3.operands[0].imm;
  if (VAR_3.operands[1].isreg)
    VAR_3.instruction |= VAR_3.operands[1].reg;
  else
    {
      VAR_3.instruction |= VAR_1;
      VAR_3.reloc.type = VAR_0;
      VAR_3.reloc.pc_rel = 0;
    }
}
