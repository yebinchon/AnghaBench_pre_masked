
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; int imm; scalar_t__ writeback; scalar_t__ present; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_2;

  if (VAR_1.operands[0].present)
    {
      VAR_2 = VAR_1.operands[0].reg;
      FUNC_1 (VAR_2 != 13, FUNC_0("SRS base register must be r13"));
    }
  else
    VAR_2 = 13;

  VAR_1.instruction |= VAR_2 << 16;
  VAR_1.instruction |= VAR_1.operands[1].imm;
  if (VAR_1.operands[0].writeback || VAR_1.operands[1].writeback)
    VAR_1.instruction |= VAR_0;
}
