
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int * tree ;
typedef int block_stmt_iterator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,int **,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static tree
FUNC_16 (block_stmt_iterator *VAR_1, tree VAR_2)
{
  tree_stmt_iterator VAR_3;
  tree VAR_4 = FUNC_5 (*VAR_1);
  tree VAR_5, VAR_6 = ((void*)0);

  FUNC_10 ();
  VAR_5 = FUNC_7 (VAR_2, &VAR_6, ((void*)0));
  FUNC_9 (((void*)0));

  if (FUNC_0 (VAR_4))
    FUNC_2 (&VAR_6, FUNC_1 (VAR_4));


  for (VAR_3 = FUNC_13 (VAR_6); !FUNC_11 (VAR_3); FUNC_12 (&VAR_3))
    {
      tree VAR_7 = FUNC_14 (VAR_3);
      FUNC_6 (FUNC_15 (VAR_3));
      FUNC_3 (VAR_1, VAR_7, VAR_0);
      FUNC_8 (FUNC_5 (*VAR_1));
      FUNC_4 (VAR_1);
    }

  return VAR_5;
}
