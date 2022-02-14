
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int) ;
 char** VAR_4 ;
 char* FUNC_1 () ;
 int VAR_5 ;
 char* FUNC_2 (int) ;
 char** VAR_6 ;
 char** VAR_7 ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char const*) ;

char *
FUNC_7(int VAR_8, const char *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 const char *VAR_14, *VAR_15;

 if (VAR_8 < VAR_2 || VAR_8 >= VAR_3) {
  VAR_5 = VAR_0;
  return (((void*)0));
 }
 if (VAR_9 == ((void*)0))
  return (VAR_8 != VAR_2 ?
      VAR_4[VAR_8] : FUNC_1());




 for (VAR_10 = 1; VAR_10 < VAR_3; ++VAR_10)
  (void)FUNC_4(VAR_6[VAR_10], VAR_4[VAR_10]);




 if (!*VAR_9) {
  if (VAR_8 == VAR_2) {
   for (VAR_10 = 1; VAR_10 < VAR_3; ++VAR_10) {
    VAR_14 = FUNC_0(VAR_10);
    if (FUNC_6(VAR_14) > VAR_1) {
     VAR_5 = VAR_0;
     return (((void*)0));
    }
    (void)FUNC_4(VAR_6[VAR_10], VAR_14);
   }
  } else {
   VAR_14 = FUNC_0(VAR_8);
   if (FUNC_6(VAR_14) > VAR_1) {
    VAR_5 = VAR_0;
    return (((void*)0));
   }
   (void)FUNC_4(VAR_6[VAR_8], VAR_14);
  }
 } else if (VAR_8 != VAR_2) {
  if (FUNC_6(VAR_9) > VAR_1) {
   VAR_5 = VAR_0;
   return (((void*)0));
  }
  (void)FUNC_4(VAR_6[VAR_8], VAR_9);
 } else {
  if ((VAR_15 = FUNC_3(VAR_9, '/')) == ((void*)0)) {
   if (FUNC_6(VAR_9) > VAR_1) {
    VAR_5 = VAR_0;
    return (((void*)0));
   }
   for (VAR_10 = 1; VAR_10 < VAR_3; ++VAR_10)
    (void)FUNC_4(VAR_6[VAR_10], VAR_9);
  } else {
   for (VAR_10 = 1; VAR_15[1] == '/'; ++VAR_15)
    ;
   if (!VAR_15[1]) {
    VAR_5 = VAR_0;
    return (((void*)0));
   }
   do {
    if (VAR_10 == VAR_3)
     break;
    if ((VAR_12 = VAR_15 - VAR_9) > VAR_1) {
     VAR_5 = VAR_0;
     return (((void*)0));
    }
    (void)FUNC_5(VAR_6[VAR_10], VAR_9,
        VAR_12 + 1);
    VAR_10++;
    while (*VAR_15 == '/')
     VAR_15++;
    VAR_9 = VAR_15;
    while (*VAR_15 && *VAR_15 != '/')
     VAR_15++;
   } while (*VAR_9);
   while (VAR_10 < VAR_3) {
    (void)FUNC_4(VAR_6[VAR_10],
        VAR_6[VAR_10 - 1]);
    VAR_10++;
   }
  }
 }

 if (VAR_8 != VAR_2)
  return (FUNC_2(VAR_8));

 for (VAR_10 = 1; VAR_10 < VAR_3; ++VAR_10) {
  (void)FUNC_4(VAR_7[VAR_10], VAR_4[VAR_10]);
  if (FUNC_2(VAR_10) == ((void*)0)) {
   VAR_13 = VAR_5;
   for (VAR_11 = 1; VAR_11 < VAR_10; VAR_11++) {
    (void)FUNC_4(VAR_6[VAR_11],
        VAR_7[VAR_11]);
    if (FUNC_2(VAR_11) == ((void*)0)) {
     (void)FUNC_4(VAR_6[VAR_11], "C");
     (void)FUNC_2(VAR_11);
    }
   }
   VAR_5 = VAR_13;
   return (((void*)0));
  }
 }
 return (FUNC_1());
}
