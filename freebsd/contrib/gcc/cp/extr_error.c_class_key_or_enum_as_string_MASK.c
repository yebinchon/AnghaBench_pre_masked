
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;

const char *
FUNC_3 (tree VAR_2)
{
  if (FUNC_1 (VAR_2) == VAR_0)
    return "enum";
  else if (FUNC_1 (VAR_2) == VAR_1)
    return "union";
  else if (FUNC_2 (VAR_2) && FUNC_0 (VAR_2))
    return "class";
  else
    return "struct";
}
