
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0, const char *VAR_1, char **VAR_2)
{
 char *VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_0 == ((void*)0) && (VAR_0 = *VAR_2) == ((void*)0))
  return (((void*)0));




cont:
 VAR_5 = *VAR_0++;
 for (VAR_3 = (char *)VAR_1; (VAR_6 = *VAR_3++) != 0;) {
  if (VAR_5 == VAR_6)
   goto cont;
 }

 if (VAR_5 == 0) {
  *VAR_2 = ((void*)0);
  return (((void*)0));
 }
 VAR_4 = VAR_0 - 1;





 for (;;) {
  VAR_5 = *VAR_0++;
  VAR_3 = (char *)VAR_1;
  do {
   if ((VAR_6 = *VAR_3++) == VAR_5) {
    if (VAR_5 == 0)
     VAR_0 = ((void*)0);
    else
     VAR_0[-1] = '\0';
    *VAR_2 = VAR_0;
    return (VAR_4);
   }
  } while (VAR_6 != 0);
 }

}
