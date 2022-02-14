
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*) ;

char *
FUNC_2(char **VAR_0, const char *VAR_1, int VAR_2)
{
 char *VAR_3;
 const char *VAR_4;
 int VAR_5, VAR_6;
 size_t VAR_7;
 char *VAR_8;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return ((void*)0);

 if ((VAR_3 = *VAR_0) == ((void*)0))
  return ((void*)0);
 VAR_7 = FUNC_1(VAR_3) + 1;
 for (VAR_8 = VAR_3;;) {
  VAR_5 = *VAR_3++;
  VAR_7--;
  while (VAR_2 != '\0' && VAR_5 == VAR_2) {
   FUNC_0(VAR_3 - 1, VAR_3, VAR_7);
   VAR_5 = *VAR_3++;
   VAR_7--;
  }
  VAR_4 = VAR_1;
  do {
   if ((VAR_6 = *VAR_4++) == VAR_5) {
    if (VAR_5 == '\0')
     VAR_3 = ((void*)0);
    else
     VAR_3[-1] = '\0';
    *VAR_0 = VAR_3;
    return VAR_8;
   }
  } while (VAR_6 != '\0');
 }
}
