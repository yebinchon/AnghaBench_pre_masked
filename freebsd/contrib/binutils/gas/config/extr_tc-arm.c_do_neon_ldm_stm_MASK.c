
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; int writeback; int reg; scalar_t__ issingle; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_6 (void)
{

  int VAR_1 = (VAR_0.instruction & (1 << 24)) != 0;
  unsigned VAR_2 = VAR_0.operands[1].imm * 2;

  if (VAR_0.operands[1].issingle)
    {
      FUNC_5 (VAR_1);
      return;
    }

  FUNC_3 (VAR_1 && !VAR_0.operands[0].writeback,
              FUNC_2("writeback (!) must be used for VLDMDB and VSTMDB"));

  FUNC_3 (VAR_0.operands[1].imm < 1 || VAR_0.operands[1].imm > 16,
              FUNC_2("register list must contain at least 1 and at most 16 "
                "registers"));

  VAR_0.instruction |= VAR_0.operands[0].reg << 16;
  VAR_0.instruction |= VAR_0.operands[0].writeback << 21;
  VAR_0.instruction |= FUNC_1 (VAR_0.operands[1].reg) << 12;
  VAR_0.instruction |= FUNC_0 (VAR_0.operands[1].reg) << 22;

  VAR_0.instruction |= VAR_2;

  FUNC_4 ();
}
