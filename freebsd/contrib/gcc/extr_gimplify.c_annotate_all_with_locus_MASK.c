
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int tree ;
typedef int location_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void
FUNC_7 (tree *VAR_2, location_t VAR_3)
{
  tree_stmt_iterator VAR_4;

  if (!*VAR_2)
    return;

  for (VAR_4 = FUNC_5 (*VAR_2); !FUNC_3 (VAR_4); FUNC_4 (&VAR_4))
    {
      tree VAR_5 = FUNC_6 (VAR_4);



      FUNC_2 (FUNC_0 (VAR_5) != VAR_1
    && FUNC_0 (VAR_5) != VAR_0);

      FUNC_1 (VAR_5, VAR_3);
    }
}
