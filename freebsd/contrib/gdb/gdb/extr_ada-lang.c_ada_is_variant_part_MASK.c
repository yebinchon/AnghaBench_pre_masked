
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_1 (struct type*,int) ;
 struct type* FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct type*,int) ;

int
FUNC_4 (struct type *VAR_1, int VAR_2)
{
  struct type *VAR_3 = FUNC_1 (VAR_1, VAR_2);
  return (FUNC_0 (VAR_3) == VAR_0
   || (FUNC_3 (VAR_1, VAR_2)
       && FUNC_0 (FUNC_2 (VAR_3)) ==
       VAR_0));
}
