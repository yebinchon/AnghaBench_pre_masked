
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
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_11 (tree VAR_2)
{
  if (FUNC_9 (VAR_2))
    return 1;
  if (!FUNC_10 (VAR_2))
    return 0;

  switch (FUNC_1 (VAR_2))
    {
    case 128:
      {
 unsigned int VAR_3 = FUNC_5 (FUNC_4 (VAR_2)) * 2;
 tree VAR_4;

 if (FUNC_6 (VAR_1, VAR_3+0))
   return 1;
 if (FUNC_6 (VAR_1, VAR_3+1))
   return 0;

 for (VAR_4 = FUNC_3 (VAR_2); VAR_4 ; VAR_4 = FUNC_0 (VAR_4))
   if (FUNC_1 (VAR_4) == VAR_0)
     {
       if (!FUNC_11 (FUNC_2 (VAR_4)))
  {
    FUNC_7 (VAR_1, VAR_3+1);
    return 0;
  }
     }

 FUNC_7 (VAR_1, VAR_3+0);
 return 1;
      }

    case 130:
      return FUNC_11 (FUNC_2 (VAR_2));

    case 129:
      return 1;

    default:
      FUNC_8 ();
    }
}
