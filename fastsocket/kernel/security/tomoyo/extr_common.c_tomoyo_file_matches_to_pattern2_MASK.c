
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_0,
         const char *VAR_1,
         const char *VAR_2,
         const char *VAR_3)
{
 while (VAR_0 < VAR_1 && VAR_2 < VAR_3) {
  char VAR_4;
  if (*VAR_2 != '\\') {
   if (*VAR_0++ != *VAR_2++)
    return 0;
   continue;
  }
  VAR_4 = *VAR_0;
  VAR_2++;
  switch (*VAR_2) {
   int VAR_5;
   int VAR_6;
  case '?':
   if (VAR_4 == '/') {
    return 0;
   } else if (VAR_4 == '\\') {
    if (VAR_0[1] == '\\')
     VAR_0++;
    else if (FUNC_4(VAR_0 + 1))
     VAR_0 += 3;
    else
     return 0;
   }
   break;
  case '\\':
   if (VAR_4 != '\\')
    return 0;
   if (*++VAR_0 != '\\')
    return 0;
   break;
  case '+':
   if (!FUNC_0(VAR_4))
    return 0;
   break;
  case 'x':
   if (!FUNC_1(VAR_4))
    return 0;
   break;
  case 'a':
   if (!FUNC_3(VAR_4))
    return 0;
   break;
  case '0':
  case '1':
  case '2':
  case '3':
   if (VAR_4 == '\\' && FUNC_4(VAR_0 + 1)
       && FUNC_2(VAR_0 + 1, VAR_2, 3) == 0) {
    VAR_0 += 3;
    VAR_2 += 2;
    break;
   }
   return 0;
  case '*':
  case '@':
   for (VAR_5 = 0; VAR_5 <= VAR_1 - VAR_0; VAR_5++) {
    if (FUNC_5(
          VAR_0 + VAR_5, VAR_1,
          VAR_2 + 1, VAR_3))
     return 1;
    VAR_4 = VAR_0[VAR_5];
    if (VAR_4 == '.' && *VAR_2 == '@')
     break;
    if (VAR_4 != '\\')
     continue;
    if (VAR_0[VAR_5 + 1] == '\\')
     VAR_5++;
    else if (FUNC_4(VAR_0 + VAR_5 + 1))
     VAR_5 += 3;
    else
     break;
   }
   return 0;
  default:
   VAR_6 = 0;
   VAR_4 = *VAR_2;
   if (VAR_4 == '$') {
    while (FUNC_0(VAR_0[VAR_6]))
     VAR_6++;
   } else if (VAR_4 == 'X') {
    while (FUNC_1(VAR_0[VAR_6]))
     VAR_6++;
   } else if (VAR_4 == 'A') {
    while (FUNC_3(VAR_0[VAR_6]))
     VAR_6++;
   }
   for (VAR_5 = 1; VAR_5 <= VAR_6; VAR_5++) {
    if (FUNC_5(
          VAR_0 + VAR_5, VAR_1,
          VAR_2 + 1, VAR_3))
     return 1;
   }
   return 0;
  }
  VAR_0++;
  VAR_2++;
 }
 while (*VAR_2 == '\\' &&
        (*(VAR_2 + 1) == '*' || *(VAR_2 + 1) == '@'))
  VAR_2 += 2;
 return VAR_0 == VAR_1 && VAR_2 == VAR_3;
}
