
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;



__attribute__((used)) static ssize_t
FUNC_0(const char *VAR_0, ssize_t VAR_1, ssize_t *VAR_2)
{
 ssize_t VAR_3;

 VAR_3 = 0;
 while (VAR_3 < VAR_1) {
  switch (*VAR_0) {
  case '\0':
   if (VAR_2 != ((void*)0))
    *VAR_2 = 0;
   return (-1);
  case '\r':
   if (VAR_1-VAR_3 > 1 && VAR_0[1] == '\n') {
    if (VAR_2 != ((void*)0))
     *VAR_2 = 2;
    return (VAR_3+2);
   }

  case '\n':
   if (VAR_2 != ((void*)0))
    *VAR_2 = 1;
   return (VAR_3+1);
  default:
   VAR_0++;
   VAR_3++;
   break;
  }
 }
 if (VAR_2 != ((void*)0))
  *VAR_2 = 0;
 return (VAR_1);
}
