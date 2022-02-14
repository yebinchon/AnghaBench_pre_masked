
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size_req; int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; scalar_t__ present; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  FUNC_2 (VAR_4, VAR_0);
  if (VAR_6
      && (VAR_5.operands[1].present || VAR_5.size_req == 4)
      && FUNC_0 (VAR_3, VAR_2))
    {
      unsigned int VAR_7 = (VAR_5.instruction & 0x0030) >> 4;
      VAR_5.instruction = 0xf3af8000;
      VAR_5.instruction |= VAR_7 << 9;
      VAR_5.instruction |= VAR_5.operands[0].imm << 5;
      if (VAR_5.operands[1].present)
 VAR_5.instruction |= 0x100 | VAR_5.operands[1].imm;
    }
  else
    {
      FUNC_2 (!FUNC_0 (VAR_3, VAR_1)
    && (VAR_5.operands[0].imm & 4),
    FUNC_1("selected processor does not support 'A' form "
      "of this instruction"));
      FUNC_2 (VAR_5.operands[1].present || VAR_5.size_req == 4,
    FUNC_1("Thumb does not support the 2-argument "
      "form of this instruction"));
      VAR_5.instruction |= VAR_5.operands[0].imm;
    }
}
