
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;
 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct type* FUNC_1 (struct type*) ;




 int FUNC_2 (struct value*) ;
 struct type* FUNC_3 (int ) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 int FUNC_6 (struct type*) ;

__attribute__((used)) static int
FUNC_7 (enum exp_opcode VAR_2, struct value *VAR_3[])
{
  struct type *VAR_4 = FUNC_3 (FUNC_2 (VAR_3[0]));
  struct type *VAR_5 =
    (VAR_3[1] == ((void*)0)) ? ((void*)0) : FUNC_3 (FUNC_2 (VAR_3[1]));

  switch (VAR_2)
    {
    default:
      return 0;

    case 148:
    case 132:
    case 135:
    case 143:
      return (!(FUNC_5 (VAR_4) && FUNC_5 (VAR_5)));

    case 133:
    case 136:
    case 147:
    case 146:
    case 145:
      return (!(FUNC_4 (VAR_4) && FUNC_4 (VAR_5)));

    case 142:
    case 134:
    case 137:
    case 139:
    case 138:
    case 140:
      return (!(FUNC_6 (VAR_4) && FUNC_6 (VAR_5)));

    case 144:
      return ((FUNC_0 (VAR_4) != VAR_0 &&
        (FUNC_0 (VAR_4) != VAR_1 ||
  FUNC_0 (FUNC_1 (VAR_4))
  != VAR_0))
       || (FUNC_0 (VAR_5) != VAR_0 &&
    (FUNC_0 (VAR_5) != VAR_1 ||
     FUNC_0 (FUNC_1 (VAR_5)) != VAR_0)));

    case 141:
      return (!(FUNC_5 (VAR_4) && FUNC_4 (VAR_5)));

    case 129:
    case 128:
    case 130:
    case 131:
      return (!FUNC_5 (VAR_4));

    }
}
