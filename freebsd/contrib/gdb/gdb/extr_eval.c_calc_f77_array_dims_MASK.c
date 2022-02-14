
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_1 (struct type*) ;
 int FUNC_2 (char*) ;

int
FUNC_3 (struct type *VAR_1)
{
  int VAR_2 = 1;
  struct type *VAR_3;

  if ((FUNC_0 (VAR_1) != VAR_0))
    FUNC_2 ("Can't get dimensions for a non-array type");

  VAR_3 = VAR_1;

  while ((VAR_3 = FUNC_1 (VAR_3)))
    {
      if (FUNC_0 (VAR_3) == VAR_0)
 ++VAR_2;
    }
  return VAR_2;
}
