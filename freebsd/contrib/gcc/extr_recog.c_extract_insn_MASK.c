
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_6__ {int n_operands; int n_alternatives; TYPE_1__* operand; scalar_t__ n_dups; } ;
struct TYPE_5__ {int n_operands; int n_alternatives; char** constraints; int * operand_type; int * operand; int * operand_mode; scalar_t__ n_dups; int operand_loc; int * insn; } ;
struct TYPE_4__ {char* constraint; int mode; } ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;

 int VAR_5 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ,char**,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 TYPE_3__* VAR_6 ;
 int FUNC_9 (int ) ;
 TYPE_2__ VAR_7 ;
 int FUNC_10 (int ) ;
 int VAR_8 ;

void
FUNC_11 (rtx VAR_9)
{
  int VAR_10;
  int VAR_11;
  int VAR_12;
  rtx VAR_13 = FUNC_2 (VAR_9);

  VAR_7.insn = ((void*)0);
  VAR_7.n_operands = 0;
  VAR_7.n_alternatives = 0;
  VAR_7.n_dups = 0;
  VAR_8 = -1;

  switch (FUNC_0 (VAR_13))
    {
    case 128:
    case 131:
    case 133:
    case 134:
    case 135:
      return;

    case 129:
      if (FUNC_0 (FUNC_3 (VAR_13)) == 132)
 goto asm_insn;
      else
 goto normal_insn;
    case 130:
      if ((FUNC_0 (FUNC_4 (VAR_13, 0, 0)) == 129
    && FUNC_0 (FUNC_3 (FUNC_4 (VAR_13, 0, 0))) == 132)
   || FUNC_0 (FUNC_4 (VAR_13, 0, 0)) == 132)
 goto asm_insn;
      else
 goto normal_insn;
    case 132:
    asm_insn:
      VAR_7.n_operands = VAR_12 = FUNC_5 (VAR_13);
      if (VAR_12 >= 0)
 {



   FUNC_8 (VAR_12 <= VAR_1);


   FUNC_6 (VAR_13, VAR_7.operand,
          VAR_7.operand_loc,
          VAR_7.constraints,
          VAR_7.operand_mode);
   if (VAR_12 > 0)
     {
       const char *VAR_14 = VAR_7.constraints[0];
       VAR_7.n_alternatives = 1;
       while (*VAR_14)
  VAR_7.n_alternatives += (*VAR_14++ == ',');
     }
   break;
 }
      FUNC_7 (VAR_9);

    default:
    normal_insn:



      VAR_11 = FUNC_10 (VAR_9);
      if (VAR_11 < 0)
 FUNC_7 (VAR_9);

      VAR_7.n_operands = VAR_12 = VAR_6[VAR_11].n_operands;
      VAR_7.n_alternatives = VAR_6[VAR_11].n_alternatives;
      VAR_7.n_dups = VAR_6[VAR_11].n_dups;

      FUNC_9 (VAR_9);

      for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
 {
   VAR_7.constraints[VAR_10] = VAR_6[VAR_11].operand[VAR_10].constraint;
   VAR_7.operand_mode[VAR_10] = VAR_6[VAR_11].operand[VAR_10].mode;

   if (VAR_7.operand_mode[VAR_10] == VAR_5)
     VAR_7.operand_mode[VAR_10] = FUNC_1 (VAR_7.operand[VAR_10]);
 }
    }
  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
    VAR_7.operand_type[VAR_10]
      = (VAR_7.constraints[VAR_10][0] == '=' ? VAR_4
  : VAR_7.constraints[VAR_10][0] == '+' ? VAR_3
  : VAR_2);

  FUNC_8 (VAR_7.n_alternatives <= VAR_0);
}
