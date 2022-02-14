
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; scalar_t__ present; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_1.instruction |= VAR_1.operands[0].imm << 6;
  if (VAR_1.operands[1].present)
    {
      VAR_1.instruction |= VAR_0;
      VAR_1.instruction |= VAR_1.operands[1].imm;
    }
}
