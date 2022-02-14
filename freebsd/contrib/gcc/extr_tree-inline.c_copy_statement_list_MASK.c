
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int tree ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (tree *VAR_1)
{
  tree_stmt_iterator VAR_2, VAR_3;
  tree VAR_4;

  VAR_4 = FUNC_0 ();
  VAR_3 = FUNC_4 (VAR_4);
  VAR_2 = FUNC_4 (*VAR_1);
  *VAR_1 = VAR_4;

  for (; !FUNC_1 (VAR_2); FUNC_3 (&VAR_2))
    FUNC_2 (&VAR_3, FUNC_5 (VAR_2), VAR_0);
}
