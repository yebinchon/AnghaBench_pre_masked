
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct arg_lookup {int dummy; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;



 int FUNC_8 (struct arg_lookup*,int ) ;
 int FUNC_9 (struct arg_lookup*,int ) ;
 int FUNC_10 (struct arg_lookup*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_14 (struct arg_lookup *VAR_1, tree VAR_2)
{


  if (!VAR_2)
    return 0;

  if (FUNC_6 (VAR_2))
    {

      if (FUNC_14 (VAR_1, FUNC_5 (VAR_2)))
 return 1;
      return FUNC_14 (VAR_1, FUNC_7 (VAR_2));
    }
  else switch (FUNC_0 (VAR_2))
    {
    case 141:
      return 0;
    case 128:
    case 139:
    case 135:
    case 143:
    case 129:
    case 145:
      return 0;
    case 134:
      if (FUNC_4 (VAR_2))
 return FUNC_14 (VAR_1, FUNC_3 (VAR_2));
      return FUNC_9 (VAR_1, VAR_2);
    case 136:

    case 146:
    case 133:
    case 147:
      return FUNC_14 (VAR_1, FUNC_1 (VAR_2));
    case 130:
    case 142:
      return FUNC_10 (VAR_1, FUNC_11 (VAR_2));
    case 137:


    case 140:

      if (FUNC_8 (VAR_1, FUNC_2 (VAR_2)))
 return 1;

      return FUNC_14 (VAR_1, FUNC_1 (VAR_2));
    case 132:
    case 144:
      return 0;
    case 131:
      return 0;
    case 138:
      FUNC_12 (VAR_2 == VAR_0);
      return 0;
    default:
      FUNC_13 ();
    }
  return 0;
}
