
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {int size; scalar_t__ type; } ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; int immisalign; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_5 (int,int,int*,int,int,int,int,int,...) ;
 struct neon_type_el FUNC_6 (int,int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  struct neon_type_el VAR_7 = FUNC_6 (1, VAR_1, VAR_5 | VAR_3 | VAR_4);
  int VAR_8, VAR_9 = 0;
  int VAR_10 = FUNC_7 (VAR_7.size);
  int VAR_11 = VAR_6.operands[1].imm >> 8;
  int VAR_12 = (VAR_6.instruction >> 8) & 3;
  int VAR_13 = 64 / VAR_7.size;

  if (VAR_7.type == VAR_2)
    return;

  FUNC_4 (FUNC_1 (VAR_6.operands[0].imm) != VAR_12 + 1,
              FUNC_3("bad list length"));
  FUNC_4 (FUNC_0 (VAR_6.operands[0].imm) >= VAR_13,
              FUNC_3("scalar index out of range"));
  FUNC_4 (VAR_12 != 0 && FUNC_2 (VAR_6.operands[0].imm) == 2
              && VAR_7.size == 8,
              FUNC_3("stride of 2 unavailable when element size is 8"));

  switch (VAR_12)
    {
    case 0:
      VAR_8 = FUNC_5 (VAR_7.size, VAR_11, &VAR_9, 16, 16,
                                       32, 32, -1);
      if (VAR_8 == VAR_0)
        return;
      if (VAR_9)
        {
          unsigned VAR_14 = 0;
          switch (VAR_7.size)
            {
            case 16: VAR_14 = 0x1; break;
            case 32: VAR_14 = 0x3; break;
            default: ;
            }
          VAR_6.instruction |= VAR_14 << 4;
        }
      break;

    case 1:
      VAR_8 = FUNC_5 (VAR_7.size, VAR_11, &VAR_9, 8, 16, 16, 32,
                                       32, 64, -1);
      if (VAR_8 == VAR_0)
        return;
      if (VAR_9)
        VAR_6.instruction |= 1 << 4;
      break;

    case 2:
      FUNC_4 (VAR_6.operands[1].immisalign,
                  FUNC_3("can't use alignment with this instruction"));
      break;

    case 3:
      VAR_8 = FUNC_5 (VAR_7.size, VAR_11, &VAR_9, 8, 32,
                                       16, 64, 32, 64, 32, 128, -1);
      if (VAR_8 == VAR_0)
        return;
      if (VAR_9)
        {
          unsigned VAR_15 = 0;
          switch (VAR_7.size)
            {
            case 8: VAR_15 = 0x1; break;
            case 16: VAR_15 = 0x1; break;
            case 32: VAR_15 = (VAR_11 == 64) ? 0x1 : 0x2; break;
            default: ;
            }
          VAR_6.instruction |= VAR_15 << 4;
        }
      break;

    default: ;
    }


  if (VAR_12 != 0 && FUNC_2 (VAR_6.operands[0].imm) == 2)
    VAR_6.instruction |= 1 << (4 + VAR_10);

  VAR_6.instruction |= FUNC_0 (VAR_6.operands[0].imm) << (VAR_10 + 5);
  VAR_6.instruction |= VAR_10 << 10;
}
