
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; int size; } ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; int immisalign; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_6 (int,int,int*,int,int,int,int,int,...) ;
 struct neon_type_el FUNC_7 (int,int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  struct neon_type_el VAR_7 = FUNC_7 (1, VAR_1, VAR_5 | VAR_3 | VAR_4);
  int VAR_8, VAR_9 = 0;

  if (VAR_7.type == VAR_2)
    return;

  switch ((VAR_6.instruction >> 8) & 3)
    {
    case 0:
      FUNC_3 (FUNC_1 (VAR_6.operands[0].imm) != 2);
      VAR_8 = FUNC_6 (VAR_7.size, VAR_6.operands[1].imm >> 8,
                                       &VAR_9, 16, 16, 32, 32, -1);
      if (VAR_8 == VAR_0)
        return;
      switch (FUNC_0 (VAR_6.operands[0].imm))
        {
        case 1: break;
        case 2: VAR_6.instruction |= 1 << 5; break;
        default: FUNC_5 (FUNC_2("bad list length")); return;
        }
      VAR_6.instruction |= FUNC_8 (VAR_7.size) << 6;
      break;

    case 1:
      VAR_8 = FUNC_6 (VAR_7.size, VAR_6.operands[1].imm >> 8,
                                       &VAR_9, 8, 16, 16, 32, 32, 64, -1);
      if (VAR_8 == VAR_0)
        return;
      FUNC_4 (FUNC_0 (VAR_6.operands[0].imm) != 2,
                  FUNC_2("bad list length"));
      if (FUNC_1 (VAR_6.operands[0].imm) == 2)
        VAR_6.instruction |= 1 << 5;
      VAR_6.instruction |= FUNC_8 (VAR_7.size) << 6;
      break;

    case 2:
      FUNC_4 (VAR_6.operands[1].immisalign,
                  FUNC_2("can't use alignment with this instruction"));
      FUNC_4 (FUNC_0 (VAR_6.operands[0].imm) != 3,
                  FUNC_2("bad list length"));
      if (FUNC_1 (VAR_6.operands[0].imm) == 2)
        VAR_6.instruction |= 1 << 5;
      VAR_6.instruction |= FUNC_8 (VAR_7.size) << 6;
      break;

    case 3:
      {
        int VAR_10 = VAR_6.operands[1].imm >> 8;
        VAR_8 = FUNC_6 (VAR_7.size, VAR_10, &VAR_9, 8, 32,
                                         16, 64, 32, 64, 32, 128, -1);
        if (VAR_8 == VAR_0)
          return;
        FUNC_4 (FUNC_0 (VAR_6.operands[0].imm) != 4,
                    FUNC_2("bad list length"));
        if (FUNC_1 (VAR_6.operands[0].imm) == 2)
          VAR_6.instruction |= 1 << 5;
        if (VAR_7.size == 32 && VAR_10 == 128)
          VAR_6.instruction |= 0x3 << 6;
        else
          VAR_6.instruction |= FUNC_8 (VAR_7.size) << 6;
      }
      break;

    default: ;
    }

  VAR_6.instruction |= VAR_9 << 4;
}
