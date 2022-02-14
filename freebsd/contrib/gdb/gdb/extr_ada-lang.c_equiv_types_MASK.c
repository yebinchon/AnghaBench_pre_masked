
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 (struct type*) ;

__attribute__((used)) static int
FUNC_3 (struct type *VAR_2, struct type *VAR_3)
{
  if (VAR_2 == VAR_3)
    return 1;
  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)
      || FUNC_1 (VAR_2) != FUNC_1 (VAR_3))
    return 0;
  if ((FUNC_1 (VAR_2) == VAR_1
       || FUNC_1 (VAR_2) == VAR_0)
      && FUNC_2 (VAR_2) != ((void*)0) && FUNC_2 (VAR_3) != ((void*)0)
      && FUNC_0 (FUNC_2 (VAR_2), FUNC_2 (VAR_3)))
    return 1;

  return 0;
}
