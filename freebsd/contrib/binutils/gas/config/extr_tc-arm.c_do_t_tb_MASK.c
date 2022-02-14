
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int immisreg; int imm; int reg; scalar_t__ shifted; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_3;

  VAR_3 = (VAR_2.instruction & 0x10) != 0;
  FUNC_1 (VAR_1 && VAR_1 != 0x10, VAR_0);
  FUNC_1 (VAR_2.operands[0].immisreg,
       FUNC_0("instruction requires register index"));
  FUNC_1 (VAR_2.operands[0].imm == 15,
       FUNC_0("PC is not a valid index register"));
  FUNC_1 (!VAR_3 && VAR_2.operands[0].shifted,
       FUNC_0("instruction does not allow shifted index"));
  VAR_2.instruction |= (VAR_2.operands[0].reg << 16) | VAR_2.operands[0].imm;
}
