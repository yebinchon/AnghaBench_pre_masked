
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static bool
FUNC_4 (tree VAR_3, tree VAR_4)
{
  if (FUNC_2 (VAR_3) == FUNC_2 (VAR_4))
    return 1;
  if (FUNC_0 (VAR_3) == VAR_1 && FUNC_0 (VAR_4) == VAR_1)
    return FUNC_3 (VAR_3, VAR_4);

  if (FUNC_0 (VAR_3) == VAR_2 && FUNC_0 (VAR_4) == VAR_2)
    return FUNC_4 (FUNC_1 (VAR_3), FUNC_1 (VAR_4));


  if (FUNC_0 (VAR_3) == VAR_0
      && FUNC_0 (VAR_4) == VAR_0)
    return FUNC_4 (FUNC_1 (VAR_3), FUNC_1 (VAR_4));

  return 0;
}
