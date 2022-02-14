
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct expression {TYPE_1__* elts; } ;
struct TYPE_2__ {int longconst; scalar_t__ opcode; } ;



 scalar_t__ VAR_0 ;

 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

void
FUNC_3 (struct expression *VAR_2, int VAR_3,
     int *VAR_4, int *VAR_5)
{
  int VAR_6 = 1;
  int VAR_7 = 0;
  int VAR_8;

  if (VAR_3 < 1)
    FUNC_1 ("?error in operator_length_standard");

  VAR_8 = (int) VAR_2->elts[VAR_3 - 1].opcode;

  switch (VAR_8)
    {

    case 149:
      VAR_6 = FUNC_2 (VAR_2->elts[VAR_3 - 2].longconst);
      VAR_6 = 5 + FUNC_0 (VAR_6 + 1);
      break;

    case 157:
    case 164:
    case 145:
      VAR_6 = 4;
      break;

    case 146:
    case 166:
    case 158:
    case 150:
    case 160:
      VAR_6 = 3;
      break;

    case 165:
      VAR_6 = 1;
      VAR_7 = 2;
      break;

    case 161:
    case 162:
      VAR_6 = 3;
      VAR_7 = 1 + FUNC_2 (VAR_2->elts[VAR_3 - 2].longconst);
      break;

    case 154:
      VAR_6 = 4;
      VAR_7 = 1 + FUNC_2 (VAR_2->elts[VAR_3 - 2].longconst);
      break;

    case 133:
    case 131:
      VAR_6 = 3;
      break;

    case 170:
    case 137:
    case 132:
      VAR_6 = 3;
      VAR_7 = 1;
      break;

    case 139:
    case 138:
    case 136:
    case 135:
    case 134:
    case 130:
    case 129:
    case 128:
      VAR_6 = 1;
      VAR_7 = 1;
      break;

    case 159:
    case 143:
    case 144:
      VAR_7 = 1;

    case 156:
    case 148:
    case 153:
    case 152:
    case 155:
    case 163:
      VAR_6 = FUNC_2 (VAR_2->elts[VAR_3 - 2].longconst);
      VAR_6 = 4 + FUNC_0 (VAR_6 + 1);
      break;

    case 167:
      VAR_6 = FUNC_2 (VAR_2->elts[VAR_3 - 2].longconst);
      VAR_6 = (VAR_6 + VAR_1 - 1) / VAR_1;
      VAR_6 = 4 + FUNC_0 (VAR_6);
      break;

    case 168:
      VAR_6 = 4;
      VAR_7 = FUNC_2 (VAR_2->elts[VAR_3 - 2].longconst);
      VAR_7 -= FUNC_2 (VAR_2->elts[VAR_3 - 3].longconst);
      VAR_7 += 1;
      break;

    case 142:
    case 141:
    case 140:
      VAR_7 = 3;
      break;


    case 169:
      VAR_6 = 3;
      VAR_7 = 1 + FUNC_2 (VAR_2->elts[VAR_3 - 2].longconst);
      break;

    case 171:
      VAR_6 = 3;
      VAR_7 = 2;
      break;


    case 147:
    case 151:
      VAR_6 = 2;
      break;

    default:
      VAR_7 = 1 + (VAR_8 < (int) VAR_0);
    }

  *VAR_4 = VAR_6;
  *VAR_5 = VAR_7;
}
