
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 unsigned int FUNC_0 (struct type*) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct type*) ;

__attribute__((used)) static int
FUNC_3 (struct type *VAR_0)
{
  unsigned VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1 > 8)
    return 1;


  return FUNC_2 (VAR_0) && !FUNC_1 (VAR_1);
}
