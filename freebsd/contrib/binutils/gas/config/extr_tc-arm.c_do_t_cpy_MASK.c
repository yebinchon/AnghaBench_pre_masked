
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size_req; int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  if (VAR_1.size_req == 4)
    {
      VAR_1.instruction = FUNC_0 (VAR_0);
      VAR_1.instruction |= VAR_1.operands[0].reg << 8;
      VAR_1.instruction |= VAR_1.operands[1].reg;
    }
  else
    {
      VAR_1.instruction |= (VAR_1.operands[0].reg & 0x8) << 4;
      VAR_1.instruction |= (VAR_1.operands[0].reg & 0x7);
      VAR_1.instruction |= VAR_1.operands[1].reg << 3;
    }
}
