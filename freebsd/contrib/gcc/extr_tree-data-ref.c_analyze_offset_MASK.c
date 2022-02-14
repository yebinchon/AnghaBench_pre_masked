
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
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_5, tree *VAR_6, tree *VAR_7)
{
  tree VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  enum tree_code VAR_14 = FUNC_0 (VAR_5);

  *VAR_6 = VAR_3;
  *VAR_7 = VAR_3;


  if (VAR_14 != VAR_4 && VAR_14 != VAR_1)
    {
      if (FUNC_0 (VAR_5) == VAR_0)
 *VAR_7 = VAR_5;
      else
 *VAR_6 = VAR_5;
      return 1;
    }

  VAR_8 = FUNC_1 (VAR_5, 0);
  VAR_9 = FUNC_1 (VAR_5, 1);


  if (!FUNC_5 (VAR_8, &VAR_12, &VAR_10)
      || !FUNC_5 (VAR_9, &VAR_13, &VAR_11))
    return 0;



  if (VAR_10 && VAR_11)
    return 0;
  *VAR_7 = VAR_10 ? VAR_10 : VAR_11;
  if (VAR_14 == VAR_1 && VAR_11)
    *VAR_7 = FUNC_3 (VAR_2, FUNC_2 (*VAR_7), *VAR_7);

  if (VAR_12 && VAR_13)
    *VAR_6 =
      FUNC_4 (VAR_14, FUNC_2 (VAR_12), VAR_12, VAR_13);
  else
    {
      *VAR_6 = VAR_12 ? VAR_12 : VAR_13;
      if (VAR_14 == VAR_1 && VAR_13)
        *VAR_6 =
           FUNC_3 (VAR_2, FUNC_2 (*VAR_6), *VAR_6);
    }
  return 1;
}
