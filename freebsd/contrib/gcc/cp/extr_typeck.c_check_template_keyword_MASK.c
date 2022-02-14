
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,scalar_t__) ;

void
FUNC_10 (tree VAR_3)
{
  if (FUNC_7 (VAR_3) != VAR_1
      && FUNC_7 (VAR_3) != VAR_2)
    {
      if (!FUNC_8 (VAR_3))
 FUNC_9 ("%qD is not a template", VAR_3);
      else
 {
   tree VAR_4;
   VAR_4 = VAR_3;
   if (FUNC_1 (VAR_4))
     VAR_4 = FUNC_0 (VAR_4);
   while (VAR_4)
     {
       tree VAR_5 = FUNC_4 (VAR_4);
       if (FUNC_7 (VAR_5) == VAR_1
    || FUNC_7 (VAR_5) == VAR_2)
  break;
       if (FUNC_7 (VAR_5) == VAR_0
    && FUNC_3 (VAR_5)
    && FUNC_6 (FUNC_2 (VAR_5)))
  break;
       VAR_4 = FUNC_5 (VAR_4);
     }
   if (!VAR_4)
     FUNC_9 ("%qD is not a template", VAR_3);
 }
    }
}
