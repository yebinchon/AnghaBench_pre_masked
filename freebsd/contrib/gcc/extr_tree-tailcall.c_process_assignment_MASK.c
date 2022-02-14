
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int block_stmt_iterator ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;


 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_8 (tree VAR_4, tree VAR_5, block_stmt_iterator VAR_6, tree *VAR_7,
      tree *VAR_8, tree *VAR_9)
{
  tree VAR_10, VAR_11, VAR_12;
  tree VAR_13 = FUNC_5 (VAR_4, 0);
  tree VAR_14 = FUNC_5 (VAR_4, 1);
  enum tree_code VAR_15 = FUNC_3 (VAR_14);
  tree VAR_16 = VAR_14;





  FUNC_2 (VAR_16);
  if (FUNC_3 (VAR_16) == VAR_0)
    {
      if (VAR_16 != *VAR_9)
 return 0;

      *VAR_9 = VAR_13;
      return 1;
    }

  if (FUNC_4 (VAR_15) != VAR_3)
    return 0;




  if (!VAR_2)
    if (FUNC_1 (FUNC_6 (FUNC_0 (VAR_1))))
      return 0;
  VAR_10 = FUNC_5 (VAR_14, 0);
  VAR_11 = FUNC_5 (VAR_14, 1);

  if (VAR_10 == *VAR_9
      && (VAR_12 = FUNC_7 (VAR_11, VAR_5, VAR_6)))
    ;
  else if (VAR_11 == *VAR_9
    && (VAR_12 = FUNC_7 (VAR_10, VAR_5, VAR_6)))
    ;
  else
    return 0;

  switch (VAR_15)
    {
    case 128:




      if (*VAR_8)
 return 0;
      *VAR_8 = VAR_12;
      *VAR_9 = VAR_13;
      return 1;

    case 129:



      if (*VAR_8 || *VAR_7)
 return 0;
      *VAR_7 = VAR_12;
      *VAR_9 = VAR_13;
      return 1;



    default:
      return 0;
    }
}
