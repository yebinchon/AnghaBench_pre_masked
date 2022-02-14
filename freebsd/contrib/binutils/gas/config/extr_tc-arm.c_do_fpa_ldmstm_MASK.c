
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ X_op; int X_add_number; } ;
struct TYPE_6__ {TYPE_1__ exp; } ;
struct TYPE_8__ {int instruction; TYPE_3__* operands; TYPE_2__ reloc; } ;
struct TYPE_7__ {int reg; int imm; int postind; scalar_t__ preind; scalar_t__ writeback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int ,int ) ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  VAR_6.instruction |= VAR_6.operands[0].reg << 12;
  switch (VAR_6.operands[1].imm)
    {
    case 1: VAR_6.instruction |= VAR_0; break;
    case 2: VAR_6.instruction |= VAR_1; break;
    case 3: VAR_6.instruction |= VAR_1 | VAR_0; break;
    case 4: break;
    default: FUNC_1 ();
    }

  if (VAR_6.instruction & (VAR_4 | VAR_2))
    {




      FUNC_2 (VAR_6.reloc.exp.X_op != VAR_3
    || VAR_6.reloc.exp.X_add_number != 0,
    FUNC_0("this instruction does not support indexing"));

      if ((VAR_6.instruction & VAR_4) || VAR_6.operands[2].writeback)
 VAR_6.reloc.exp.X_add_number = 12 * VAR_6.operands[1].imm;

      if (!(VAR_6.instruction & VAR_2))
 VAR_6.reloc.exp.X_add_number = -VAR_6.reloc.exp.X_add_number;

      if (!(VAR_6.instruction & VAR_4) && VAR_6.operands[2].writeback)
 {
   VAR_6.operands[2].preind = 0;
   VAR_6.operands[2].postind = 1;
 }
    }

  FUNC_3 (2, VAR_5, VAR_5, 0);
}
