
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_10 (tree VAR_2)
{
  if (FUNC_9 (VAR_2))
    return 1;
  if (FUNC_2 (VAR_2))
    {
      tree VAR_3;
      tree VAR_4;
      tree VAR_5;
      int VAR_6;

      for (VAR_4 = FUNC_7 (VAR_2), VAR_6 = 0;
    FUNC_0 (VAR_4, VAR_6, VAR_5); ++VAR_6)
 if (FUNC_10 (FUNC_1 (VAR_5)))
   return 1;
      for (VAR_3 = FUNC_8 (VAR_2); VAR_3; VAR_3 = FUNC_4 (VAR_3))
 if (FUNC_5 (VAR_3) == VAR_1
     && !FUNC_3 (VAR_3)
     && FUNC_9 (FUNC_6 (VAR_3)))
   return 1;
    }
  else if (FUNC_5 (VAR_2) == VAR_0)
    return FUNC_10 (FUNC_6 (VAR_2));
  return 0;
}
