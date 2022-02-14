
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; int imm; scalar_t__ writeback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_5 = VAR_4.operands[0].reg;
  int VAR_6 = VAR_4.operands[1].imm;

  VAR_4.instruction |= VAR_5 << 16;
  VAR_4.instruction |= VAR_6;

  if (VAR_4.operands[1].writeback)
    VAR_4.instruction |= VAR_0;

  if (VAR_4.operands[0].writeback)
    {
      VAR_4.instruction |= VAR_3;

      if (VAR_4.instruction & VAR_1)
 {

   if ((VAR_4.instruction & VAR_0)
       && ((VAR_6 & (1 << VAR_2)) == 0))
     FUNC_1 (FUNC_0("writeback of base register is UNPREDICTABLE"));

   else if (VAR_6 & (1 << VAR_5))
     FUNC_1 (FUNC_0("writeback of base register when in register list is UNPREDICTABLE"));
 }
      else
 {

   if (VAR_4.instruction & VAR_0)
     FUNC_1 (FUNC_0("writeback of base register is UNPREDICTABLE"));

   else if ((VAR_6 & (1 << VAR_5))
     && (VAR_6 & ((1 << VAR_5) - 1)))
     FUNC_1 (FUNC_0("if writeback register is in list, it must be the lowest reg in the list"));
 }
    }
}
