
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 struct type** FUNC_3 (struct type*) ;

int
FUNC_4 (struct type *VAR_1, struct type *VAR_2)
{
  struct type *VAR_3;
  int VAR_4, VAR_5;
  struct type *VAR_6;

  if ((FUNC_0 (VAR_2) != VAR_0) ||
      (FUNC_0 (VAR_1) != VAR_0))
    return -1;

  VAR_6 = FUNC_2 (VAR_2) ? FUNC_1 (VAR_2) : ((void*)0);

  VAR_5 = -1;
  VAR_4 = 0;
  VAR_3 = FUNC_3 (VAR_2)[0];
  while (VAR_3)
    {
      if (!VAR_6 || (FUNC_4 (VAR_3, VAR_6) < 0))
 VAR_5++;
      if (VAR_3 == VAR_1)
 break;
      VAR_3 = FUNC_3 (VAR_2)[++VAR_4];
    }

  return VAR_3 ? VAR_5 : -1;
}
