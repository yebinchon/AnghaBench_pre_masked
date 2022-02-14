
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*,char*,int) ;
 struct type* FUNC_6 (struct type*) ;

__attribute__((used)) static struct type *
FUNC_7 (struct type *VAR_1)
{
  struct type *VAR_2;

  VAR_1 = FUNC_3 (VAR_1);

  if (VAR_1 == ((void*)0))
    return ((void*)0);
  else if (FUNC_4 (VAR_1))
    {
      VAR_1 = FUNC_6 (VAR_1);
      if (VAR_1 == ((void*)0))
 return ((void*)0);
      VAR_2 = FUNC_5 (VAR_1, "BOUNDS", 1);
      if (VAR_2 != ((void*)0))
 return FUNC_2 (VAR_2);
    }
  else if (FUNC_0 (VAR_1) == VAR_0)
    {
      VAR_2 = FUNC_5 (VAR_1, "P_BOUNDS", 1);
      if (VAR_2 != ((void*)0))
 return FUNC_2 (FUNC_1 (FUNC_2 (VAR_2)));
    }
  return ((void*)0);
}
