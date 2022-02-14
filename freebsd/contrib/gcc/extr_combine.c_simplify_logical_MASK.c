
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;



 int const VAR_0 ;
 int const FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

 int FUNC_4 (int ,int) ;
 int const VAR_2 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,int ,int ) ;

__attribute__((used)) static rtx
FUNC_8 (rtx VAR_3)
{
  enum machine_mode VAR_4 = FUNC_1 (VAR_3);
  rtx VAR_5 = FUNC_4 (VAR_3, 0);
  rtx VAR_6 = FUNC_4 (VAR_3, 1);

  switch (FUNC_0 (VAR_3))
    {
    case 129:



      if (FUNC_0 (VAR_6) == VAR_0
   && (FUNC_2 (VAR_4) <= VAR_1
       || FUNC_3 (VAR_6) > 0))
 {
   VAR_3 = FUNC_7 (VAR_3, VAR_4, VAR_5, FUNC_3 (VAR_6));
   if (FUNC_0 (VAR_3) != 129)
     return VAR_3;

   VAR_5 = FUNC_4 (VAR_3, 0);
   VAR_6 = FUNC_4 (VAR_3, 1);
 }




      if (FUNC_0 (VAR_5) == 128 || FUNC_0 (VAR_5) == VAR_2)
 {
   rtx VAR_7 = FUNC_5 (VAR_3, 0);
   if (VAR_7)
     return VAR_7;
 }
      if (FUNC_0 (VAR_6) == 128 || FUNC_0 (VAR_6) == VAR_2)
 {
   rtx VAR_8 = FUNC_5 (VAR_3, 1);
   if (VAR_8)
     return VAR_8;
 }
      break;

    case 128:



      if (FUNC_0 (VAR_5) == 129)
 {
   rtx VAR_9 = FUNC_5 (VAR_3, 0);
   if (VAR_9)
     return VAR_9;
 }

      if (FUNC_0 (VAR_6) == 129)
 {
   rtx VAR_10 = FUNC_5 (VAR_3, 1);
   if (VAR_10)
     return VAR_10;
 }
      break;

    default:
      FUNC_6 ();
    }

  return VAR_3;
}
