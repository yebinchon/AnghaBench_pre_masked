
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*,int,int ) ;
 int VAR_5 ;


 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 scalar_t__ VAR_10 ;

void
FUNC_9(int VAR_11)
{

    Char *VAR_12, VAR_13;
    int VAR_14;

    if (VAR_1 != VAR_4) {
 FUNC_4();
 return;
    }
    if (VAR_10 != 0 && (VAR_7 - VAR_2 - VAR_10 < 3)) {
 FUNC_4();
 return;
    }
    VAR_12 = VAR_1 - VAR_11;
    VAR_13 = *VAR_12 & VAR_0;
    VAR_14 = FUNC_2(VAR_13, VAR_12 == VAR_3, 0);
    switch(VAR_14) {
 case 129:
     FUNC_3('^', 1);
     if (VAR_13 == FUNC_0('\177')) {
  FUNC_3('?', 1);
  break;
     }




     FUNC_3(VAR_9[VAR_8[VAR_13]|0100], 1);

     break;
 case 128:
     FUNC_3('\\', 1);
     FUNC_3(((VAR_13 >> 6) & 7) + '0', 1);
     FUNC_3(((VAR_13 >> 3) & 7) + '0', 1);
     FUNC_3((VAR_13 & 7) + '0', 1);
     break;
 case 1:
     if (FUNC_7(VAR_6) && VAR_5)
  FUNC_5();
     if (VAR_11 > 1)
  FUNC_3(FUNC_1(VAR_12, VAR_11, 0), 1);
     else
  FUNC_3(*VAR_12, 1);
     if (FUNC_7(VAR_6) && VAR_5)
  FUNC_6();
     break;
 default:
     FUNC_4();
     return;
    }
    FUNC_8();
}
