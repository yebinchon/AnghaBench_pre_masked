
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct dirent {char* d_name; int d_namlen; scalar_t__ d_type; } ;
struct arglist {int dummy; } ;
typedef int DIR ;


 char const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct arglist*,int ) ;
 int FUNC_1 (int *) ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (char*,char*,int) ;
 int * FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(char *VAR_6, char *VAR_7, struct arglist *VAR_8)
{
 const char *VAR_9;
 const char *VAR_10;
 const char *VAR_11;
 char *VAR_12;
 int VAR_13;
 struct stat VAR_14;
 DIR *VAR_15;
 struct dirent *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_13 = 0;
 VAR_11 = VAR_7;
 for (VAR_9 = VAR_7; VAR_19 = 0, *VAR_9; VAR_9 += VAR_19 + 1) {
  if (*VAR_9 == '*' || *VAR_9 == '?')
   VAR_13 = 1;
  else if (*VAR_9 == '[') {
   VAR_10 = VAR_9 + 1;
   if (*VAR_10 == '!' || *VAR_10 == '^')
    VAR_10++;
   for (;;) {
    if (*VAR_10 == VAR_0)
     VAR_10++;
    if (*VAR_10 == '/' || *VAR_10 == '\0')
     break;
    if (*++VAR_10 == ']') {
     VAR_13 = 1;
     break;
    }
   }
  } else if (*VAR_9 == '\0')
   break;
  else {
   if (*VAR_9 == VAR_0)
    VAR_19++;
   if (VAR_9[VAR_19] == '/') {
    if (VAR_13)
     break;
    VAR_11 = VAR_9 + VAR_19 + 1;
   }
  }
 }
 if (VAR_13 == 0) {
  if (VAR_6 != VAR_4)
   VAR_13++;
  for (VAR_9 = VAR_7 ; ; VAR_9++) {
   if (*VAR_9 == VAR_0)
    VAR_9++;
   *VAR_6++ = *VAR_9;
   if (*VAR_9 == '\0')
    break;
   if (VAR_6 == VAR_5)
    return;
  }
  if (VAR_13 == 0 || FUNC_3(VAR_4, &VAR_14) >= 0)
   FUNC_0(VAR_8, FUNC_8(VAR_4));
  return;
 }
 VAR_12 = VAR_7 + (VAR_9 - VAR_7);
 if (VAR_11 != VAR_7) {
  VAR_9 = VAR_7;
  while (VAR_9 < VAR_11) {
   if (*VAR_9 == VAR_0)
    VAR_9++;
   *VAR_6++ = *VAR_9++;
   if (VAR_6 == VAR_5)
    return;
  }
 }
 if (VAR_6 == VAR_4) {
  VAR_9 = ".";
 } else if (VAR_6 == VAR_4 + 1 && *VAR_4 == '/') {
  VAR_9 = "/";
 } else {
  VAR_9 = VAR_4;
  VAR_6[-1] = '\0';
 }
 if ((VAR_15 = FUNC_5(VAR_9)) == ((void*)0))
  return;
 if (VAR_6 != VAR_4)
  VAR_6[-1] = '/';
 if (*VAR_12 == 0) {
  VAR_17 = 1;
 } else {
  VAR_17 = 0;
  *VAR_12 = '\0';
  VAR_12 += VAR_19 + 1;
 }
 VAR_18 = 0;
 VAR_9 = VAR_11;
 if (*VAR_9 == VAR_0)
  VAR_9++;
 if (*VAR_9 == '.')
  VAR_18++;
 while (! FUNC_2() && (VAR_16 = FUNC_7(VAR_15)) != ((void*)0)) {
  if (VAR_16->d_name[0] == '.' && ! VAR_18)
   continue;
  if (FUNC_6(VAR_11, VAR_16->d_name)) {
   VAR_20 = VAR_16->d_namlen;
   if (VAR_6 + VAR_20 + 1 > VAR_5)
    continue;
   FUNC_4(VAR_6, VAR_16->d_name, VAR_20 + 1);
   if (VAR_17)
    FUNC_0(VAR_8, FUNC_8(VAR_4));
   else {
    if (VAR_16->d_type != VAR_3 &&
        VAR_16->d_type != VAR_1 &&
        VAR_16->d_type != VAR_2)
     continue;
    if (VAR_6 + VAR_20 + 2 > VAR_5)
     continue;
    VAR_6[VAR_20] = '/';
    VAR_6[VAR_20 + 1] = '\0';
    FUNC_9(VAR_6 + VAR_20 + 1, VAR_12, VAR_8);
   }
  }
 }
 FUNC_1(VAR_15);
 if (! VAR_17)
  VAR_12[-VAR_19 - 1] = VAR_19 ? VAR_0 : '/';
}
