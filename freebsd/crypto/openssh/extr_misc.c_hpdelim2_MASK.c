
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static char *
FUNC_3(char **VAR_0, char *VAR_1)
{
 char *VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_3 = VAR_2 = *VAR_0;
 if (*VAR_2 == '[') {
  if ((VAR_2 = FUNC_0(VAR_2, ']')) == ((void*)0))
   return ((void*)0);
  else
   VAR_2++;
 } else if ((VAR_2 = FUNC_2(VAR_2, ":/")) == ((void*)0))
  VAR_2 = *VAR_0 + FUNC_1(*VAR_0);

 switch (*VAR_2) {
 case '\0':
  *VAR_0 = ((void*)0);
  break;

 case ':':
 case '/':
  if (VAR_1 != ((void*)0))
   *VAR_1 = *VAR_2;
  *VAR_2 = '\0';
  *VAR_0 = VAR_2 + 1;
  break;

 default:
  return ((void*)0);
 }

 return VAR_3;
}
