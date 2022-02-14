
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;

__attribute__((used)) static tree
FUNC_9 (tree VAR_6)
{
  enum tree_code VAR_7 = FUNC_1 (VAR_6);
  tree VAR_8, VAR_9, VAR_10, VAR_11;




  if (FUNC_1 (VAR_6) == VAR_3
      || FUNC_1 (VAR_6) == VAR_0)
    return FUNC_9 (FUNC_2 (VAR_6, 0));

  if (!FUNC_0 (FUNC_3 (VAR_6)))
    return VAR_4;

  switch (VAR_7)
    {
    case 130:
      return VAR_4;

    case 131:
      VAR_9 = FUNC_2 (VAR_6, 0);
      VAR_8 = FUNC_8 (VAR_9);

      if (!VAR_8)
 return VAR_6;

      if (FUNC_1 (VAR_8) == VAR_1)
 return FUNC_9 (FUNC_2 (VAR_8, 0));

      return FUNC_7 (VAR_5,
             FUNC_4 (VAR_8));

    case 128:
    case 129:
      VAR_10 = FUNC_9 (FUNC_2 (VAR_6, 0));
      VAR_11 = FUNC_9 (FUNC_2 (VAR_6, 1));

      if (!VAR_11)
 return VAR_10;

      if (!VAR_10)
 return (VAR_7 == 128
  ? VAR_11
  : FUNC_5 (VAR_2, VAR_5, VAR_11));

      return FUNC_6 (VAR_7, VAR_5, VAR_10, VAR_11);

    default:
      return FUNC_7 (VAR_5, VAR_6);
    }
}
