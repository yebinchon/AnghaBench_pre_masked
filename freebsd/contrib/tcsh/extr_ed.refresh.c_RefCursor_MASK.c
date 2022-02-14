
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;





 int FUNC_4 (int) ;


 int FUNC_5 (int,int,int ) ;
 int* VAR_5 ;
 int FUNC_6 () ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;

void
FUNC_9(void)
{
    Char *VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12;


    VAR_10 = 0;
    VAR_12 = 0;
    VAR_11 = VAR_7;

    for (VAR_8 = VAR_5; VAR_8 != ((void*)0) && *VAR_8; ) {
 if (*VAR_8 & VAR_3) {
     VAR_8++;
     continue;
 }
 VAR_9 = FUNC_5(*VAR_8 & VAR_0, VAR_8 == VAR_5, 0);
 VAR_8++;
 switch(VAR_9) {
     case 129:
  VAR_10 = 0;
  VAR_12++;
  break;
     case 128:
  while (++VAR_10 & 07)
      ;
  break;
     case 134:
  VAR_10 += 2;
  break;
     case 133:
  VAR_10 += 4;
  break;
     case 132:
     case 131:
     case 130:
  VAR_10 += 3 + 2 * FUNC_4(VAR_9);
  break;
     default:
  VAR_10 += VAR_9;
 }
 if (VAR_10 >= VAR_11) {
     VAR_10 -= VAR_11;
     VAR_12++;
 }
    }

    for (VAR_8 = VAR_2; VAR_8 < VAR_1;) {
 VAR_9 = FUNC_5(*VAR_8 & VAR_0, VAR_8 == VAR_2, 0);
 VAR_8++;
 switch(VAR_9) {
     case 129:
  VAR_10 = 0;
  VAR_12++;
  break;
     case 128:
  while (++VAR_10 & 07)
      ;
  break;
     case 134:
  VAR_10 += 2;
  break;
     case 133:
  VAR_10 += 4;
  break;
     case 132:
     case 131:
     case 130:
  VAR_10 += 3 + 2 * FUNC_4(VAR_9);
  break;
     default:
  VAR_10 += VAR_9;
 }
 if (VAR_10 >= VAR_11) {
     VAR_10 -= VAR_11;
     VAR_12++;
 }
    }


    FUNC_3(VAR_12);
    FUNC_2(VAR_10);
    if (FUNC_7(VAR_6) && VAR_4) {
 FUNC_1();
 FUNC_0();
 FUNC_6();
    }
    FUNC_8();
}
