
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static bool
FUNC_6 (tree VAR_2, tree VAR_3)
{
  tree VAR_4 = FUNC_0 (VAR_3);
  tree VAR_5;

  if (FUNC_4 (VAR_3))
    return 1;

  if (FUNC_3 (VAR_2))
    return 0;

  VAR_5 = FUNC_2 (VAR_0,
    VAR_1, VAR_3, FUNC_1 (VAR_4, 0));
  VAR_5 = FUNC_5 (VAR_2, VAR_5);

  return FUNC_3 (VAR_5);
}
