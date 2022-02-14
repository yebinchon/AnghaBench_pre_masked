
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {unsigned int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; int imm; int present; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_4 (int,int) ;
 TYPE_2__ VAR_8 ;
 int FUNC_5 (int) ;
 void* FUNC_6 (unsigned int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10 (void)
{
  enum neon_shape VAR_9 = FUNC_8 (130, 128, VAR_6, 131, 129,
    VAR_4, VAR_3, VAR_5, VAR_7);
  int VAR_10 = FUNC_5 (VAR_9);


  if (VAR_10 >= 4)
    {
      FUNC_4 (VAR_9, VAR_10);
      return;
    }

  switch (VAR_9)
    {
    case 130:
    case 128:
      {
        if (FUNC_9 (VAR_2 | VAR_1) == VAR_0)
          return;



        if (VAR_8.operands[2].present && VAR_8.operands[2].imm == 0)
          goto int_encode;
        unsigned VAR_11 = 32 - VAR_8.operands[2].imm;
        unsigned VAR_12[] = { 0x0000100, 0x1000100, 0x0, 0x1000000 };
        VAR_8.instruction = FUNC_2 (VAR_8.instruction);
        if (VAR_10 != -1)
          VAR_8.instruction |= VAR_12[VAR_10];
        VAR_8.instruction |= FUNC_1 (VAR_8.operands[0].reg) << 12;
        VAR_8.instruction |= FUNC_0 (VAR_8.operands[0].reg) << 22;
        VAR_8.instruction |= FUNC_1 (VAR_8.operands[1].reg);
        VAR_8.instruction |= FUNC_0 (VAR_8.operands[1].reg) << 5;
        VAR_8.instruction |= FUNC_7 (VAR_9) << 6;
        VAR_8.instruction |= 1 << 21;
        VAR_8.instruction |= VAR_11 << 16;

        VAR_8.instruction = FUNC_6 (VAR_8.instruction);
      }
      break;

    case 131:
    case 129:
    int_encode:
      {
        unsigned VAR_13[] = { 0x100, 0x180, 0x0, 0x080 };

        VAR_8.instruction = FUNC_3 (VAR_8.instruction);

        if (FUNC_9 (VAR_2 | VAR_1) == VAR_0)
          return;

        if (VAR_10 != -1)
          VAR_8.instruction |= VAR_13[VAR_10];

        VAR_8.instruction |= FUNC_1 (VAR_8.operands[0].reg) << 12;
        VAR_8.instruction |= FUNC_0 (VAR_8.operands[0].reg) << 22;
        VAR_8.instruction |= FUNC_1 (VAR_8.operands[1].reg);
        VAR_8.instruction |= FUNC_0 (VAR_8.operands[1].reg) << 5;
        VAR_8.instruction |= FUNC_7 (VAR_9) << 6;
        VAR_8.instruction |= 2 << 18;

        VAR_8.instruction = FUNC_6 (VAR_8.instruction);
      }
    break;

    default:

      FUNC_4 (VAR_9, VAR_10);
    }
}
