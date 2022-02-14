
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static size_t
FUNC_1(const char *VAR_0, const char *VAR_1) {
 const char *VAR_2 = VAR_0;

 while (*VAR_0 != '\0') {
  if (VAR_1 != ((void*)0) && FUNC_0(VAR_0, VAR_1) == 1)
   return (VAR_0 - VAR_2 - (VAR_0 > VAR_2));
  while (*VAR_0 != '\0') {
   if (*VAR_0 == '\\') {
    VAR_0++;

    if (*VAR_0 == '\0')
     break;
   } else if (*VAR_0 == '.') {
    VAR_0++;
    break;
   }
   VAR_0++;
  }
 }
 return (VAR_0 - VAR_2);
}
