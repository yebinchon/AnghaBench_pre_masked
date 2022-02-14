
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static bool
FUNC_7 (tree VAR_1, bool VAR_2 (tree))
{
  tree VAR_3;
  tree VAR_4;

  FUNC_6 (FUNC_1 (VAR_1) == VAR_0);

  if (!FUNC_3 (FUNC_2 (VAR_1, 0)))
    return 1;

  VAR_3 = FUNC_2 (VAR_1, 0);
  VAR_4 = FUNC_2 (VAR_1, 1);
  if (FUNC_0 (VAR_4)
      && FUNC_4 (VAR_3)
      && !VAR_2 (VAR_4))
    return 0;
  if (FUNC_5 (VAR_3))
    return 1;

  return 0;
}
