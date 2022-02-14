
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (int,int,int) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int ** VAR_6 ;
 int FUNC_4 (int,int) ;
 int* VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_5(Char *VAR_11, int VAR_12, int VAR_13)
{
    int VAR_14, VAR_15, VAR_16, VAR_17;
    Char VAR_18, VAR_19;
    VAR_19 = *VAR_11 & ~VAR_2;
    VAR_18 = *VAR_11 & VAR_2;

    VAR_14 = FUNC_2(VAR_18, VAR_12, VAR_13);
    switch (VAR_14) {
 case 129:
     FUNC_4('\0', 0);
     VAR_9 = 0;
     VAR_10++;
     break;
 case 128:
     do {
  FUNC_4(' ', 1);
     } while ((VAR_9 & 07) != 0);
     break;
 case 135:
     FUNC_4('^' | VAR_19, 1);
     if (VAR_18 == FUNC_0('\177')) {
  FUNC_4('?' | VAR_19, 1);
     } else {




  FUNC_4(VAR_8[VAR_7[VAR_18]|0100] | VAR_19, 1);

     }
     break;
 case 134:
     FUNC_4('\\' | VAR_19, 1);
     FUNC_4((((VAR_18 >> 6) & 7) + '0') | VAR_19, 1);
     FUNC_4((((VAR_18 >> 3) & 7) + '0') | VAR_19, 1);
     FUNC_4(((VAR_18 & 7) + '0') | VAR_19, 1);
     break;
 case 133:
 case 132:
 case 131:
 case 130:
     FUNC_4('\\', 1);
     FUNC_4('U', 1);
     FUNC_4('+', 1);
     for (VAR_15 = 16 + 4 * (-VAR_14-5); VAR_15 >= 0; VAR_15 -= 4)
  FUNC_4("0123456789ABCDEF"[(VAR_18 >> VAR_15) & 15] | VAR_19, 1);
     break;
 case 0:
     VAR_16 = VAR_10;
     VAR_17 = VAR_9;
     for (;;) {
  VAR_17--;
  if (VAR_17 < 0) {
      VAR_16--;
      if (VAR_16 < 0)
   break;
      VAR_17 = FUNC_3(VAR_6[VAR_16]) - 1;
  }
  if (VAR_6[VAR_16][VAR_17] != VAR_3)
      break;
     }
     if (VAR_16 < 0) {
  FUNC_4('\\' | VAR_19, 1);
  FUNC_4((((VAR_18 >> 6) & 7) + '0') | VAR_19, 1);
  FUNC_4((((VAR_18 >> 3) & 7) + '0') | VAR_19, 1);
  FUNC_4(((VAR_18 & 7) + '0') | VAR_19, 1);
  break;
     }
     VAR_6[VAR_16][VAR_17] = FUNC_1(VAR_11, 1, VAR_6[VAR_16][VAR_17]);
     break;
 default:
     FUNC_4(*VAR_11, VAR_14);
     break;
    }
    return 1;
}
