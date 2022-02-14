
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int show ;
typedef int TERMTYPE ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char FUNC_5 (int ) ;
 long FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(TERMTYPE *VAR_8)
{
    char VAR_9[80];

    if (FUNC_1(VAR_1) &&
 FUNC_1(VAR_2) &&
 FUNC_1(VAR_3) &&
 FUNC_1(VAR_4) &&
 FUNC_1(VAR_5)) {
 char VAR_10[VAR_0 + 1];
 long VAR_11[VAR_0];
 int VAR_12 = 0;
 int VAR_13, VAR_14, VAR_15;
 long VAR_16;
 long VAR_17;

 VAR_10[0] = FUNC_5(VAR_1);
 VAR_10[1] = FUNC_5(VAR_2);
 VAR_10[2] = FUNC_5(VAR_3);
 VAR_10[3] = FUNC_5(VAR_4);
 VAR_10[4] = FUNC_5(VAR_5);
 VAR_10[5] = '\0';


 FUNC_4(FUNC_8(VAR_10) <= VAR_0);
 if (!FUNC_7(VAR_10, "qsrpn"))
     return;

 VAR_11[0] = FUNC_6(VAR_1);
 VAR_11[1] = FUNC_6(VAR_2);
 VAR_11[2] = FUNC_6(VAR_3);
 VAR_11[3] = FUNC_6(VAR_4);
 VAR_11[4] = FUNC_6(VAR_5);


 for (VAR_13 = 0; VAR_13 < VAR_0; ++VAR_13) {
     if (VAR_11[VAR_13] < 0) {
  return;
     }
 }


 for (VAR_13 = 1; VAR_13 < VAR_0; ++VAR_13) {
     if (VAR_11[VAR_13] > VAR_11[VAR_13 - 1]) {
  ++VAR_12;
     }
 }
 if (VAR_12 != (VAR_0 - 1)) {
     VAR_9[0] = '\0';

     for (VAR_13 = 0, VAR_16 = -1; VAR_13 < VAR_0; ++VAR_13) {
  for (VAR_14 = 0, VAR_15 = -1, VAR_17 = 100; VAR_14 < 5; ++VAR_14) {
      if (VAR_11[VAR_14] > VAR_16 &&
   VAR_11[VAR_14] < VAR_17) {
   VAR_17 = VAR_11[VAR_14];
   VAR_15 = VAR_14;
      }
  }
  VAR_16 = VAR_17;
  FUNC_4(FUNC_8(VAR_9) < (VAR_0 * 4));
  switch (VAR_15) {
  case 0:
      FUNC_2(VAR_9, " ka1", sizeof(VAR_9));
      break;
  case 1:
      FUNC_2(VAR_9, " ka3", sizeof(VAR_9));
      break;
  case 2:
      FUNC_2(VAR_9, " kb2", sizeof(VAR_9));
      break;
  case 3:
      FUNC_2(VAR_9, " kc1", sizeof(VAR_9));
      break;
  case 4:
      FUNC_2(VAR_9, " kc3", sizeof(VAR_9));
      break;
  }
     }

     FUNC_3("vt100 keypad order inconsistent: %s", VAR_9);
 }

    } else if (FUNC_1(VAR_1) ||
        FUNC_1(VAR_2) ||
        FUNC_1(VAR_3) ||
        FUNC_1(VAR_4) ||
        FUNC_1(VAR_5)) {
 VAR_9[0] = '\0';
 if (FUNC_6(VAR_1) >= 0)
     FUNC_2(VAR_9, " ka1", sizeof(VAR_9));
 if (FUNC_6(VAR_2) >= 0)
     FUNC_2(VAR_9, " ka3", sizeof(VAR_9));
 if (FUNC_6(VAR_3) >= 0)
     FUNC_2(VAR_9, " kb2", sizeof(VAR_9));
 if (FUNC_6(VAR_4) >= 0)
     FUNC_2(VAR_9, " kc1", sizeof(VAR_9));
 if (FUNC_6(VAR_5) >= 0)
     FUNC_2(VAR_9, " kc3", sizeof(VAR_9));
 if (*VAR_9 != '\0')
     FUNC_3("vt100 keypad map incomplete:%s", VAR_9);
    }





    FUNC_0(VAR_7, VAR_6);
}
