
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;




 int FUNC_0 (int ) ;


 int const FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

 int VAR_0 ;
 int const VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,char) ;
 int FUNC_11 (int ) ;

bool
FUNC_12 (rtx VAR_4)
{
  switch (FUNC_1 (VAR_4))
    {
    case 131:
    case 129:
      return 1;

    case 132:
      if (FUNC_2 (VAR_4) == VAR_3)
 return 1;
      return FUNC_0 (VAR_4);

    case 133:
    case 128:



      if (FUNC_11 (VAR_4) == 0)
 {
   HOST_WIDE_INT VAR_5 = 0;
   rtx VAR_6 = VAR_4;

   if (FUNC_1 (VAR_6) == 133
       && FUNC_1 (FUNC_6 (VAR_6, 0)) == VAR_1
       && FUNC_1 (FUNC_6 (FUNC_6 (VAR_6, 0), 1)) == 131)
     {
       VAR_5 = FUNC_5 (FUNC_6 (FUNC_6 (VAR_6, 0), 1));
       VAR_6 = FUNC_6 (FUNC_6 (VAR_6, 0), 0);
     }

          if (FUNC_8 (VAR_6, FUNC_2 (VAR_6))
              || FUNC_9 (VAR_6, FUNC_2 (VAR_6)))
            return 1;
   if (FUNC_7 (VAR_6, FUNC_2 (VAR_6)))
     return (VAR_5 & 0x3fff) == 0;
   return 0;
 }
      return 0;

    case 130:
      {
 enum machine_mode VAR_7 = FUNC_2 (VAR_4);

 if (VAR_7 == VAR_2)
   return FUNC_10 (VAR_4, 'Y');

 return (FUNC_3 (VAR_7) == VAR_0
  && FUNC_4 (VAR_7) <= 8);
      }

    default:
      return 0;
    }
}
