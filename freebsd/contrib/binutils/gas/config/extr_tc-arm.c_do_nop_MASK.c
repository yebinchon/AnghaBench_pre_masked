
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; scalar_t__ present; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  if (VAR_0.operands[0].present)
    {

      VAR_0.instruction &= 0xf0000000;
      VAR_0.instruction |= 0x0320f000 + VAR_0.operands[0].imm;
    }
}
