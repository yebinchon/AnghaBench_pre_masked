
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size_req; int instruction; int error; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  if (VAR_1.operands[0].reg <= 7 && VAR_1.operands[1].reg <= 7
      && VAR_1.size_req != 4)
    {
      VAR_1.instruction = FUNC_0 (VAR_1.instruction);
      VAR_1.instruction |= VAR_1.operands[0].reg;
      VAR_1.instruction |= VAR_1.operands[1].reg << 3;
    }
  else if (VAR_2)
    {
      VAR_1.instruction = FUNC_1 (VAR_1.instruction);
      VAR_1.instruction |= VAR_1.operands[0].reg << 8;
      VAR_1.instruction |= VAR_1.operands[1].reg << 16;
      VAR_1.instruction |= VAR_1.operands[1].reg;
    }
  else
    VAR_1.error = VAR_0;
}
