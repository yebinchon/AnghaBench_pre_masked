
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,int,int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 char* FUNC_6 (char**,char*) ;
 char** VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 char* FUNC_7 (char*,char) ;

int
FUNC_8(int VAR_6, char *VAR_7[])
{
    char VAR_8[VAR_0];
    const char *VAR_9 = "stdin";
    char *VAR_10, *VAR_11;
    char VAR_12[VAR_0];
    char VAR_13[VAR_0];
    FILE *VAR_14 = VAR_4;
    int VAR_15 = 0;
    int VAR_16 = 0;
    int VAR_17, VAR_18;
    int VAR_19 = 0;

    if ((VAR_2 = FUNC_7(VAR_7[0], '/')) == ((void*)0))
 VAR_2 = VAR_7[0];
    else
 VAR_2++;

    if (VAR_6 > 2) {
 (void) FUNC_5(VAR_3, "Usage: %s [<filename>]\n", VAR_2);
 return 1;
    }

    if (VAR_6 == 2)
 if ((VAR_14 = FUNC_4(VAR_9 = VAR_7[1], "r")) == ((void*)0)) {
     (void) FUNC_5(VAR_3, "%s: Cannot open `%s'\n", VAR_2, VAR_9);
     return 1;
 }

    VAR_18 = 140;

    while ((VAR_10 = FUNC_2(VAR_8, sizeof(VAR_8), VAR_14)) != ((void*)0)) {
 VAR_15++;
 switch (VAR_17 = FUNC_3(FUNC_6(&VAR_10, VAR_12))) {
 case 132:
     VAR_18 = 142;
     break;

 case 137:
     VAR_18 = 140;
     break;

 case 138:
     VAR_18 = 141;
     break;

 case 131:
     VAR_18 = 139;
     break;

 case 136:
     VAR_18 = 140;
     break;

 case 128:
     VAR_18 = 139;
     break;

 case 135:
     VAR_18 = 139;
     break;

 case 134:
     VAR_18 = 139;
     break;

 case 129:
     VAR_18 = 139;
     break;

 case 133:
     if (FUNC_6(&VAR_10, VAR_12) == ((void*)0)) {
  (void) FUNC_5(VAR_3, "%s: \"%s\", %d: Missing macro name\n",
          VAR_2, VAR_9, VAR_15);
  break;
     }
     if (FUNC_6(&VAR_10, VAR_13) == ((void*)0)) {
  (void) FUNC_5(VAR_3, "%s: \"%s\", %d: Missing macro body\n",
          VAR_2, VAR_9, VAR_15);
  break;
     }
     (void) FUNC_5(VAR_5, "\n#if %s\n# define %s\n#endif\n\n",
  FUNC_0(VAR_13), VAR_12);
     break;

 case 130:
     if (VAR_18 != 142 && *VAR_12 != '\0') {
  (void) FUNC_5(VAR_3, "%s: \"%s\", %d: Discarded\n",
          VAR_2, VAR_9, VAR_15);
  if (++VAR_19 == 30) {
      (void) FUNC_5(VAR_3, "%s: Too many errors\n", VAR_2);
      return 1;
  }
  break;
     }
     (void) FUNC_5(VAR_5, "%s", VAR_8);
     break;

 default:
     (void) FUNC_5(VAR_3, "%s: \"%s\", %d: Unexpected token\n",
      VAR_2, VAR_9, VAR_15);
     return 1;
 }

 switch (VAR_18) {
 case 140:
     if (VAR_16) {
  VAR_16 = 0;
  (void) FUNC_5(VAR_5, "#endif\n");
     }
     break;

 case 139:
     VAR_11 = FUNC_6(&VAR_10, VAR_12);
     if (VAR_17 == 131) {
  if (VAR_16) {
      (void) FUNC_5(VAR_3, "%s: \"%s\", %d: Missing enddef\n",
       VAR_2, VAR_9, VAR_15);
      return 1;
  }
  if (VAR_11 == ((void*)0)) {
      (void) FUNC_5(VAR_3, "%s: \"%s\", %d: No defs\n",
       VAR_2, VAR_9, VAR_15);
      return 1;
  }
  (void) FUNC_5(VAR_5, "\n\n");



  (void) FUNC_5(VAR_5, "#if (%s)\n", FUNC_0(VAR_12));
  VAR_16 = 1;
     }
     else {
  if (VAR_11 && *VAR_11)
      (void) FUNC_5(VAR_5, "# if (%s) && !defined(_%s_)\n",
       FUNC_0(VAR_12), VAR_1[VAR_17]);
  else
      (void) FUNC_5(VAR_5, "# if !defined(_%s_)\n",
       VAR_1[VAR_17]);

  if (FUNC_6(&VAR_10, VAR_13) == ((void*)0)) {
      (void) FUNC_5(VAR_3, "%s: \"%s\", %d: No statement\n",
       VAR_2, VAR_9, VAR_15);
      return 1;
  }
  (void) FUNC_5(VAR_5, "# define _%s_\n", VAR_1[VAR_17]);
  (void) FUNC_5(VAR_5, "    %s = %s;\n", VAR_1[VAR_17], VAR_13);
  (void) FUNC_5(VAR_5, "# endif\n");
     }
     break;

 case 141:
     if (FUNC_6(&VAR_10, VAR_12))
  (void) FUNC_5(VAR_5, "    /* %s */\n", VAR_12);
     break;

 case 142:
     if (VAR_17 == 132) {



     }
     break;

 default:
     (void) FUNC_5(VAR_3, "%s: \"%s\", %d: Unexpected state\n",
      VAR_2, VAR_9, VAR_15);
     return 1;
 }
    }

    if (VAR_16) {
 (void) FUNC_5(VAR_3, "%s: \"%s\", %d: Missing enddef\n",
         VAR_2, VAR_9, VAR_15);
 return 1;
    }

    if (VAR_14 != VAR_4)
 (void) FUNC_1(VAR_14);

    return 0;
}
