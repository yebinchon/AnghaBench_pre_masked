
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;



 int VAR_0 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;


__attribute__((used)) static int
FUNC_4 (tree VAR_1)
{
  switch (FUNC_1 (VAR_1))
    {
    case 132:
    case 129:


    case 133:
      return 1;

    case 130:
    case 128:
    case 131:
      {
 tree VAR_2;

 for (VAR_2 = FUNC_3 (VAR_1); VAR_2; VAR_2 = FUNC_0 (VAR_2))
   if (FUNC_1 (VAR_2) == VAR_0
       && FUNC_4 (FUNC_2 (VAR_2)))
     return 1;
 return 0;
      }

    case 134:

      return FUNC_4 (FUNC_2 (VAR_1));

    default:
      return 0;
    }
}
