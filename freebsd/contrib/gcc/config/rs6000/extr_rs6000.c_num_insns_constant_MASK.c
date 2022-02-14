
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;
typedef int HOST_WIDE_INT ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,long*) ;
 int FUNC_6 (int ,long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;

int
FUNC_10 (rtx VAR_5, enum machine_mode VAR_6)
{
  HOST_WIDE_INT VAR_7, VAR_8;

  switch (FUNC_2 (VAR_5))
    {
    case 128:






 return FUNC_9 (FUNC_3 (VAR_5));

      case 129:
 if (VAR_6 == VAR_1)
   {
     long VAR_9;
     REAL_VALUE_TYPE VAR_10;

     FUNC_4 (VAR_10, VAR_5);
     FUNC_6 (VAR_10, VAR_9);
     return FUNC_9 ((HOST_WIDE_INT) VAR_9);
   }

 if (VAR_6 == VAR_3 || VAR_6 == VAR_0)
   {
     VAR_8 = FUNC_0 (VAR_5);
     VAR_7 = FUNC_1 (VAR_5);
   }
 else
   {
     long VAR_11[2];
     REAL_VALUE_TYPE VAR_12;

     FUNC_4 (VAR_12, VAR_5);
     FUNC_5 (VAR_12, VAR_11);
     VAR_8 = VAR_11[VAR_4 == 0];
     VAR_7 = VAR_11[VAR_4 != 0];
   }

 if (VAR_2)
   return (FUNC_9 (VAR_7)
    + FUNC_9 (VAR_8));
 else
   {
     if ((VAR_8 == 0 && VAR_7 >= 0)
  || (VAR_8 == -1 && VAR_7 < 0))
       return FUNC_9 (VAR_7);

     else if (FUNC_8 (VAR_5, VAR_6))
       return 2;

     else if (VAR_7 == 0)
       return FUNC_9 (VAR_8) + 1;

     else
       return (FUNC_9 (VAR_8)
        + FUNC_9 (VAR_7) + 1);
   }

    default:
      FUNC_7 ();
    }
}
