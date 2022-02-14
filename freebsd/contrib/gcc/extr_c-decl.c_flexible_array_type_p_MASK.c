
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;


__attribute__((used)) static bool
FUNC_7 (tree VAR_2)
{
  tree VAR_3;
  switch (FUNC_1 (VAR_2))
    {
    case 129:
      VAR_3 = FUNC_4 (VAR_2);
      if (VAR_3 == VAR_1)
 return 0;
      while (FUNC_0 (VAR_3) != VAR_1)
 VAR_3 = FUNC_0 (VAR_3);
      if (FUNC_1 (FUNC_2 (VAR_3)) == VAR_0
   && FUNC_6 (FUNC_2 (VAR_3)) == VAR_1
   && FUNC_3 (FUNC_2 (VAR_3)) != VAR_1
   && FUNC_5 (FUNC_3 (FUNC_2 (VAR_3))) == VAR_1)
 return 1;
      return 0;
    case 128:
      for (VAR_3 = FUNC_4 (VAR_2); VAR_3 != VAR_1; VAR_3 = FUNC_0 (VAR_3))
 {
   if (FUNC_7 (FUNC_2 (VAR_3)))
     return 1;
 }
      return 0;
    default:
    return 0;
  }
}
