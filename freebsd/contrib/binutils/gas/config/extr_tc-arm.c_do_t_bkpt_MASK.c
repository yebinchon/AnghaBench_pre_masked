
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cond; int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; scalar_t__ present; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  FUNC_1 (VAR_1.cond != VAR_0,
       FUNC_0("instruction is always unconditional"));
  if (VAR_1.operands[0].present)
    {
      FUNC_1 (VAR_1.operands[0].imm > 255,
    FUNC_0("immediate value out of range"));
      VAR_1.instruction |= VAR_1.operands[0].imm;
    }
}
