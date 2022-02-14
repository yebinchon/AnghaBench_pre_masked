
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; int reg; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 () ;
 TYPE_2__ VAR_9 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  int VAR_10;

  if (FUNC_3 () == VAR_5)
    return;

  VAR_10 = VAR_9.operands[1].imm & (VAR_0|VAR_3|VAR_2|VAR_1|VAR_4);
  if (VAR_10 == 0)
    {
      FUNC_2 (!FUNC_0 (VAR_8, VAR_7),
    FUNC_1("selected processor does not support "
      "requested special purpose register"));
    }
  else
    {
      FUNC_2 (!FUNC_0 (VAR_8, VAR_6),
    FUNC_1("selected processor does not support "
      "requested special purpose register %x"));

      FUNC_2 ((VAR_10 & ~VAR_4) != (VAR_0|VAR_1),
    FUNC_1("'CPSR' or 'SPSR' expected"));
    }

  VAR_9.instruction |= VAR_9.operands[0].reg << 8;
  VAR_9.instruction |= (VAR_10 & VAR_4) >> 2;
  VAR_9.instruction |= VAR_9.operands[1].imm & 0xff;
}
