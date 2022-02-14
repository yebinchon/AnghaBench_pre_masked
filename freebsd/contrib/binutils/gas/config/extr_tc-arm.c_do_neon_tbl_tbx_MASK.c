
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; int reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (int,int ,int ,int ,int) ;
 unsigned int FUNC_5 (unsigned int) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  unsigned VAR_5;
  FUNC_4 (3, VAR_0, VAR_2, VAR_2, VAR_1 | VAR_3);

  if (VAR_4.operands[1].imm < 1 || VAR_4.operands[1].imm > 4)
    {
      FUNC_3 (FUNC_2("bad list length for table lookup"));
      return;
    }

  VAR_5 = VAR_4.operands[1].imm - 1;
  VAR_4.instruction |= FUNC_1 (VAR_4.operands[0].reg) << 12;
  VAR_4.instruction |= FUNC_0 (VAR_4.operands[0].reg) << 22;
  VAR_4.instruction |= FUNC_1 (VAR_4.operands[1].reg) << 16;
  VAR_4.instruction |= FUNC_0 (VAR_4.operands[1].reg) << 7;
  VAR_4.instruction |= FUNC_1 (VAR_4.operands[2].reg);
  VAR_4.instruction |= FUNC_0 (VAR_4.operands[2].reg) << 5;
  VAR_4.instruction |= VAR_5 << 8;

  VAR_4.instruction = FUNC_5 (VAR_4.instruction);
}
