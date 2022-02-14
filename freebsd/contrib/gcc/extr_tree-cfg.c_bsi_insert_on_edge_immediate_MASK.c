
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int edge ;
typedef int block_stmt_iterator ;
typedef int * basic_block ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int *,int **) ;

basic_block
FUNC_5 (edge VAR_1, tree VAR_2)
{
  block_stmt_iterator VAR_3;
  basic_block VAR_4 = ((void*)0);

  FUNC_3 (!FUNC_0 (VAR_1));

  if (FUNC_4 (VAR_1, &VAR_3, &VAR_4))
    FUNC_1 (&VAR_3, VAR_2, VAR_0);
  else
    FUNC_2 (&VAR_3, VAR_2, VAR_0);

  return VAR_4;
}
