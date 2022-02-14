
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int * tree ;
typedef enum gimplify_status { ____Placeholder_gimplify_status } gimplify_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int *,int *) ;

__attribute__((used)) static enum gimplify_status
FUNC_11 (tree *VAR_4, tree *VAR_5)
{
  tree VAR_6 = FUNC_10 (*VAR_4, ((void*)0));

  tree_stmt_iterator VAR_7 = FUNC_7 (*VAR_4);

  while (!FUNC_4 (VAR_7))
    {
      tree VAR_8;

      FUNC_2 (FUNC_9 (VAR_7));

      VAR_8 = FUNC_8 (VAR_7);
      if (VAR_8 == ((void*)0))
 FUNC_3 (&VAR_7);
      else if (FUNC_0 (VAR_8) == VAR_2)
 {
   FUNC_5 (&VAR_7, VAR_8, VAR_3);
   FUNC_3 (&VAR_7);
 }
      else
 FUNC_6 (&VAR_7);
    }

  if (VAR_6)
    {
      FUNC_1 (*VAR_4, VAR_5);
      *VAR_4 = VAR_6;
      return VAR_1;
    }

  return VAR_0;
}
