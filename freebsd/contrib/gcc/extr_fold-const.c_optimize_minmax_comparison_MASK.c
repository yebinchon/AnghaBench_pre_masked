
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;





 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int const VAR_4 ;
 int FUNC_4 (int const,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static tree
FUNC_10 (enum tree_code VAR_7, tree VAR_8, tree VAR_9, tree VAR_10)
{
  tree VAR_11 = VAR_9;
  enum tree_code VAR_12;
  tree VAR_13 = VAR_10;
  tree VAR_14;
  int VAR_15, VAR_16;
  tree VAR_17;

  FUNC_0 (VAR_11);

  VAR_12 = FUNC_1 (VAR_11);
  VAR_14 = FUNC_3 (VAR_11, 1);
  VAR_15 = FUNC_8 (VAR_14, VAR_13);
  VAR_16 = FUNC_9 (VAR_14, VAR_13);
  VAR_17 = FUNC_3 (VAR_11, 0);


  if ((VAR_12 != VAR_2 && VAR_12 != VAR_1)
      || FUNC_1 (VAR_13) != VAR_0
      || FUNC_2 (VAR_13)
      || FUNC_1 (VAR_14) != VAR_0
      || FUNC_2 (VAR_14))
    return VAR_3;




  switch (VAR_7)
    {
    case 128: case 129: case 130:
      {
 tree VAR_18 = FUNC_10 (FUNC_5 (VAR_7, 0),
       VAR_8, VAR_9, VAR_10);
 if (VAR_18)
   return FUNC_6 (VAR_18);
 return VAR_3;
      }

    case 132:
      return
 FUNC_4 (VAR_4, VAR_8,
       FUNC_10
       (133, VAR_8, VAR_11, VAR_13),
       FUNC_10
       (131, VAR_8, VAR_11, VAR_13));

    case 133:
      if (VAR_12 == VAR_1 && VAR_15)

 return FUNC_4 (130, VAR_8, VAR_17, VAR_13);

      else if (VAR_12 == VAR_1 && VAR_16)

 return FUNC_4 (133, VAR_8, VAR_17, VAR_13);

      else if (VAR_12 == VAR_1)

 return FUNC_7 (VAR_8, VAR_6, VAR_17);

      else if (VAR_15)

 return FUNC_4 (132, VAR_8, VAR_17, VAR_13);

      else if (VAR_16)

 return FUNC_7 (VAR_8, VAR_6, VAR_17);

      else

 return FUNC_4 (133, VAR_8, VAR_17, VAR_13);

    case 131:
      if (VAR_12 == VAR_1 && (VAR_15 || VAR_16))


 return FUNC_4 (131, VAR_8, VAR_17, VAR_13);

      else if (VAR_12 == VAR_1)

 return FUNC_7 (VAR_8, VAR_5, VAR_17);

      else if (VAR_12 == VAR_2 && (VAR_15 || VAR_16))


 return FUNC_7 (VAR_8, VAR_6, VAR_17);

      else

 return FUNC_4 (131, VAR_8, VAR_17, VAR_13);

    default:
      return VAR_3;
    }
}
