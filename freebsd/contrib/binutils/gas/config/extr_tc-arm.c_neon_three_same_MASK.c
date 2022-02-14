
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (int VAR_1, int VAR_2, int VAR_3)
{
  VAR_0.instruction |= FUNC_1 (VAR_0.operands[0].reg) << 12;
  VAR_0.instruction |= FUNC_0 (VAR_0.operands[0].reg) << 22;
  VAR_0.instruction |= FUNC_1 (VAR_0.operands[1].reg) << 16;
  VAR_0.instruction |= FUNC_0 (VAR_0.operands[1].reg) << 7;
  VAR_0.instruction |= FUNC_1 (VAR_0.operands[2].reg);
  VAR_0.instruction |= FUNC_0 (VAR_0.operands[2].reg) << 5;
  VAR_0.instruction |= (VAR_1 != 0) << 6;
  VAR_0.instruction |= (VAR_2 != 0) << 24;
  if (VAR_3 != -1)
    VAR_0.instruction |= FUNC_3 (VAR_3) << 20;

  VAR_0.instruction = FUNC_2 (VAR_0.instruction);
}
