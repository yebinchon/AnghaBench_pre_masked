
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 struct type* FUNC_1 (struct type*,int) ;
 scalar_t__ FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

int
FUNC_5 (struct type *VAR_0, struct type *VAR_1)
{
  int VAR_2;

  FUNC_0 (VAR_0);
  FUNC_0 (VAR_1);

  if (VAR_0 == VAR_1)
    return 1;
  if (FUNC_2 (VAR_0) && FUNC_2 (VAR_1) &&
      !FUNC_4 (FUNC_2 (VAR_0), FUNC_2 (VAR_1)))
    return 1;

  for (VAR_2 = 0; VAR_2 < FUNC_3 (VAR_1); VAR_2++)
    if (FUNC_5 (VAR_0, FUNC_1 (VAR_1, VAR_2)))
      return 1;

  return 0;
}
