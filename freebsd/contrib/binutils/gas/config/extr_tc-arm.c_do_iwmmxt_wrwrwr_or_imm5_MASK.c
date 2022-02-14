
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; scalar_t__ isreg; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  if (VAR_2.operands[2].isreg)
    FUNC_4 ();
  else {
    FUNC_2 (!FUNC_0 (VAR_1, VAR_0),
  FUNC_1("immediate operand requires iWMMXt2"));
    FUNC_3 ();
    if (VAR_2.operands[2].imm == 0)
      {
 switch ((VAR_2.instruction >> 20) & 0xf)
   {
   case 4:
   case 5:
   case 6:
   case 7:

     VAR_2.operands[2].imm = 16;
     VAR_2.instruction = (VAR_2.instruction & 0xff0fffff) | (0x7 << 20);
     break;
   case 8:
   case 9:
   case 10:
   case 11:

     VAR_2.operands[2].imm = 32;
     VAR_2.instruction = (VAR_2.instruction & 0xff0fffff) | (0xb << 20);
     break;
   case 12:
   case 13:
   case 14:
   case 15:
     {

       unsigned long VAR_3;
       VAR_3 = (VAR_2.instruction >> 16) & 0xf;
       VAR_2.instruction &= 0xff0fff0f;
       VAR_2.instruction |= VAR_3;

       return;
     }
   }
      }

    VAR_2.operands[2].imm &= 0x1f;
    VAR_2.instruction |= (0xf << 28) | ((VAR_2.operands[2].imm & 0x10) << 4) | (VAR_2.operands[2].imm & 0xf);
  }
}
