
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (struct type*) ;

struct type *
FUNC_5 (struct type *VAR_1)
{




  int VAR_2;

  if (FUNC_0 (VAR_1) != VAR_0)
    return ((void*)0);

  for (VAR_2 = 0; VAR_2 < FUNC_3 (VAR_1); VAR_2++)
    if (!FUNC_2 (VAR_1, VAR_2) &&
 FUNC_4 (FUNC_1 (VAR_1, VAR_2)))
      return FUNC_1 (VAR_1, VAR_2);

  return ((void*)0);
}
