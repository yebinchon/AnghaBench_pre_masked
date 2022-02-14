
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4 (tree VAR_0,
   tree VAR_1)
{
  if ((FUNC_2 (VAR_0)
       && FUNC_3 (VAR_1))
      || (FUNC_2 (VAR_1)
   && FUNC_3 (VAR_0)))
    return 1;

  if (FUNC_3 (VAR_0)
      && FUNC_3 (VAR_1))
    {
      switch (FUNC_1 (VAR_0))
 {
 case 128:
   switch (FUNC_1 (VAR_1))
     {
     case 128:
       if (FUNC_0 (VAR_0) != FUNC_0 (VAR_1))
  return 0;

     default:
       return 1;
     }

 default:
   return 1;
 }
    }

  return 0;
}
