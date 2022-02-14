
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct type* FUNC_2 (struct type*) ;

int
FUNC_3 (struct type *VAR_2)
{
  if (VAR_2 == ((void*)0))
    return 0;
  FUNC_0 (VAR_2);
  return (FUNC_1 (VAR_2) == VAR_0
   || (FUNC_1 (VAR_2) == VAR_1
       && FUNC_1 (FUNC_2 (VAR_2)) == VAR_0));
}
