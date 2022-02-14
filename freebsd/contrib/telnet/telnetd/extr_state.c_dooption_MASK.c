
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int const,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int const) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int const) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;

void
FUNC_18(int VAR_8)
{
 int VAR_9 = 0;





 FUNC_0(VAR_2, FUNC_8("td: recv do", VAR_8));

 if (VAR_7[VAR_8]) {
  VAR_7[VAR_8]--;
  if (VAR_7[VAR_8] && FUNC_5(VAR_8))
   VAR_7[VAR_8]--;
 }
 if ((VAR_7[VAR_8] == 0) && (FUNC_6(VAR_8))) {
  switch (VAR_8) {
  case 141:







   {
    FUNC_4();
    FUNC_17(1);
    FUNC_15();
   }
   VAR_9++;
   break;

  case 142:
   FUNC_4();
   FUNC_16(1);
   FUNC_15();
   VAR_9++;
   break;

  case 133:
   VAR_6 = 0;

   VAR_9++;
   break;

  case 132:
   VAR_9++;
   break;

  case 131:




   FUNC_9(VAR_8, 0);
   FUNC_14(VAR_8);
   FUNC_12(VAR_8);
   return;

  case 137:






   FUNC_13(137);
   FUNC_9(137, 0);
   FUNC_11(137);
   (void)FUNC_7();
   FUNC_1(0);

   break;






  case 138:
  case 129:
  case 136:
  case 130:
  case 139:
  case 128:



  case 134:
  default:
   break;
  }
  if (VAR_9) {
   FUNC_13(VAR_8);
   FUNC_9(VAR_8, 0);
  } else {
   VAR_7[VAR_8]++;
   FUNC_10(VAR_8, 0);
  }
 }
 FUNC_11(VAR_8);

}
