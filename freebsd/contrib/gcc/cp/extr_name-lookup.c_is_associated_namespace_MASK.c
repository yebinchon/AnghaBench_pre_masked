
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;

bool
FUNC_5 (tree VAR_1, tree VAR_2)
{
  tree VAR_3 = VAR_0;
  tree VAR_4 = VAR_0;
  tree VAR_5;
  while (1)
    {
      if (VAR_2 == VAR_1)
 return 1;
      VAR_3 = FUNC_4 (VAR_2, VAR_0, VAR_3);
      for (VAR_5 = FUNC_0 (VAR_2); VAR_5; VAR_5 = FUNC_1 (VAR_5))
 if (!FUNC_3 (FUNC_2 (VAR_5), VAR_3))
   VAR_4 = FUNC_4 (FUNC_2 (VAR_5), VAR_0, VAR_4);
      if (VAR_4)
 {
   VAR_2 = FUNC_2 (VAR_4);
   VAR_4 = FUNC_1 (VAR_4);
 }
      else
 return 0;
    }
}
