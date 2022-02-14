
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct type* FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*) ;

struct type *
FUNC_6 (struct type *VAR_2, int VAR_3)
{
  VAR_2 = FUNC_4 (VAR_2);

  if (FUNC_0 (VAR_2) == VAR_1)
    {
      int VAR_4;
      struct type *VAR_5;

      VAR_5 = FUNC_5 (VAR_2);

      VAR_4 = FUNC_2 (VAR_2);
      if (VAR_4 == 0)
 return ((void*)0);


      if (VAR_3 >= 0 && VAR_4 > VAR_3)
 VAR_4 = VAR_3;
      VAR_5 = FUNC_1 (VAR_5);
      while (VAR_4 > 0 && VAR_5 != ((void*)0))
 {
   VAR_5 = FUNC_3 (FUNC_1 (VAR_5));
   VAR_4 -= 1;
 }
      return VAR_5;
    }
  else if (FUNC_0 (VAR_2) == VAR_0)
    {
      while (VAR_3 != 0 && FUNC_0 (VAR_2) == VAR_0)
 {
   VAR_2 = FUNC_1 (VAR_2);
   VAR_3 -= 1;
 }
      return VAR_2;
    }

  return ((void*)0);
}
