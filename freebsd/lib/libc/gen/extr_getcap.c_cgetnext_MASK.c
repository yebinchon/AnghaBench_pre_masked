
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int FUNC_0 () ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,size_t*) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char**,int *,char**,int,char*,int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int * VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;

int
FUNC_7(char **VAR_7, char **VAR_8)
{
 size_t VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 char *VAR_14, *VAR_15, *VAR_16, *VAR_17, VAR_18[VAR_0], VAR_19[VAR_0];
 u_int VAR_20;

 if (VAR_1 == ((void*)0))
  VAR_1 = VAR_8;

 if (VAR_4 == ((void*)0) && (VAR_4 = FUNC_4(*VAR_1, "re")) == ((void*)0)) {
  (void)FUNC_0();
  return (-1);
 }
 for (;;) {
  if (VAR_6 && !VAR_3) {
   VAR_3 = 1;
   VAR_15 = VAR_6;
  } else {
   VAR_15 = FUNC_3(VAR_4, &VAR_9);
   if (VAR_15 == ((void*)0) && VAR_4) {
    VAR_11 = FUNC_2(VAR_4);
    if (VAR_11)
     VAR_12 = VAR_2;
    FUNC_1(VAR_4);
    VAR_4 = ((void*)0);
    if (VAR_11) {
     FUNC_0();
     VAR_2 = VAR_12;
     return (-1);
    } else {
     if (*++VAR_1 == ((void*)0)) {
      (void)FUNC_0();
      return (0);
     } else if ((VAR_4 =
         FUNC_4(*VAR_1, "re")) == ((void*)0)) {
      (void)FUNC_0();
      return (-1);
     } else
      continue;
    }
   } else
    VAR_15[VAR_9 - 1] = '\0';
   if (VAR_9 == 1) {
    VAR_5 = 0;
    continue;
   }
   if (FUNC_6((unsigned char)*VAR_15) ||
       *VAR_15 == ':' || *VAR_15 == '#' || VAR_5) {
    if (VAR_15[VAR_9 - 2] == '\\')
     VAR_5 = 1;
    else
     VAR_5 = 0;
    continue;
   }
   if (VAR_15[VAR_9 - 2] == '\\')
    VAR_5 = 1;
   else
    VAR_5 = 0;
  }





  VAR_10 = 0;
  VAR_17 = VAR_19;
  for (;;) {
   for (VAR_14 = VAR_15; *VAR_14 != '\0'; VAR_14++) {
    if (*VAR_14 == ':') {
     *VAR_17++ = ':';
     VAR_10 = 1;
     break;
    }
    if (*VAR_14 == '\\')
     break;
    *VAR_17++ = *VAR_14;
   }
   if (VAR_10) {
    *VAR_17 = '\0';
    break;
   } else {
    VAR_15 = FUNC_3(VAR_4, &VAR_9);
    if (VAR_15 == ((void*)0) && VAR_4) {

     VAR_11 = FUNC_2(VAR_4);
     if (VAR_11)
      VAR_12 = VAR_2;
     FUNC_1(VAR_4);
     VAR_4 = ((void*)0);
     if (VAR_11) {
      FUNC_0();
      VAR_2 = VAR_12;
      return (-1);
     } else {
      FUNC_0();
      return (-1);
     }
    } else
     VAR_15[VAR_9 - 1] = '\0';
   }
  }
  VAR_16 = VAR_18;
  for(VAR_14 = VAR_19; *VAR_14 != '\0'; VAR_14++)
   if (*VAR_14 == '|' || *VAR_14 == ':')
    break;
   else
    *VAR_16++ = *VAR_14;

  *VAR_16 = '\0';
  VAR_13 = FUNC_5(VAR_7, &VAR_20, VAR_8, -1, VAR_18, 0, ((void*)0));
  if (VAR_13 == -2 || VAR_13 == -3)
   (void)FUNC_0();

  return (VAR_13 + 1);
 }

}
