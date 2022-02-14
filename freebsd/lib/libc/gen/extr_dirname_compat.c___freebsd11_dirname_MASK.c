
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*) ;

char *
FUNC_3(char *VAR_3)
{
 static char *VAR_4 = ((void*)0);
 size_t VAR_5;
 const char *VAR_6;

 if (VAR_4 == ((void*)0)) {
  VAR_4 = (char *)FUNC_0(VAR_1);
  if (VAR_4 == ((void*)0))
   return(((void*)0));
 }


 if (VAR_3 == ((void*)0) || *VAR_3 == '\0') {
  VAR_4[0] = '.';
  VAR_4[1] = '\0';
  return (VAR_4);
 }


 VAR_6 = VAR_3 + FUNC_2(VAR_3) - 1;
 while (VAR_6 > VAR_3 && *VAR_6 == '/')
  VAR_6--;


 while (VAR_6 > VAR_3 && *VAR_6 != '/')
  VAR_6--;


 if (VAR_6 == VAR_3) {
  VAR_4[0] = *VAR_6 == '/' ? '/' : '.';
  VAR_4[1] = '\0';
  return (VAR_4);
 } else {

  do {
   VAR_6--;
  } while (VAR_6 > VAR_3 && *VAR_6 == '/');
 }

 VAR_5 = VAR_6 - VAR_3 + 1;
 if (VAR_5 >= VAR_1) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }
 FUNC_1(VAR_4, VAR_3, VAR_5);
 VAR_4[VAR_5] = '\0';
 return (VAR_4);
}
