
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_7 (tree VAR_0, tree_stmt_iterator VAR_1)
{
  tree VAR_2 = FUNC_1 (VAR_0);

  for (; !FUNC_3 (VAR_1); FUNC_4 (&VAR_1))
    {
      tree VAR_3 = FUNC_5 (VAR_1);
      if (FUNC_1 (VAR_3) && FUNC_2 (VAR_2, FUNC_1 (VAR_3)))
 {
   FUNC_6 (0, "%Hexception of type %qT will be caught",
     FUNC_0 (VAR_3), FUNC_1 (VAR_3));
   FUNC_6 (0, "%H   by earlier handler for %qT",
     FUNC_0 (VAR_0), VAR_2);
   break;
 }
    }
}
