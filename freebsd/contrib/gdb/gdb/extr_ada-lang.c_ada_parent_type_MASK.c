
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (struct type*,int) ;
 struct type* FUNC_5 (int ) ;

struct type *
FUNC_6 (struct type *VAR_1)
{
  int VAR_2;

  FUNC_0 (VAR_1);

  if (VAR_1 == ((void*)0) || FUNC_1 (VAR_1) != VAR_0)
    return ((void*)0);

  for (VAR_2 = 0; VAR_2 < FUNC_3 (VAR_1); VAR_2 += 1)
    if (FUNC_4 (VAR_1, VAR_2))
      return FUNC_5 (FUNC_2 (VAR_1, VAR_2));

  return ((void*)0);
}
