
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;



 int VAR_0 ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;

 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static tree
FUNC_12 (tree VAR_9, tree VAR_10)
{
  enum tree_code VAR_11 = VAR_5;
  tree VAR_12, VAR_13, VAR_14;

  if (VAR_9 == VAR_10)
    return VAR_7;

  switch (FUNC_2 (VAR_9))
    {
    case 134:
      VAR_12 = FUNC_12 (FUNC_3 (VAR_9, 0), VAR_10);
      if (VAR_12 == VAR_6)
 return VAR_12;

      VAR_14 = FUNC_3 (VAR_9, 1);
      VAR_13 = FUNC_8 (VAR_5, FUNC_1 (VAR_14),
   FUNC_9 (FUNC_11 (FUNC_0 (VAR_14), 1)
      / VAR_0));
      break;

    case 129:
    case 130:
    case 133:
    case 128:
    case 131:
      return FUNC_12 (FUNC_3 (VAR_9, 0), VAR_10);

    case 132:
      VAR_12 = FUNC_12 (FUNC_3 (VAR_9, 0), VAR_10);
      if (VAR_12 == VAR_6)
 return VAR_12;

      VAR_13 = FUNC_5 (FUNC_4 (VAR_9));
      break;

    case 135:
      VAR_12 = FUNC_12 (FUNC_3 (VAR_9, 0), VAR_10);
      if (VAR_12 == VAR_6)
 return VAR_12;

      VAR_14 = FUNC_3 (VAR_9, 1);
      if (FUNC_2 (VAR_14) == VAR_1 && FUNC_10 (VAR_14) < 0)
 {
   VAR_11 = VAR_2;
   VAR_14 = FUNC_6 (VAR_4, FUNC_4 (VAR_14), VAR_14);
 }
      VAR_14 = FUNC_7 (VAR_8, VAR_14);
      VAR_13 = FUNC_8 (VAR_3, FUNC_5 (FUNC_4 (VAR_9)), VAR_14);
      break;

    default:
      return VAR_6;
    }

  return FUNC_8 (VAR_11, VAR_12, VAR_13);
}
