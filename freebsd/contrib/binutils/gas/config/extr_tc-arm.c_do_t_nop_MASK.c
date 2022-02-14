
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size_req; int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; int present; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  if (VAR_1)
    {
      if (VAR_0.size_req == 4 || VAR_0.operands[0].imm > 15)
 {
   VAR_0.instruction = FUNC_1 (VAR_0.instruction);
   VAR_0.instruction |= VAR_0.operands[0].imm;
 }
      else
 {
   VAR_0.instruction = FUNC_0 (VAR_0.instruction);
   VAR_0.instruction |= VAR_0.operands[0].imm << 4;
 }
    }
  else
    {
      FUNC_3 (VAR_0.operands[0].present,
    FUNC_2("Thumb does not support NOP with hints"));
      VAR_0.instruction = 0x46c0;
    }
}
