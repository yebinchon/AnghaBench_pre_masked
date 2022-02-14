
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int stmt_vec_info ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;



 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;


 int VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int VAR_3 ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static tree
FUNC_17 (tree VAR_4, tree VAR_5, tree *VAR_6)
{
  stmt_vec_info VAR_7 = FUNC_16 (VAR_4);
  tree VAR_8 = FUNC_3 (VAR_7);
  int VAR_9 = FUNC_0 (FUNC_7 (VAR_8));
  int VAR_10;
  enum tree_code VAR_11 = FUNC_4 (FUNC_5 (VAR_4, 1));
  tree VAR_12 = FUNC_6 (VAR_5);
  tree VAR_13;
  tree VAR_14, VAR_15 = VAR_1;
  bool VAR_16;
  int VAR_17;

  FUNC_12 (FUNC_1 (VAR_12) || FUNC_2 (VAR_12));

  switch (VAR_11)
  {
  case 128:
  case 132:
  case 129:
    if (FUNC_1 (VAR_12))
      VAR_13 = FUNC_9 (VAR_12, 0);
    else
      VAR_13 = FUNC_10 (VAR_12, VAR_3);
    VAR_10 = VAR_9 - 1;
    VAR_16 = 0;

    break;

  case 130:
  case 131:
    VAR_13 = VAR_5;
    VAR_10 = VAR_9;
    VAR_16 = 0;
    break;

  default:
    FUNC_13 ();
  }

  for (VAR_17 = VAR_10 - 1; VAR_17 >= 0; --VAR_17)
    VAR_15 = FUNC_14 (VAR_1, VAR_13, VAR_15);

  if (VAR_10 == VAR_9 - 1)
    {

      VAR_15 = FUNC_14 (VAR_1, VAR_5, VAR_15);
      VAR_10 += 1;
    }
  FUNC_12 (VAR_10 == VAR_9);

  if (FUNC_4 (VAR_5) == VAR_0 || FUNC_4 (VAR_5) == VAR_2)
    VAR_14 = FUNC_11 (VAR_8, VAR_15);
  else
    VAR_14 = FUNC_8 (VAR_8, VAR_15);

  if (!VAR_16)
    *VAR_6 = VAR_1;
  else
    *VAR_6 = VAR_5;

  return FUNC_15 (VAR_4, VAR_14);
}
