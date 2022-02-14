
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int ** VAR_1 ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int **,char**,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*,char*) ;
 char FUNC_6 (char) ;
 int FUNC_7 (char) ;
 int FUNC_8 (char) ;
 int FUNC_9 (char) ;
 scalar_t__ FUNC_10 (int) ;
 size_t FUNC_11 (size_t,int ) ;
 char* FUNC_12 (char*,char) ;
 size_t FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,size_t) ;
 char* FUNC_15 (char*) ;

int
FUNC_16(int *VAR_2, char ***VAR_3, const char *VAR_4)
{
 int VAR_5;
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9 = ((void*)0);
 size_t VAR_10 = 0;
 char VAR_11, VAR_12, VAR_13, VAR_14, *VAR_15;
 enum { STR, VAR, WHITE } VAR_16;

 VAR_5 = *VAR_2 = 0;
 VAR_14 = VAR_13 = 0;
 if (!VAR_4 || (VAR_7 = VAR_9 = FUNC_1(VAR_4)) == ((void*)0))
  return 1;


 FUNC_3();
 VAR_16 = STR;
 VAR_15 = (char *)FUNC_10(VAR_0);
 VAR_11 = 0;


 while (*VAR_7) {
  switch (VAR_16) {
  case STR:
   if ((*VAR_7 == '\\') && VAR_7[1]) {
    VAR_7++;
    FUNC_0(VAR_10 == (VAR_0 - 1));
    VAR_15[VAR_10++] = *VAR_7++;
   } else if (FUNC_8(*VAR_7)) {
    VAR_13 = VAR_13 ? 0 : *VAR_7;
    if (VAR_14) {
     FUNC_0(VAR_10 == (VAR_0 - 1));
     VAR_15[VAR_10++] = *VAR_7++;
    } else
     ++VAR_7;
   } else if (FUNC_7(*VAR_7)) {
    VAR_14 = VAR_14 ? 0 : *VAR_7;
    if (VAR_13) {
     FUNC_0(VAR_10 == (VAR_0 - 1));
     VAR_15[VAR_10++] = *VAR_7++;
    } else
     ++VAR_7;
   } else if (FUNC_9(*VAR_7) && !VAR_13 && !VAR_14) {
    VAR_16 = WHITE;
    if (VAR_10) {
     VAR_15[VAR_10] = '\0';
     FUNC_0(FUNC_5(&VAR_5, VAR_15));
     VAR_10 = 0;
    }
    ++VAR_7;
   } else if (*VAR_7 == '$' && !VAR_13) {
    VAR_11 = FUNC_6(*(VAR_7 + 1));
    if (VAR_11)
     VAR_7 += 2;
    else
     ++VAR_7;
    VAR_16 = VAR;
   } else {
    FUNC_0(VAR_10 == (VAR_0 - 1));
    VAR_15[VAR_10++] = *VAR_7++;
   }
   break;

  case WHITE:
   if (FUNC_9(*VAR_7))
    ++VAR_7;
   else
    VAR_16 = STR;
   break;

  case VAR:
   if (VAR_11) {
    FUNC_0((VAR_8 = FUNC_12(VAR_7, VAR_11)) == ((void*)0));
   } else {
    VAR_8 = VAR_7;
    while (*VAR_8 && !FUNC_9(*VAR_8))
     ++VAR_8;
   }
   VAR_12 = *VAR_8;
   *VAR_8 = '\0';
   if ((VAR_6 = FUNC_15(VAR_7)) != ((void*)0)) {
    size_t VAR_17 = FUNC_13(VAR_6);

    FUNC_14(VAR_15 + VAR_10, VAR_6, VAR_0 - (VAR_10 + 1));
    VAR_10 += FUNC_11(VAR_17, VAR_0 - 1);
   }
   *VAR_8 = VAR_12;
   VAR_7 = VAR_8 + (VAR_11 ? 1 : 0);
   VAR_16 = STR;
   break;
  }
 }

 FUNC_0(VAR_13 || VAR_14);

 if (VAR_10 && VAR_16 == STR) {
  VAR_15[VAR_10] = '\0';
  FUNC_0(FUNC_5(&VAR_5, VAR_15));
 }
 VAR_1[VAR_5] = ((void*)0);
 *VAR_2 = VAR_5;
 *VAR_3 = (char **)FUNC_10((sizeof(char *) * VAR_5 + 1));
 FUNC_2(VAR_1, *VAR_3, sizeof(char *) * VAR_5 + 1);
 FUNC_4(VAR_15);
 FUNC_4(VAR_9);
 return 0;
}
