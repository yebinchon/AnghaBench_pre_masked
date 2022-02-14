
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3 (int VAR_0, struct type *VAR_1)
{
  int VAR_2 = FUNC_0 (VAR_1);






  if (VAR_2 > 4 && VAR_2 % 4 == 0)
    {
      int VAR_3 = VAR_0;

      while (VAR_2 > 4)
 {
   VAR_3 = FUNC_2 (VAR_3);
   VAR_2 -= 4;
 }

      if (VAR_3 != -1)
 return 1;
    }

  return FUNC_1 (VAR_0);
}
