
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int VAR_0 ;



 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;

void
FUNC_13(int VAR_3)
{





    FUNC_0(VAR_0, FUNC_5("td: recv dont", VAR_3));

    if (VAR_2[VAR_3]) {
 VAR_2[VAR_3]--;
 if (VAR_2[VAR_3] && FUNC_3(VAR_3))
     VAR_2[VAR_3]--;
    }
    if ((VAR_2[VAR_3] == 0) && (FUNC_4(VAR_3))) {
 switch (VAR_3) {
 case 130:
     FUNC_1();
     FUNC_11(0);
     FUNC_10();
     break;

 case 129:
     {
  FUNC_1();
  FUNC_12(0);
  FUNC_10();
     }
 break;

 case 128:
     FUNC_9(VAR_3);
     if (FUNC_2(VAR_3))
  FUNC_7(VAR_3, 0);
     FUNC_8(VAR_3);
     if (VAR_1 ^= 1)
  FUNC_6(VAR_3, 1);
     return;

 default:
     break;
 }

 FUNC_9(VAR_3);
 if (FUNC_2(VAR_3))
     FUNC_7(VAR_3, 0);
    }
    FUNC_8(VAR_3);

}
