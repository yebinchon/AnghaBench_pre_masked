
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_1 (struct type *VAR_2, struct type *VAR_3)
{
  struct type *VAR_4;

  if (VAR_2 == ((void*)0))
    return 1;






  if (VAR_4 == ((void*)0))
    return 1;




  if (FUNC_0 (VAR_4) == VAR_0)
    return VAR_3 == ((void*)0) || VAR_4 == VAR_3;
  else if (VAR_3 == ((void*)0))
    return FUNC_0 (VAR_4) != VAR_1;
  else
    return FUNC_0 (VAR_4) == FUNC_0 (VAR_3);
}
