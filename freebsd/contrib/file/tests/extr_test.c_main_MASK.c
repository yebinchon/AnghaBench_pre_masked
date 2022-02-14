
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct magic_set {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct magic_set*) ;
 char* FUNC_4 (struct magic_set*) ;
 char* FUNC_5 (struct magic_set*,char*) ;
 int FUNC_6 (struct magic_set*,int *) ;
 struct magic_set* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char*,char const*) ;
 char* FUNC_10 (int *,size_t*) ;
 int VAR_1 ;
 scalar_t__ FUNC_11 (char const*,char*) ;

int
FUNC_12(int VAR_2, char **VAR_3)
{
 struct magic_set *VAR_4;
 const char *VAR_5;
 char *VAR_6;
 size_t VAR_7;
 int VAR_8;
 FILE *VAR_9;

 VAR_4 = FUNC_7(VAR_0);
 if (VAR_4 == ((void*)0)) {
  (void)FUNC_2(VAR_1, "ERROR opening MAGIC_NONE: out of memory\n");
  return 10;
 }
 if (FUNC_6(VAR_4, ((void*)0)) == -1) {
  (void)FUNC_2(VAR_1, "ERROR loading with NULL file: %s\n",
      FUNC_4(VAR_4));
  return 11;
 }

 if (VAR_2 > 1) {
  if (VAR_2 != 3) {
   (void)FUNC_2(VAR_1, "Usage: test TEST-FILE RESULT\n");
  } else {
   if ((VAR_5 = FUNC_5(VAR_4, VAR_3[1])) == ((void*)0)) {
    (void)FUNC_2(VAR_1, "ERROR loading file %s: %s\n", VAR_3[1], FUNC_4(VAR_4));
    return 12;
   } else {
    VAR_9 = FUNC_1(VAR_3[2], "r");
    if (VAR_9 == ((void*)0)) {
     (void)FUNC_2(VAR_1, "ERROR opening `%s': ", VAR_3[2]);
     FUNC_8(((void*)0));
     return 13;
    }
    VAR_6 = FUNC_10(VAR_9, &VAR_7);
    FUNC_0(VAR_9);
    (void)FUNC_9("%s: %s\n", VAR_3[1], VAR_5);
                                if (FUNC_11(VAR_5, VAR_6) != 0) {
     (void)FUNC_2(VAR_1, "Error: result was\n%s\nexpected:\n%s\n", VAR_5, VAR_6);
     return 1;
                                }
   }
  }
 }

 FUNC_3(VAR_4);
 return 0;
}
