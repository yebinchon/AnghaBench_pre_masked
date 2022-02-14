
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;
struct TYPE_2__ {int (* resolve_overloaded_builtin ) (int ,int ) ;} ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 TYPE_1__ VAR_3 ;

tree
FUNC_8 (tree VAR_4, tree VAR_5)
{
  enum built_in_function VAR_6 = FUNC_1 (VAR_4);
  switch (FUNC_0 (VAR_4))
    {
    case 132:
      break;
    case 134:
      if (VAR_3.resolve_overloaded_builtin)
 return VAR_3.resolve_overloaded_builtin (VAR_4, VAR_5);
      else
 return VAR_0;
    default:
      return VAR_0;
    }


  switch (VAR_6)
    {
    case 142:
    case 138:
    case 139:
    case 141:
    case 137:
    case 140:
    case 145:
    case 130:
    case 131:
    case 144:
    case 128:
    case 133:
    case 143:
    case 129:
    case 135:
    case 136:
      {
 int VAR_7 = FUNC_7 (VAR_4, VAR_5);
 tree VAR_8, VAR_9;

 if (VAR_7 == 0)
   return VAR_2;

 VAR_8 = VAR_1[VAR_6 + FUNC_3 (VAR_7) + 1];
 if (!FUNC_5 (VAR_4, VAR_8, VAR_5))
   return VAR_2;

 VAR_9 = FUNC_2 (VAR_8, VAR_5);
 if (VAR_6 != 143
     && VAR_6 != 136)
   VAR_9 = FUNC_6 (VAR_5, VAR_9);

 return VAR_9;
      }

    default:
      return VAR_0;
    }
}
