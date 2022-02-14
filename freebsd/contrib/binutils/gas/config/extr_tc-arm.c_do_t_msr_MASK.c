
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; int reg; int isreg; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 () ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  int VAR_7;

  if (FUNC_3 () == VAR_2)
    return;

  FUNC_2 (!VAR_6.operands[1].isreg,
       FUNC_1("Thumb encoding does not support an immediate here"));
  VAR_7 = VAR_6.operands[0].imm;
  if (VAR_7 & ~0xff)
    {
      FUNC_2 (!FUNC_0 (VAR_5, VAR_3),
    FUNC_1("selected processor does not support "
      "requested special purpose register"));
    }
  else
    {
      FUNC_2 (!FUNC_0 (VAR_5, VAR_4),
    FUNC_1("selected processor does not support "
      "requested special purpose register"));
      VAR_7 |= VAR_0;
    }
  VAR_6.instruction |= (VAR_7 & VAR_1) >> 2;
  VAR_6.instruction |= (VAR_7 & ~VAR_1) >> 8;
  VAR_6.instruction |= (VAR_7 & 0xff);
  VAR_6.instruction |= VAR_6.operands[1].reg << 16;
}
