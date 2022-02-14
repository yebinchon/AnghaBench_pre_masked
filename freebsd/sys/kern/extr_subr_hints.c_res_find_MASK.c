
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*,char*,char*,int*,char*,char*) ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_8(char **VAR_9, int *VAR_10, int *VAR_11,
    const char *VAR_12, int *VAR_13, const char *VAR_14, const char *VAR_15,
    const char **VAR_16, int *VAR_17, int *VAR_18,
    const char **VAR_19, int *VAR_20, const char **VAR_21)
{
 int VAR_22 = 130, VAR_23 = 0, VAR_24 = 0;
 char VAR_25[32];
 int VAR_26;
 char VAR_27[32];
 char VAR_28[128];
 const char *VAR_29, *VAR_30;
 char *VAR_31, *VAR_32;
 bool VAR_33 = 0;
 if (*VAR_9 == ((void*)0)) {
  VAR_31 = ((void*)0);
  if (VAR_1) {





   FUNC_1(&VAR_2);
   VAR_30 = VAR_3[0];
   for (VAR_23 = 0; VAR_30 != ((void*)0); VAR_30 = VAR_3[++VAR_23]) {
    if (!FUNC_7(VAR_30, "hint.", 5)) {
     VAR_31 = VAR_3[0];
     break;
    }
   }
   FUNC_2(&VAR_2);
   VAR_33 = 1;
  } else {
fallback:
   if (VAR_33 || VAR_22 >= 129)
    return (VAR_0);

   switch (VAR_22) {
   case 130:
    VAR_22++;
    if (FUNC_0(VAR_5)) {
     VAR_31 = VAR_5;
     break;
    }


   case 128:
    VAR_22++;
    if (!VAR_7 && FUNC_0(VAR_4)) {
     VAR_31 = VAR_4;
     break;
    } else
     VAR_7 = 1;


   case 129:
    VAR_22++;

    if (!VAR_8 &&
        FUNC_0(VAR_6))
     VAR_31 = VAR_6;
    else
     VAR_8 = 1;

    break;
   default:
    return (VAR_0);
   }
  }

  if (VAR_31 == ((void*)0))
   return (VAR_0);
  *VAR_9 = VAR_31;
 } else {
  VAR_31 = *VAR_9;
  if (VAR_1 && VAR_31 == VAR_3[0])
   VAR_33 = 1;
  else






   goto fallback;
 }

 if (VAR_33) {
  FUNC_1(&VAR_2);
  VAR_23 = 0;
 }

 VAR_30 = VAR_31;
 while (VAR_30) {
  (*VAR_10)++;
  if (FUNC_7(VAR_30, "hint.", 5) != 0)
   goto nexthint;
  VAR_24 = FUNC_4(VAR_30, "hint.%32[^.].%d.%32[^=]=%127s", VAR_25, &VAR_26,
      VAR_27, VAR_28);
  if (VAR_24 != 4) {
   FUNC_3("CONFIG: invalid hint '%s'\n", VAR_30);
   VAR_32 = FUNC_5(VAR_30, 'h');
   *VAR_32 = 'H';
   goto nexthint;
  }
  if (VAR_11 && *VAR_11 >= 0 && *VAR_10 < *VAR_11)
   goto nexthint;
  if (VAR_12 && FUNC_6(VAR_12, VAR_25) != 0)
   goto nexthint;
  if (VAR_13 && *VAR_13 != VAR_26)
   goto nexthint;
  if (VAR_14 && FUNC_6(VAR_14, VAR_27) != 0)
   goto nexthint;
  if (VAR_15 && FUNC_6(VAR_15, VAR_28) != 0)
   goto nexthint;

  break;
nexthint:
  if (VAR_33) {
   VAR_30 = VAR_3[++VAR_23];
   if (VAR_30 == ((void*)0))
    break;
  } else {
   while (*VAR_30 != '\0')
    VAR_30++;
   VAR_30++;
   if (*VAR_30 == '\0') {
    VAR_30 = ((void*)0);
    break;
   }
  }
 }
 if (VAR_33)
  FUNC_2(&VAR_2);
 if (VAR_30 == ((void*)0))
  goto fallback;

 VAR_29 = VAR_30;


 VAR_29 = FUNC_5(VAR_29, '.') + 1;
 if (VAR_16)
  *VAR_16 = VAR_29;
 VAR_29 = FUNC_5(VAR_29, '.') + 1;
 if (VAR_17 && VAR_16)
  *VAR_17 = VAR_29 - *VAR_16 - 1;
 if (VAR_18)
  *VAR_18 = VAR_26;
 VAR_29 = FUNC_5(VAR_29, '.') + 1;
 if (VAR_19)
  *VAR_19 = VAR_29;
 VAR_29 = FUNC_5(VAR_29, '=') + 1;
 if (VAR_20 && VAR_19)
  *VAR_20 = VAR_29 - *VAR_19 - 1;
 if (VAR_21)
  *VAR_21 = VAR_29;
 if (VAR_11)
  *VAR_11 = *VAR_10 + 1;
 return 0;
}
