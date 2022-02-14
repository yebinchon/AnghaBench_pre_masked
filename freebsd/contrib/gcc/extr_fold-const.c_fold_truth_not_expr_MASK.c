
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;



 int const VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;

 int const FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;






 int FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int const,int ,int ) ;
 int FUNC_9 (int const,int ,int ,int ) ;
 int FUNC_10 (int const,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ VAR_8 ;

tree
FUNC_17 (tree VAR_9)
{
  tree VAR_10 = FUNC_5 (VAR_9);
  enum tree_code VAR_11 = FUNC_2 (VAR_9);





  if (FUNC_3 (VAR_11) == VAR_8)
    {
      tree VAR_12 = FUNC_5 (FUNC_4 (VAR_9, 0));
      if (FUNC_0 (VAR_12)
   && VAR_7
   && VAR_11 != VAR_5 && VAR_11 != VAR_6
   && VAR_11 != VAR_3 && VAR_11 != VAR_1)
 return VAR_4;
      else
 {
   VAR_11 = FUNC_15 (VAR_11,
      FUNC_1 (FUNC_6 (VAR_12)));
   if (VAR_11 == VAR_2)
     return VAR_4;
   else
     return FUNC_9 (VAR_11, VAR_10,
      FUNC_4 (VAR_9, 0), FUNC_4 (VAR_9, 1));
 }
    }

  switch (VAR_11)
    {
    case 137:
      return FUNC_12 (FUNC_14 (VAR_9), VAR_10);

    case 132:
      return FUNC_9 (129, VAR_10,
       FUNC_16 (FUNC_4 (VAR_9, 0)),
       FUNC_16 (FUNC_4 (VAR_9, 1)));

    case 129:
      return FUNC_9 (132, VAR_10,
       FUNC_16 (FUNC_4 (VAR_9, 0)),
       FUNC_16 (FUNC_4 (VAR_9, 1)));

    case 128:





      if (FUNC_2 (FUNC_4 (VAR_9, 1)) == 131)
 return FUNC_9 (128, VAR_10, FUNC_4 (VAR_9, 0),
         FUNC_4 (FUNC_4 (VAR_9, 1), 0));
      else
 return FUNC_9 (128, VAR_10,
         FUNC_16 (FUNC_4 (VAR_9, 0)),
         FUNC_4 (VAR_9, 1));

    case 133:
      return FUNC_9 (130, VAR_10,
       FUNC_16 (FUNC_4 (VAR_9, 0)),
       FUNC_16 (FUNC_4 (VAR_9, 1)));

    case 130:
      return FUNC_9 (133, VAR_10,
       FUNC_16 (FUNC_4 (VAR_9, 0)),
       FUNC_16 (FUNC_4 (VAR_9, 1)));

    case 131:
      return FUNC_4 (VAR_9, 0);

    case 140:
      {
 tree VAR_13 = FUNC_4 (VAR_9, 1);
 tree VAR_14 = FUNC_4 (VAR_9, 2);



 return FUNC_10 (140, VAR_10, FUNC_4 (VAR_9, 0),
         FUNC_7 (FUNC_5 (VAR_13))
         ? VAR_13 : FUNC_16 (VAR_13),
         FUNC_7 (FUNC_5 (VAR_14))
         ? VAR_14 : FUNC_16 (VAR_14));
      }

    case 141:
      return FUNC_9 (141, VAR_10, FUNC_4 (VAR_9, 0),
       FUNC_16 (FUNC_4 (VAR_9, 1)));

    case 136:
      return FUNC_16 (FUNC_4 (VAR_9, 0));

    case 135:
      if (FUNC_2 (FUNC_5 (VAR_9)) == VAR_0)
 return FUNC_8 (131, VAR_10, VAR_9);

    case 139:
    case 138:
      return FUNC_8 (FUNC_2 (VAR_9), VAR_10,
       FUNC_16 (FUNC_4 (VAR_9, 0)));

    case 143:
      if (!FUNC_13 (FUNC_4 (VAR_9, 1)))
 break;
      return FUNC_9 (VAR_1, VAR_10, VAR_9,
       FUNC_11 (VAR_10, 0));

    case 134:
      return FUNC_8 (131, VAR_10, VAR_9);

    case 142:
      return FUNC_8 (142, VAR_10,
       FUNC_16 (FUNC_4 (VAR_9, 0)));

    default:
      break;
    }

  return VAR_4;
}
