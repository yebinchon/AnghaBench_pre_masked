
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;

__attribute__((used)) static int
FUNC_2 (struct type *VAR_0, struct type *VAR_1)
{
  return (FUNC_0 (VAR_0) > FUNC_0 (VAR_1)
   || (FUNC_0 (VAR_0) == FUNC_0 (VAR_1)
       && FUNC_1 (VAR_0)
       && !FUNC_1 (VAR_1)));
}
