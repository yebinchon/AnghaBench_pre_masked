
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int block_stmt_iterator ;
typedef scalar_t__ basic_block ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_1, tree VAR_2)
{
  basic_block VAR_3 = FUNC_0 (VAR_1), VAR_4 = FUNC_0 (VAR_2);

  if (!VAR_3
      || VAR_1 == VAR_2)
    return 1;

  if (VAR_3 == VAR_4)
    {
      block_stmt_iterator VAR_5;

      for (VAR_5 = FUNC_2 (VAR_3); FUNC_3 (VAR_5) != VAR_2; FUNC_1 (&VAR_5))
 if (FUNC_3 (VAR_5) == VAR_1)
   return 1;

      return 0;
    }

  return FUNC_4 (VAR_0, VAR_4, VAR_3);
}
