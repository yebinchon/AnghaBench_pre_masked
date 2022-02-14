
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct type*,int) ;
 scalar_t__ FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (struct type*) ;

int
FUNC_7 (struct type *VAR_1)
{
  FUNC_0 (VAR_1);
  if (VAR_1 != ((void*)0)
      && FUNC_1 (VAR_1) != VAR_0
      && (FUNC_6 (VAR_1) || FUNC_4 (VAR_1))
      && FUNC_2 (VAR_1) == 1)
    {
      struct type *VAR_2 = FUNC_3 (VAR_1, 1);

      return FUNC_5 (VAR_2);
    }
  else
    return 0;
}
