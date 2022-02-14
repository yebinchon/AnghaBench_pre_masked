
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int n_operands; int * operand; } ;


 scalar_t__ FUNC_0 (int ) ;




 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;

int
FUNC_6 (rtx VAR_1, int VAR_2)
{
  int VAR_3 = 0;
  int VAR_4;
  FUNC_1 (VAR_1);
  for (VAR_4 = VAR_0.n_operands - 1; VAR_4 >= 0; --VAR_4)
    if (FUNC_0 (VAR_0.operand[VAR_4]))
      {
 FUNC_3 (!VAR_3);
 if (VAR_2 && FUNC_5 (VAR_0.operand[VAR_4]))
   VAR_3 = 1;
 else
   {
     switch (FUNC_4 (VAR_1))
       {
  case 129:
    VAR_3+=1;
    break;
  case 130:
    VAR_3+=2;
    break;
  case 128:
    VAR_3+=4;
    break;

  case 131:
    VAR_3+=4;
    break;
  default:
    FUNC_2 ("unknown insn mode", VAR_1);
       }
   }
      }
  return VAR_3;
}
