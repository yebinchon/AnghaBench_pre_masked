
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; int reg; scalar_t__ writeback; int immisreg; scalar_t__ postind; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_11 (void)
{
  switch (FUNC_5 (VAR_0.operands[0].imm))
    {
    case 128:
      VAR_0.instruction = FUNC_3 (VAR_0.instruction);
      FUNC_9 ();
      break;

    case 129:
      VAR_0.instruction = FUNC_2 (VAR_0.instruction);
      FUNC_8 ();
      break;

    default:
      VAR_0.instruction = FUNC_4 (VAR_0.instruction);
      FUNC_10 ();
    }


  VAR_0.instruction |= FUNC_1 (VAR_0.operands[0].reg) << 12;
  VAR_0.instruction |= FUNC_0 (VAR_0.operands[0].reg) << 22;
  VAR_0.instruction |= VAR_0.operands[1].reg << 16;

  if (VAR_0.operands[1].postind)
    {
      int VAR_2 = VAR_0.operands[1].imm & 0xf;
      FUNC_7 (!VAR_0.operands[1].immisreg,
                  FUNC_6("post-index must be a register"));
      FUNC_7 (VAR_2 == 0xd || VAR_2 == 0xf,
                  FUNC_6("bad register for post-index"));
      VAR_0.instruction |= VAR_2;
    }
  else if (VAR_0.operands[1].writeback)
    {
      VAR_0.instruction |= 0xd;
    }
  else
    VAR_0.instruction |= 0xf;

  if (VAR_1)
    VAR_0.instruction |= 0xf9000000;
  else
    VAR_0.instruction |= 0xf4000000;
}
