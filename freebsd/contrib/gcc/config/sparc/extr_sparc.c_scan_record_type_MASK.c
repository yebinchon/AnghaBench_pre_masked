
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_6 (tree VAR_4, int *VAR_5, int *VAR_6, int *VAR_7)
{
  tree VAR_8;

  for (VAR_8 = FUNC_5 (VAR_4); VAR_8; VAR_8 = FUNC_2 (VAR_8))
    {
      if (FUNC_3 (VAR_8) == VAR_0)
 {
   if (FUNC_3 (FUNC_4 (VAR_8)) == VAR_1)
     FUNC_6 (FUNC_4 (VAR_8), VAR_5, VAR_6, 0);
   else if ((FUNC_1 (FUNC_4 (VAR_8))
     || FUNC_3 (FUNC_4 (VAR_8)) == VAR_3)
    && VAR_2)
     *VAR_6 = 1;
   else
     *VAR_5 = 1;

   if (VAR_7 && FUNC_0 (VAR_8))
     *VAR_7 = 1;
 }
    }
}
