
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GNode ;
typedef void* Boolean ;


 char* FUNC_0 (char*,char const**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 void* VAR_0 ;
 int FUNC_3 () ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_4 (void*) ;
 int VAR_4 ;
 int FUNC_5 (int ,char const*,char*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_6 (char*,char*,int *) ;
 scalar_t__ FUNC_7 (char*,int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,char*,int *,int ) ;
 char* FUNC_10 (int *,char*,int *,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (unsigned char) ;
 void* VAR_10 ;
 int * FUNC_13 (char*,char) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*,int) ;

void
FUNC_16(char *VAR_11, GNode *VAR_12)
{
    char *VAR_13;
    enum {
 VAR_SUBST, VAR_APPEND, VAR_SHELL, VAR_NORMAL
    } VAR_14;
    char *VAR_15;

    Boolean VAR_16 = VAR_0;


    int VAR_17;




    while ((*VAR_11 == ' ') || (*VAR_11 == '\t')) {
 VAR_11++;
    }






    for (VAR_17 = 0, VAR_13 = VAR_11 + 1; VAR_17 > 0 || *VAR_13 != '='; VAR_13++) {
 if (*VAR_13 == '(' || *VAR_13 == '{') {
     VAR_17++;
     continue;
 }
 if (*VAR_13 == ')' || *VAR_13 == '}') {
     VAR_17--;
     continue;
 }
 if (VAR_17 == 0 && FUNC_12 ((unsigned char)*VAR_13)) {
     *VAR_13 = '\0';
 }
    }
    VAR_15 = VAR_13-1;
    *VAR_13++ = '\0';




    switch (*VAR_15) {
 case '+':
     VAR_14 = VAR_APPEND;
     *VAR_15 = '\0';
     break;

 case '?':



     *VAR_15 = '\0';
     if (FUNC_7(VAR_11, VAR_12)) {
  return;
     } else {
  VAR_14 = VAR_NORMAL;
     }
     break;

 case ':':
     VAR_14 = VAR_SUBST;
     *VAR_15 = '\0';
     break;

 case '!':
     VAR_14 = VAR_SHELL;
     *VAR_15 = '\0';
     break;

 default:
     VAR_14 = VAR_NORMAL;
     break;
    }

    while (FUNC_12 ((unsigned char)*VAR_13)) {
 VAR_13++;
    }

    if (VAR_14 == VAR_APPEND) {
 FUNC_6(VAR_11, VAR_13, VAR_12);
    } else if (VAR_14 == VAR_SUBST) {
 Boolean VAR_18 = VAR_10;

 VAR_10 = VAR_0;





 if (!FUNC_7(VAR_11, VAR_12))
     FUNC_9(VAR_11, "", VAR_12, 0);

 VAR_13 = FUNC_10(((void*)0), VAR_13, VAR_12, VAR_8|VAR_6);
 VAR_10 = VAR_18;
 VAR_16 = VAR_5;

 FUNC_9(VAR_11, VAR_13, VAR_12, 0);
    } else if (VAR_14 == VAR_SHELL) {
 char *VAR_19;
 const char *VAR_20;

 if (FUNC_13(VAR_13, '$') != ((void*)0)) {





     VAR_13 = FUNC_10(((void*)0), VAR_13, VAR_9, VAR_7|VAR_8);
     VAR_16 = VAR_5;
 }

 VAR_19 = FUNC_0(VAR_13, &VAR_20);
 FUNC_9(VAR_11, VAR_19, VAR_12, 0);
 FUNC_11(VAR_19);

 if (VAR_20)
     FUNC_5(VAR_4, VAR_20, VAR_13);
    } else {



 FUNC_9(VAR_11, VAR_13, VAR_12, 0);
    }
    if (FUNC_14(VAR_11, VAR_1) == 0)
 FUNC_4(VAR_0);
    else if (FUNC_14(VAR_11, ".CURDIR") == 0) {





 FUNC_1(VAR_13);
 FUNC_2();
    } else if (FUNC_14(VAR_11, VAR_3) == 0) {
 FUNC_3();
    } else if (FUNC_14(VAR_11, VAR_2) == 0) {
 FUNC_8(VAR_13, 0);
    }
    if (VAR_16)
 FUNC_11(VAR_13);
}
