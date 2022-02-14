
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*,char*,int) ;
 char* FUNC_1 (size_t,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ,char*,char const*) ;
 char* FUNC_5 (char const*,int*,int) ;
 char* FUNC_6 (int,int,char*) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (char*,char const) ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*) ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 (char*,char const*,size_t) ;
 char* FUNC_13 (char*,char) ;

__attribute__((used)) static int
FUNC_14(const char *VAR_2, size_t VAR_3, size_t VAR_4,
    char **VAR_5)
{
 char *VAR_6, *VAR_7 = ((void*)0), *VAR_8;
 const char *VAR_9, *VAR_10;
 static char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 int VAR_17 = 0, VAR_18 = 0;

 *VAR_5 = ((void*)0);
 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);


 VAR_15 = 0;

 if (FUNC_8(":^*$", VAR_2[VAR_3 + 1])) {
  char VAR_19[4];





  VAR_19[0] = VAR_19[1] = '!';
  VAR_19[2] = '0';
  VAR_9 = FUNC_5(VAR_19, &VAR_15, 0);
  VAR_15 = (VAR_2[VAR_3 + 1] == ':')? 1:0;
  VAR_16 = 1;
 } else {
  if (VAR_2[VAR_3 + 1] == '#') {

   if ((VAR_8 = FUNC_1(VAR_3 + 1, sizeof(*VAR_8)))
       == ((void*)0))
    return -1;
   (void)FUNC_12(VAR_8, VAR_2, VAR_3);
   VAR_8[VAR_3] = '\0';
   VAR_15 = 1;
  } else {
   int VAR_20;

   VAR_20 = (VAR_3 > 0 && VAR_2[VAR_3 - 1] == '"')? '"':0;
   VAR_9 = FUNC_5(VAR_2 + VAR_3, &VAR_15, VAR_20);
  }
  VAR_16 = VAR_2[VAR_3 + (size_t)VAR_15] == ':';
 }

 if (VAR_9 == ((void*)0) && VAR_8 == ((void*)0))
  return -1;

 if (!VAR_16) {
  *VAR_5 = FUNC_10(VAR_8 ? VAR_8 : VAR_9);
  if (VAR_8)
   FUNC_2(VAR_8);
  if (*VAR_5 == ((void*)0))
   return -1;
  return 1;
 }

 VAR_10 = VAR_2 + VAR_3 + VAR_15 + 1;



 if (*VAR_10 == '%')
  VAR_6 = FUNC_10(VAR_0? VAR_0:"");
 else if (FUNC_8("^*$-0123456789", *VAR_10)) {
  VAR_13 = VAR_14 = -1;
  if (*VAR_10 == '^')
   VAR_13 = VAR_14 = 1, VAR_10++;
  else if (*VAR_10 == '$')
   VAR_13 = -1, VAR_10++;
  else if (*VAR_10 == '*')
   VAR_13 = 1, VAR_10++;
        else if (*VAR_10 == '-' || FUNC_7((unsigned char) *VAR_10)) {
   VAR_13 = 0;
   while (*VAR_10 && '0' <= *VAR_10 && *VAR_10 <= '9')
    VAR_13 = VAR_13 * 10 + *VAR_10++ - '0';

   if (*VAR_10 == '-') {
    if (FUNC_7((unsigned char) VAR_10[1])) {
     VAR_10++;
     VAR_14 = 0;
     while (*VAR_10 && '0' <= *VAR_10 && *VAR_10 <= '9')
      VAR_14 = VAR_14 * 10 + *VAR_10++ - '0';
    } else if (VAR_10[1] == '$') {
     VAR_10 += 2;
     VAR_14 = -1;
    } else {
     VAR_10++;
     VAR_14 = -2;
    }
   } else if (*VAR_10 == '*')
    VAR_14 = -1, VAR_10++;
   else
    VAR_14 = VAR_13;
  }
  VAR_6 = FUNC_6(VAR_13, VAR_14, VAR_8? VAR_8:VAR_9);
  if (VAR_6 == ((void*)0)) {
   (void)FUNC_4(VAR_1, "%s: Bad word specifier",
       VAR_2 + VAR_3 + VAR_15);
   if (VAR_8)
    FUNC_2(VAR_8);
   return -1;
  }
 } else
  VAR_6 = FUNC_10(VAR_8? VAR_8:VAR_9);

 if (VAR_8)
  FUNC_2(VAR_8);

 if (*VAR_10 == '\0' || ((size_t)(VAR_10 - (VAR_2 + VAR_3)) >= VAR_4)) {
  *VAR_5 = VAR_6;
  return 1;
 }

 for (; *VAR_10; VAR_10++) {
  if (*VAR_10 == ':')
   continue;
  else if (*VAR_10 == 'h') {
   if ((VAR_8 = FUNC_13(VAR_6, '/')) != ((void*)0))
    *VAR_8 = '\0';
  } else if (*VAR_10 == 't') {
   if ((VAR_8 = FUNC_13(VAR_6, '/')) != ((void*)0)) {
    VAR_8 = FUNC_10(VAR_8 + 1);
    FUNC_2(VAR_6);
    VAR_6 = VAR_8;
   }
  } else if (*VAR_10 == 'r') {
   if ((VAR_8 = FUNC_13(VAR_6, '.')) != ((void*)0))
    *VAR_8 = '\0';
  } else if (*VAR_10 == 'e') {
   if ((VAR_8 = FUNC_13(VAR_6, '.')) != ((void*)0)) {
    VAR_8 = FUNC_10(VAR_8);
    FUNC_2(VAR_6);
    VAR_6 = VAR_8;
   }
  } else if (*VAR_10 == 'p')
   VAR_17 = 1;
  else if (*VAR_10 == 'g')
   VAR_18 = 2;
  else if (*VAR_10 == 's' || *VAR_10 == '&') {
   char *VAR_21, *VAR_22, VAR_23;
   size_t VAR_24, VAR_25;
   size_t VAR_26;

   if (*VAR_10 == '&' && (VAR_11 == ((void*)0) || VAR_12 == ((void*)0)))
    continue;
   else if (*VAR_10 == 's') {
    VAR_23 = *(++VAR_10), VAR_10++;
    VAR_26 = 16;
    VAR_21 = FUNC_3(VAR_11, VAR_26 * sizeof(*VAR_21));
    if (VAR_21 == ((void*)0)) {
     FUNC_2(VAR_11);
     FUNC_2(VAR_6);
     return 0;
    }
    VAR_24 = 0;
    for (; *VAR_10 && *VAR_10 != VAR_23; VAR_10++) {
     if (*VAR_10 == '\\' && VAR_10[1] == VAR_23)
      VAR_10++;
     if (VAR_24 >= VAR_26) {
      char *VAR_27;
      VAR_27 = FUNC_3(VAR_21,
          (VAR_26 <<= 1) *
          sizeof(*VAR_27));
      if (VAR_27 == ((void*)0)) {
       FUNC_2(VAR_21);
       FUNC_2(VAR_6);
       return 0;
      }
      VAR_21 = VAR_27;
     }
     VAR_21[VAR_24++] = *VAR_10;
    }
    VAR_21[VAR_24] = '\0';
    VAR_11 = VAR_21;
    if (*VAR_21 == '\0') {
     FUNC_2(VAR_21);
     if (VAR_7) {
      VAR_11 = FUNC_10(VAR_7);
      if (VAR_11 == ((void*)0)) {
       FUNC_2(VAR_6);
       return 0;
      }
     } else {
      VAR_11 = ((void*)0);
      FUNC_2(VAR_6);
      return -1;
     }
    }
    VAR_10++;
    if (!*VAR_10)
     continue;

    VAR_26 = 16;
    VAR_22 = FUNC_3(VAR_12, VAR_26 * sizeof(*VAR_22));
    if (VAR_22 == ((void*)0)) {
     FUNC_2(VAR_12);
     FUNC_2(VAR_6);
     return -1;
    }
    VAR_24 = 0;
    VAR_25 = FUNC_11(VAR_11);
    for (; *VAR_10 && *VAR_10 != VAR_23; VAR_10++) {
     if (VAR_24 + VAR_25 + 1 >= VAR_26) {
      char *VAR_28;
      VAR_26 += VAR_25 + 1;
      VAR_28 = FUNC_3(VAR_22,
          VAR_26 * sizeof(*VAR_28));
      if (VAR_28 == ((void*)0)) {
       FUNC_2(VAR_22);
       FUNC_2(VAR_6);
       return -1;
      }
      VAR_22 = VAR_28;
     }
     if (*VAR_10 == '&') {

      (void)FUNC_9(&VAR_22[VAR_24], VAR_11);
      VAR_24 += VAR_25;
      continue;
     }
     if (*VAR_10 == '\\'
         && (*(VAR_10 + 1) == VAR_23
      || *(VAR_10 + 1) == '&'))
      VAR_10++;
     VAR_22[VAR_24++] = *VAR_10;
    }
    VAR_22[VAR_24] = '\0';
    VAR_12 = VAR_22;
   }

   VAR_8 = FUNC_0(VAR_6, VAR_11, VAR_12, VAR_18);
   if (VAR_8) {
    FUNC_2(VAR_6);
    VAR_6 = VAR_8;
   }
   VAR_18 = 0;
  }
 }
 *VAR_5 = VAR_6;
 return VAR_17? 2:1;
}
