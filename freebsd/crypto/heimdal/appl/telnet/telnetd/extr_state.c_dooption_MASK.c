
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int const,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int const) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int const) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;

void
FUNC_16(int VAR_3)
{
    int VAR_4 = 0;





    FUNC_0(VAR_0, FUNC_6("td: recv do", VAR_3));

    if (VAR_2[VAR_3]) {
 VAR_2[VAR_3]--;
 if (VAR_2[VAR_3] && FUNC_3(VAR_3))
     VAR_2[VAR_3]--;
    }
    if ((VAR_2[VAR_3] == 0) && (FUNC_4(VAR_3))) {
 switch (VAR_3) {
 case 141:
     {
  FUNC_2();
  FUNC_15(1);
  FUNC_13();
     }
 VAR_4++;
 break;

 case 142:
     FUNC_2();
     FUNC_14(1);
     FUNC_13();
     VAR_4++;
     break;

 case 133:
     VAR_1 = 0;
     VAR_4++;
     break;

 case 132:
     VAR_4++;
     break;

 case 131:




     FUNC_7(VAR_3, 0);
     FUNC_12(VAR_3);
     FUNC_10(VAR_3);
     return;

 case 137:






     FUNC_11(137);
     FUNC_7(137, 0);
     FUNC_9(137);
     FUNC_5();
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
 if (VAR_4) {
     FUNC_11(VAR_3);
     FUNC_7(VAR_3, 0);
 } else {
     VAR_2[VAR_3]++;
     FUNC_8(VAR_3, 0);
 }
    }
    FUNC_9(VAR_3);

}
