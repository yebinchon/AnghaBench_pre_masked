
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;

 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;

void
FUNC_15(int VAR_9)
{





 FUNC_0(VAR_3, FUNC_7("td: recv dont", VAR_9));

 if (VAR_8[VAR_9]) {
  VAR_8[VAR_9]--;
  if (VAR_8[VAR_9] && FUNC_5(VAR_9))
   VAR_8[VAR_9]--;
 }
 if ((VAR_8[VAR_9] == 0) && (FUNC_6(VAR_9))) {
  switch (VAR_9) {
  case 130:
   FUNC_3();
   FUNC_13(0);
   FUNC_12();
   break;

  case 129:
   {
    FUNC_3();
    FUNC_14(0);
    FUNC_12();
   }
   break;

  case 128:
   FUNC_11(VAR_9);
   if (FUNC_4(VAR_9))
    FUNC_9(VAR_9, 0);
   FUNC_10(VAR_9);
   if (VAR_7 ^= 1)
    FUNC_8(VAR_9, 1);
   return;


  default:
   break;
  }

  FUNC_11(VAR_9);
  if (FUNC_4(VAR_9))
   FUNC_9(VAR_9, 0);
 }
 FUNC_10(VAR_9);

}
