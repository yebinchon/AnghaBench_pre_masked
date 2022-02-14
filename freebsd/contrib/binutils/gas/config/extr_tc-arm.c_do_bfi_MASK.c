
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; unsigned int imm; int isreg; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  unsigned int VAR_2;



  if (!VAR_1.operands[1].isreg)
    VAR_1.operands[1].reg = VAR_0;

  VAR_2 = VAR_1.operands[2].imm + VAR_1.operands[3].imm;
  FUNC_1 (VAR_2 > 32, FUNC_0("bit-field extends past end of register"));


  VAR_1.instruction |= VAR_1.operands[0].reg << 12;
  VAR_1.instruction |= VAR_1.operands[1].reg;
  VAR_1.instruction |= VAR_1.operands[2].imm << 7;
  VAR_1.instruction |= (VAR_2 - 1) << 16;
}
