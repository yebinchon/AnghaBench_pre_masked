
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; scalar_t__ imm; scalar_t__ immisreg; scalar_t__ postind; scalar_t__ writeback; scalar_t__ present; int isreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  FUNC_2 (VAR_3.operands[0].reg % 2 != 0,
       FUNC_0("first destination register must be even"));
  FUNC_2 (VAR_3.operands[1].present
       && VAR_3.operands[1].reg != VAR_3.operands[0].reg + 1,
       FUNC_0("can only load two consecutive registers"));
  FUNC_2 (VAR_3.operands[0].reg == VAR_2, FUNC_0("r14 not allowed here"));
  FUNC_2 (!VAR_3.operands[2].isreg, FUNC_0("'[' expected"));

  if (!VAR_3.operands[1].present)
    VAR_3.operands[1].reg = VAR_3.operands[0].reg + 1;

  if (VAR_3.instruction & VAR_1)
    {




      if (VAR_3.operands[2].reg == VAR_3.operands[1].reg
   && (VAR_3.operands[2].writeback || VAR_3.operands[2].postind))
 FUNC_1 (FUNC_0("base register written back, and overlaps "
     "second destination register"));



      else if (VAR_3.operands[2].immisreg
        && ((unsigned) VAR_3.operands[2].imm == VAR_3.operands[0].reg
     || (unsigned) VAR_3.operands[2].imm == VAR_3.operands[1].reg))
 FUNC_1 (FUNC_0("index register overlaps destination register"));
    }

  VAR_3.instruction |= VAR_3.operands[0].reg << 12;
  FUNC_3 (2, VAR_0);
}
