
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int block_stmt_iterator ;
typedef int basic_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static bool
FUNC_6 (basic_block VAR_4)
{
  block_stmt_iterator VAR_5;


  VAR_5 = FUNC_4 (VAR_4);
  while (!FUNC_2 (VAR_5)
          && (FUNC_1 (FUNC_5 (VAR_5)) == VAR_2
              || FUNC_0 (FUNC_5 (VAR_5))))
    FUNC_3 (&VAR_5);


  if (FUNC_2 (VAR_5))
    return 1;


  return FUNC_5 (VAR_5)
  && (FUNC_1 (FUNC_5 (VAR_5)) == VAR_0
      || FUNC_1 (FUNC_5 (VAR_5)) == VAR_1
      || FUNC_1 (FUNC_5 (VAR_5)) == VAR_3);
}
