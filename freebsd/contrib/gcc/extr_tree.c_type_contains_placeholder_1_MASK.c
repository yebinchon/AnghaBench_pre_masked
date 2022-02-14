
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;





 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 int const VAR_0 ;
 int FUNC_3 (int ) ;
 int const FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;



 int FUNC_12 () ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_14 (tree VAR_1)
{


  if (FUNC_0 (FUNC_10 (VAR_1))
      || FUNC_0 (FUNC_11 (VAR_1))
      || (FUNC_5 (VAR_1) != 0
   && FUNC_13 (FUNC_5 (VAR_1))))
    return 1;



  switch (FUNC_4 (VAR_1))
    {
    case 128:
    case 141:
    case 140:
    case 142:
    case 135:
    case 136:
    case 131:
    case 137:
    case 139:
    case 129:
      return 0;

    case 138:
    case 133:

      return (FUNC_0 (FUNC_9 (VAR_1))
       || FUNC_0 (FUNC_8 (VAR_1)));

    case 143:


      return FUNC_13 (FUNC_6 (VAR_1));

    case 132:
    case 130:
    case 134:
      {
 tree VAR_2;

 for (VAR_2 = FUNC_7 (VAR_1); VAR_2; VAR_2 = FUNC_3 (VAR_2))
   if (FUNC_4 (VAR_2) == VAR_0
       && (FUNC_0 (FUNC_1 (VAR_2))
    || (FUNC_4 (VAR_1) == 134
        && FUNC_0 (FUNC_2 (VAR_2)))
    || FUNC_13 (FUNC_5 (VAR_2))))
     return 1;

 return 0;
      }

    default:
      FUNC_12 ();
    }
}
