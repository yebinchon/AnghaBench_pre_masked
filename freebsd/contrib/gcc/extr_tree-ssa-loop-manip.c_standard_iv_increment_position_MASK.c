
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int dummy; } ;
typedef int block_stmt_iterator ;
typedef int basic_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct loop*) ;
 int FUNC_3 (struct loop*) ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5 (struct loop *VAR_1, block_stmt_iterator *VAR_2,
    bool *VAR_3)
{
  basic_block VAR_4 = FUNC_3 (VAR_1), VAR_5 = FUNC_2 (VAR_1);
  tree VAR_6 = FUNC_4 (VAR_5);

  if (!VAR_4
      || (VAR_6 && FUNC_0 (VAR_6) != VAR_0))
    {
      *VAR_2 = FUNC_1 (VAR_5);
      *VAR_3 = 1;
    }
  else
    {
      *VAR_2 = FUNC_1 (VAR_4);
      *VAR_3 = 0;
    }
}
