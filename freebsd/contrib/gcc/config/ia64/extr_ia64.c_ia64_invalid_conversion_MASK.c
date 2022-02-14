
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 char const* FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const char *
FUNC_2 (tree VAR_2, tree VAR_3)
{

  if (FUNC_1 (VAR_2) == VAR_0
      && FUNC_1 (VAR_3) != VAR_0
      && FUNC_1 (VAR_3) != VAR_1)
    return FUNC_0("invalid conversion from %<__fpreg%>");
  if (FUNC_1 (VAR_3) == VAR_0
      && FUNC_1 (VAR_2) != VAR_0)
    return FUNC_0("invalid conversion to %<__fpreg%>");
  return ((void*)0);
}
