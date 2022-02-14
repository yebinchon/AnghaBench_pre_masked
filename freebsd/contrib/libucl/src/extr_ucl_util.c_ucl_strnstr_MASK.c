
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

char *
FUNC_2 (const char *VAR_0, const char *VAR_1, int VAR_2)
{
 char VAR_3, VAR_4;
 int VAR_5;

 if ((VAR_3 = *VAR_1++) != 0) {
  VAR_5 = FUNC_0 (VAR_1);
  do {
   do {
    if ((VAR_4 = *VAR_0++) == 0 || VAR_2-- == 0)
     return (((void*)0));
   } while (VAR_4 != VAR_3);
  } while (FUNC_1 (VAR_0, VAR_1, VAR_5) != 0);
  VAR_0--;
 }
 return ((char *)VAR_0);
}
