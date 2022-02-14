
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int block_stmt_iterator ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;

extern block_stmt_iterator
FUNC_6 (tree VAR_0)
{
  block_stmt_iterator VAR_1;

  for (VAR_1 = FUNC_3 (FUNC_0 (VAR_0)); !FUNC_1 (VAR_1); FUNC_2 (&VAR_1))
    if (FUNC_4 (VAR_1) == VAR_0)
      return VAR_1;

  FUNC_5 ();
}
