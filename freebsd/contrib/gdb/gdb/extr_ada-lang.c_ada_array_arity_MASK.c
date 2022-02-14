
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct type*) ;
 struct type* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct type* FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;

int
FUNC_6 (struct type *VAR_2)
{
  int VAR_3;

  if (VAR_2 == ((void*)0))
    return 0;

  VAR_2 = FUNC_4 (VAR_2);

  VAR_3 = 0;
  if (FUNC_0 (VAR_2) == VAR_1)
    return FUNC_3 (FUNC_5 (VAR_2));
  else
    while (FUNC_0 (VAR_2) == VAR_0)
      {
 VAR_3 += 1;
 VAR_2 = FUNC_2 (FUNC_1 (VAR_2));
      }

  return VAR_3;
}
