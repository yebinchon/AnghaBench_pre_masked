
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;



 int FUNC_0 (int ) ;



 int VAR_0 ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

 int FUNC_13 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

tree
FUNC_14 (tree VAR_3, bool VAR_4)
{
  tree VAR_5;



  if (VAR_1)
    return VAR_0;

  switch (FUNC_2 (VAR_3))
    {
      tree VAR_6;

    case 130:
      if (FUNC_10 (VAR_3))
 goto ptrmem;

    case 128:
      if (!FUNC_0 (VAR_3))
 return VAR_0;

    case 135:
      if (FUNC_6 (VAR_3))
 return VAR_3;
      VAR_6 = FUNC_13 (FUNC_8 (VAR_3));
      if (VAR_6 && (!VAR_4 || !FUNC_3 (VAR_6)))
 return VAR_3;
      return VAR_0;

    case 136:
    case 131:
    case 129:
      return FUNC_14 (FUNC_4 (VAR_3), VAR_4);

    case 132:
    ptrmem:
      VAR_5 = FUNC_14 (FUNC_12 (VAR_3),
       VAR_4);
      if (VAR_5)
 return VAR_5;
      return FUNC_14 (FUNC_11 (VAR_3), VAR_4);

    case 133:
      VAR_5 = FUNC_14 (FUNC_9 (VAR_3), VAR_4);
      if (VAR_5)
 return VAR_5;

    case 134:
      {
 tree VAR_7;
 for (VAR_7 = FUNC_7 (VAR_3);
      VAR_7 && VAR_7 != VAR_2;
      VAR_7 = FUNC_1 (VAR_7))
   {
     VAR_5 = FUNC_14 (FUNC_5 (VAR_7), VAR_4);
     if (VAR_5)
       return VAR_5;
   }
 return FUNC_14 (FUNC_4 (VAR_3), VAR_4);
      }

    default:
      return VAR_0;
    }
}
