
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int dummy; } ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct command*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,int ) ;
 char* FUNC_8 (char*,int*) ;
 int FUNC_9 (char) ;
 int FUNC_10 (int *,int) ;
 char** FUNC_11 (char**) ;
 int FUNC_12 (char*,char**,int *,int) ;
 int FUNC_13 (char*,char*,int) ;
 int VAR_14 ;
 int FUNC_14 (int,...) ;
 int FUNC_15 (char*) ;
 int VAR_15 ;

void
FUNC_16(Char **VAR_16, struct command *VAR_17)
{
    Char *VAR_18;
    Char *VAR_19;
    Char **VAR_20;
    int VAR_21;
    int VAR_22;
    int VAR_23 = VAR_13;
    int VAR_24 = 0;
    int VAR_25 = 0;
    int VAR_26 = 0;

    FUNC_1(VAR_17);
    VAR_16++;
    do {
 VAR_26 = 0;



 if (*VAR_16 && FUNC_7(*VAR_16, VAR_9)) {
     VAR_23 = VAR_12;
     VAR_16++;
     VAR_26 = 1;
 }
 if (*VAR_16 && FUNC_7(*VAR_16, VAR_7) && !VAR_25) {
     VAR_24 = 1;
     VAR_16++;
     VAR_26 = 1;
 }
 if (*VAR_16 && FUNC_7(*VAR_16, VAR_8) && !VAR_24) {
     VAR_25 = 1;
     VAR_16++;
     VAR_26 = 1;
 }
    } while(VAR_26);
    VAR_18 = *VAR_16++;
    if (VAR_18 == 0) {
 FUNC_10(&VAR_14, VAR_23);
 return;
    }
    do {
 VAR_21 = 0;
 VAR_19 = VAR_18;
 if (!FUNC_9(*VAR_18))
     FUNC_14(VAR_1 | VAR_4);
 do {
     VAR_18++;
 } while (FUNC_2(*VAR_18));
 if (*VAR_18 == '[') {
     VAR_21++;
     VAR_18 = FUNC_8(VAR_18, &VAR_22);
 }
 if (*VAR_18 != '\0' && *VAR_18 != '=')
     FUNC_14(VAR_1 | VAR_3);
 if (*VAR_18 == '=') {
     *VAR_18++ = '\0';
     if (*VAR_18 == '\0' && *VAR_16 != ((void*)0) && **VAR_16 == '(')
  VAR_18 = *VAR_16++;
 }
 else if (*VAR_16 && FUNC_7(*VAR_16, VAR_6)) {
     if (*++VAR_16 != ((void*)0))
  VAR_18 = *VAR_16++;
 }
 if (FUNC_7(VAR_18, VAR_5)) {
     Char **VAR_27 = VAR_16;

     if (VAR_21)
  FUNC_14(VAR_1 | VAR_2);
     for (;;) {
  if (!*VAR_27)
      FUNC_14(VAR_1 | VAR_0, ')');
  if (**VAR_27 == ')')
      break;
  VAR_27++;
     }
     VAR_18 = *VAR_27;
     *VAR_27 = 0;
     VAR_20 = FUNC_11(VAR_16);
     if (VAR_24)
        VAR_23 |= VAR_10;
     else if (VAR_25)
        VAR_23 |= VAR_11;

     FUNC_12(VAR_19, VAR_20, &VAR_14, VAR_23);
     *VAR_27 = VAR_18;
     VAR_16 = VAR_27 + 1;
 }
 else if (VAR_21) {
     Char *VAR_28;

     VAR_28 = FUNC_0(VAR_18);
     FUNC_5(VAR_28, VAR_15);
     FUNC_3(VAR_19, VAR_22, VAR_28);
     FUNC_4(VAR_28);
     FUNC_6(VAR_28);
 }
 else
     FUNC_13(VAR_19, FUNC_0(VAR_18), VAR_23);
 FUNC_15(VAR_19);
    } while ((VAR_18 = *VAR_16++) != ((void*)0));
}
