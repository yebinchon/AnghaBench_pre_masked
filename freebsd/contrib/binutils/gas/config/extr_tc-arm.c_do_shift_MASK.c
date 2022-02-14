
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_6__ {int instruction; TYPE_1__ reloc; TYPE_2__* operands; } ;
struct TYPE_5__ {unsigned int reg; scalar_t__ isreg; scalar_t__ present; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  unsigned int VAR_3 = (VAR_2.operands[1].present
       ? VAR_2.operands[1].reg
       : VAR_2.operands[0].reg);

  VAR_2.instruction |= VAR_2.operands[0].reg << 12;
  VAR_2.instruction |= VAR_3;
  if (VAR_2.operands[2].isreg)
    {
      VAR_2.instruction |= VAR_2.operands[2].reg << 8;
      VAR_2.instruction |= VAR_1;
    }
  else
    VAR_2.reloc.type = VAR_0;
}
