
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

char *
FUNC_2(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 char VAR_3, VAR_4;
 size_t VAR_5;

 if ((VAR_3 = *VAR_1++) != '\0') {
  VAR_5 = FUNC_0(VAR_1);
  do {
   do {
    if (VAR_2-- < 1 || (VAR_4 = *VAR_0++) == '\0')
     return (((void*)0));
   } while (VAR_4 != VAR_3);
   if (VAR_5 > VAR_2)
    return (((void*)0));
  } while (FUNC_1(VAR_0, VAR_1, VAR_5) != 0);
  VAR_0--;
 }
 return ((char *)VAR_0);
}
