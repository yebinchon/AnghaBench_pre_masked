
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;





tree
FUNC_4 (tree VAR_1)
{
  if (!FUNC_3 (VAR_1))
    return VAR_0;

  for (;;)
    switch (FUNC_1 (FUNC_0 (VAR_1)))
      {
      case 128:
 VAR_1 = FUNC_2 (VAR_1, 0);
 break;

      case 131:
      case 130:
 if (!FUNC_3 (FUNC_2 (VAR_1, 1)))
   VAR_1 = FUNC_2 (VAR_1, 0);
 else if (!FUNC_3 (FUNC_2 (VAR_1, 0)))
   VAR_1 = FUNC_2 (VAR_1, 1);
 else
   return VAR_1;
 break;

      case 129:
 switch (FUNC_0 (VAR_1))
   {
   case 133:
     if (FUNC_3 (FUNC_2 (VAR_1, 1)))
       return VAR_1;
     VAR_1 = FUNC_2 (VAR_1, 0);
     break;

   case 132:
     if (FUNC_3 (FUNC_2 (VAR_1, 1))
  || FUNC_3 (FUNC_2 (VAR_1, 2)))
       return VAR_1;
     VAR_1 = FUNC_2 (VAR_1, 0);
     break;

   default:
     return VAR_1;
   }
 break;

      default:
 return VAR_1;
      }
}
