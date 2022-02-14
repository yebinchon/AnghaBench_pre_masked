
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 int * FUNC_3 (struct type*) ;

int
FUNC_4 (struct type *VAR_1, struct type *VAR_2)
{
  if (VAR_2 == ((void*)0))
    return 1;
  else if (VAR_1 == ((void*)0))
    return 0;
  else if (FUNC_0 (VAR_2) == VAR_0)
    return 1;
  else if (FUNC_0 (VAR_1) == VAR_0)
    return 0;
  else if (FUNC_2 (VAR_1))
    return 1;
  else if (FUNC_1 (VAR_1)
    && !FUNC_1 (VAR_2))
    return 1;
  else if (FUNC_3 (VAR_1) != ((void*)0)
    && FUNC_3 (VAR_2) == ((void*)0))
    return 1;
  return 0;
}
