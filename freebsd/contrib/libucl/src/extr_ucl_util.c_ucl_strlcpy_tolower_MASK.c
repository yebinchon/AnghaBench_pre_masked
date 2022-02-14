
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (int ) ;

size_t
FUNC_1 (char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 char *VAR_3 = VAR_0;
 const char *VAR_4 = VAR_1;
 size_t VAR_5 = VAR_2;


 if (VAR_5 != 0) {
  while (--VAR_5 != 0) {
   if ((*VAR_3++ = FUNC_0 (*VAR_4++)) == '\0') {
    break;
   }
  }
 }

 if (VAR_5 == 0 && VAR_2 != 0) {
  *VAR_3 = '\0';
 }

 return (VAR_4 - VAR_1);
}
