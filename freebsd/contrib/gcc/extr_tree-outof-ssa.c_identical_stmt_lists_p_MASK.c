
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int tree ;
typedef int edge ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static inline bool
FUNC_8 (edge VAR_1, edge VAR_2)
{
  tree VAR_3 = FUNC_0 (VAR_1);
  tree VAR_4 = FUNC_0 (VAR_2);
  tree_stmt_iterator VAR_5, VAR_6;

  FUNC_2 (FUNC_1 (VAR_3) == VAR_0);
  FUNC_2 (FUNC_1 (VAR_4) == VAR_0);

  for (VAR_5 = FUNC_6 (VAR_3), VAR_6 = FUNC_6 (VAR_4);
       !FUNC_4 (VAR_5) && !FUNC_4 (VAR_6);
       FUNC_5 (&VAR_5), FUNC_5 (&VAR_6))
    {
      if (!FUNC_3 (FUNC_7 (VAR_5), FUNC_7 (VAR_6)))
        break;
    }

  if (!FUNC_4 (VAR_5) || ! FUNC_4 (VAR_6))
    return 0;

  return 1;
}
