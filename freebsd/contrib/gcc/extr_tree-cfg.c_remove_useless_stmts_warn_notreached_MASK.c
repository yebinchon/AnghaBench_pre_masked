
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int tree ;
typedef int location_t ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;


 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,int *) ;

__attribute__((used)) static bool
FUNC_16 (tree VAR_0)
{
  if (FUNC_6 (VAR_0))
    {
      location_t VAR_1 = FUNC_7 (VAR_0);
      if (FUNC_8 (VAR_1) > 0)
 {
   FUNC_15 (0, "%Hwill never be executed", &VAR_1);
   return 1;
 }
    }

  switch (FUNC_9 (VAR_0))
    {
    case 130:
      {
 tree_stmt_iterator VAR_2;
 for (VAR_2 = FUNC_13 (VAR_0); !FUNC_11 (VAR_2); FUNC_12 (&VAR_2))
   if (FUNC_16 (FUNC_14 (VAR_2)))
     return 1;
      }
      break;

    case 132:
      if (FUNC_16 (FUNC_2 (VAR_0)))
 return 1;
      if (FUNC_16 (FUNC_4 (VAR_0)))
 return 1;
      if (FUNC_16 (FUNC_3 (VAR_0)))
 return 1;
      break;

    case 128:
    case 129:
      if (FUNC_16 (FUNC_10 (VAR_0, 0)))
 return 1;
      if (FUNC_16 (FUNC_10 (VAR_0, 1)))
 return 1;
      break;

    case 133:
      return FUNC_16 (FUNC_1 (VAR_0));
    case 131:
      return FUNC_16 (FUNC_5 (VAR_0));
    case 134:
      return FUNC_16 (FUNC_0 (VAR_0));

    default:

      break;
    }

  return 0;
}
