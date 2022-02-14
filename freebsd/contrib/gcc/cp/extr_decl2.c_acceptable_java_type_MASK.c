
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool
FUNC_7 (tree VAR_5)
{
  if (VAR_5 == VAR_4)
    return 0;

  if (FUNC_2 (VAR_5) == VAR_3 || FUNC_6 (VAR_5))
    return 1;
  if (FUNC_2 (VAR_5) == VAR_0 || FUNC_2 (VAR_5) == VAR_2)
    {
      VAR_5 = FUNC_3 (VAR_5);
      if (FUNC_2 (VAR_5) == VAR_1)
 {
   tree VAR_6; int VAR_7;
   if (! FUNC_6 (VAR_5))
     return 0;
   if (! FUNC_0 (VAR_5))
     return 1;
   VAR_6 = FUNC_1 (VAR_5);
   VAR_7 = FUNC_5 (VAR_6);
   while (--VAR_7 >= 0)
     {
       VAR_5 = FUNC_4 (VAR_6, VAR_7);
       if (FUNC_2 (VAR_5) == VAR_0)
  VAR_5 = FUNC_3 (VAR_5);
       if (! FUNC_6 (VAR_5))
  return 0;
     }
   return 1;
 }
    }
  return 0;
}
