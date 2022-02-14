
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char** FUNC_2 (char*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,char**) ;
 int * FUNC_5 (int,char const*) ;
 int FUNC_6 () ;
 char* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int*) ;
 int FUNC_9 (char*,char*,char const*) ;
 int FUNC_10 (char const*) ;

FILE *
FUNC_11(const char *VAR_3, const char *VAR_4)
{
    FILE *VAR_5 = 0;
    int VAR_6[2];
    char *VAR_7;
    char **VAR_8;

    if ((*VAR_4 == 'r' || *VAR_4 != 'w') && FUNC_8(VAR_6) == 0) {
 switch (FUNC_6()) {
 case -1:
     (void) FUNC_1(VAR_6[0]);
     (void) FUNC_1(VAR_6[1]);
     break;
 case 0:
     if (*VAR_4 == 'r') {
  if (VAR_6[1] != VAR_2) {
      (void) FUNC_3(VAR_6[1], VAR_2);
      (void) FUNC_1(VAR_6[1]);
  }
  (void) FUNC_3(VAR_2, VAR_0);
  (void) FUNC_1(VAR_6[0]);
     } else {
  if (VAR_6[0] != VAR_1) {
      (void) FUNC_3(VAR_6[0], VAR_1);
      (void) FUNC_1(VAR_6[0]);
  }
  (void) FUNC_1(VAR_6[1]);
  (void) FUNC_1(VAR_0);
     }





     if ((VAR_7 = FUNC_7(10 + FUNC_10(VAR_3))) != 0) {
  FUNC_9(VAR_7, "sh -c \"%s\"", VAR_3);
  VAR_8 = FUNC_2(VAR_7);
  FUNC_4("sh", VAR_8);
     }
     FUNC_0(127);

 default:
     if (*VAR_4 == 'r') {
  VAR_5 = FUNC_5(VAR_6[0], VAR_4);
  (void) FUNC_1(VAR_6[1]);
     } else {
  VAR_5 = FUNC_5(VAR_6[1], VAR_4);
  (void) FUNC_1(VAR_6[0]);
     }
     break;
 }
    }

    return VAR_5;
}
