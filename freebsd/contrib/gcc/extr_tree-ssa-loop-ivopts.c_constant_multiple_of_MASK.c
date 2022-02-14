
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int double_int ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int ,unsigned int) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static bool
FUNC_13 (tree VAR_2, tree VAR_3, double_int *VAR_4)
{
  tree VAR_5;
  enum tree_code VAR_6;
  double_int VAR_7, VAR_8, VAR_9;
  unsigned VAR_10 = FUNC_4 (FUNC_3 (VAR_2));

  FUNC_0 (VAR_2);
  FUNC_0 (VAR_3);

  if (FUNC_11 (VAR_2, VAR_3, 0))
    {
      *VAR_4 = VAR_1;
      return 1;
    }

  VAR_6 = FUNC_1 (VAR_2);
  switch (VAR_6)
    {
    case 129:
      VAR_5 = FUNC_2 (VAR_2, 1);
      if (FUNC_1 (VAR_5) != 131)
 return 0;

      if (!FUNC_13 (FUNC_2 (VAR_2, 0), VAR_3, &VAR_7))
 return 0;

      *VAR_4 = FUNC_9 (FUNC_6 (VAR_7, FUNC_12 (VAR_5)),
         VAR_10);
      return 1;

    case 128:
    case 130:
      if (!FUNC_13 (FUNC_2 (VAR_2, 0), VAR_3, &VAR_8)
   || !FUNC_13 (FUNC_2 (VAR_2, 1), VAR_3, &VAR_9))
 return 0;

      if (VAR_6 == 130)
 VAR_9 = FUNC_7 (VAR_9);
      *VAR_4 = FUNC_9 (FUNC_5 (VAR_8, VAR_9), VAR_10);
      return 1;

    case 131:
      if (FUNC_1 (VAR_3) != 131)
 return 0;

      VAR_8 = FUNC_9 (FUNC_12 (VAR_3), VAR_10);
      VAR_9 = FUNC_9 (FUNC_12 (VAR_2), VAR_10);
      if (FUNC_10 (VAR_9))
 return 0;
      *VAR_4 = FUNC_9 (FUNC_8 (VAR_8, VAR_9, VAR_0, &VAR_7),
         VAR_10);
      return FUNC_10 (VAR_7);

    default:
      return 0;
    }
}
