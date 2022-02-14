
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

 int VAR_1 ;

 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

tree
FUNC_6 (tree VAR_2)
{
  switch (FUNC_2 (VAR_2))
    {
    case 130:
      if (!FUNC_6 (FUNC_3 (VAR_2, 1)))
 return VAR_1;
      return FUNC_6 (FUNC_3 (VAR_2, 2));

    case 131:
      return FUNC_6 (FUNC_3 (VAR_2, 1));

    case 129:
    case 128:
      return FUNC_6 (FUNC_3 (VAR_2, 0));

    case 132:
      {
 tree VAR_3;

 VAR_3 = FUNC_3 (VAR_2, 1);
 if (FUNC_2 (VAR_3) != VAR_0 || !FUNC_1 (VAR_3))
   return VAR_1;
 if (FUNC_5
     (FUNC_4 (VAR_2), FUNC_0 (VAR_3)))
   return VAR_1;
 return FUNC_0 (VAR_3);
      }

    default:
      return VAR_1;
    }
}
