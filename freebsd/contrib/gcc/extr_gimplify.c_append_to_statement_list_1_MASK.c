
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4 (tree VAR_2, tree *VAR_3)
{
  tree VAR_4 = *VAR_3;
  tree_stmt_iterator VAR_5;

  if (!VAR_4)
    {
      if (VAR_2 && FUNC_0 (VAR_2) == VAR_0)
 {
   *VAR_3 = VAR_2;
   return;
 }
      *VAR_3 = VAR_4 = FUNC_1 ();
    }

  VAR_5 = FUNC_2 (VAR_4);
  FUNC_3 (&VAR_5, VAR_2, VAR_1);
}
