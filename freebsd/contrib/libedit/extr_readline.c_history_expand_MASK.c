
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,int) ;
 int FUNC_1 (char*,size_t,size_t,char**) ;
 int FUNC_2 (char*) ;
 int * VAR_0 ;
 char* FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 int * VAR_1 ;
 char VAR_2 ;
 scalar_t__ FUNC_5 (char*,int) ;
 int VAR_3 ;
 char VAR_4 ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int FUNC_7 (char*,char*,size_t) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*,int) ;

int
FUNC_14(char *VAR_5, char **VAR_6)
{
 int VAR_7 = 0;
 size_t VAR_8, VAR_9, VAR_10;
 char *VAR_11, *VAR_12;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
  FUNC_8();

 if (VAR_2 == 0) {
  *VAR_6 = FUNC_11(VAR_5);
  return 0;
 }

 *VAR_6 = ((void*)0);
 if (VAR_5[0] == VAR_4) {

  *VAR_6 = FUNC_3(FUNC_12(VAR_5) + 4 + 1, sizeof(**VAR_6));
  if (*VAR_6 == ((void*)0))
   return 0;
  (*VAR_6)[0] = (*VAR_6)[1] = VAR_2;
  (*VAR_6)[2] = ':';
  (*VAR_6)[3] = 's';
  (void)FUNC_10((*VAR_6) + 4, VAR_5);
  VAR_5 = *VAR_6;
 } else {
  *VAR_6 = FUNC_11(VAR_5);
  if (*VAR_6 == ((void*)0))
   return 0;
 }
 VAR_12 = ((void*)0);
 VAR_10 = VAR_8 = 0;
 VAR_11 = ((void*)0);
 for (VAR_9 = 0; VAR_5[VAR_9];) {
  int VAR_13, VAR_14;
  size_t VAR_15, VAR_16, VAR_17;

  VAR_13 = 0;
  VAR_14 = 1;
  VAR_16 = VAR_17 = VAR_9;
loop:
  for (; VAR_5[VAR_17]; VAR_17++) {
   if (VAR_5[VAR_17] == '\\' &&
       VAR_5[VAR_17 + 1] == VAR_2) {
    VAR_15 = FUNC_12(&VAR_5[VAR_17 + 1]) + 1;
    FUNC_7(&VAR_5[VAR_17], &VAR_5[VAR_17 + 1], VAR_15);
    continue;
   }
   if (!VAR_14) {
    if (FUNC_6((unsigned char) VAR_5[VAR_17])
        || VAR_5[VAR_17] == VAR_13)
     break;
   }
   if (VAR_5[VAR_17] == VAR_2
       && !FUNC_9(VAR_3, VAR_5[VAR_17 + 1])
       && (!&FUNC_5 ||
       FUNC_5)(VAR_5,
       (int)VAR_17) == 0))
    break;
  }

  if (VAR_5[VAR_17] && VAR_14) {
   VAR_9 = VAR_17;
   VAR_13 = (VAR_17 > 0 && VAR_5[VAR_17 - 1] == '"' )? '"':0;
   VAR_17++;
   if (VAR_5[VAR_17] == VAR_2)
    VAR_17++;
   VAR_14 = 0;
   goto loop;
  }
  VAR_15 = VAR_9 - VAR_16;
  { if (VAR_8 + VAR_15 + 1 > VAR_10) { char *VAR_18 = FUNC_0(VAR_12, (VAR_10 += VAR_15 + 1) * sizeof(*VAR_18)); if (VAR_18 == ((void*)0)) { FUNC_4(*VAR_6); if ( 0) FUNC_4(VAR_11); return 0; } VAR_12 = VAR_18; } (void)strncpy(&VAR_12[VAR_8], &VAR_5[VAR_16], VAR_15); VAR_8 += VAR_15; VAR_12[VAR_8] = '\0'; };

  if (VAR_5[VAR_9] == '\0' || VAR_5[VAR_9] != VAR_2) {
   VAR_15 = VAR_17 - VAR_9;
   { if (VAR_8 + VAR_15 + 1 > VAR_10) { char *VAR_19 = FUNC_0(VAR_12, (VAR_10 += VAR_15 + 1) * sizeof(*VAR_19)); if (VAR_19 == ((void*)0)) { FUNC_4(*VAR_6); if ( 0) FUNC_4(VAR_11); return 0; } VAR_12 = VAR_19; } (void)FUNC_0(&VAR_12[VAR_8], &VAR_5[VAR_9], VAR_15); VAR_8 += VAR_15; VAR_12[VAR_8] = '\0'; };
   if (VAR_16 == 0)
    VAR_7 = 0;
   else
    VAR_7 = 1;
   break;
  }
  VAR_7 = FUNC_1 (VAR_5, VAR_9, (VAR_17 - VAR_9), &VAR_11);
  if (VAR_7 > 0 && VAR_11) {
   VAR_15 = FUNC_12(VAR_11);
   { if (VAR_8 + VAR_15 + 1 > VAR_10) { char *VAR_20 = FUNC_0(VAR_12, (VAR_10 += VAR_15 + 1) * sizeof(*VAR_20)); if (VAR_20 == ((void*)0)) { FUNC_4(*VAR_6); if ( 1) FUNC_4(VAR_11); return 0; } VAR_12 = VAR_20; } (void)FUNC_0(&VAR_12[VAR_8], VAR_11, VAR_15); VAR_8 += VAR_15; VAR_12[VAR_8] = '\0'; };
  }
  if (VAR_11) {
   FUNC_4(VAR_11);
   VAR_11 = ((void*)0);
  }
  VAR_9 = VAR_17;
 }


 if (VAR_7 == 2) {
  FUNC_2(VAR_12);







 }
 FUNC_4(*VAR_6);
 *VAR_6 = VAR_12;

 return VAR_7;
}
