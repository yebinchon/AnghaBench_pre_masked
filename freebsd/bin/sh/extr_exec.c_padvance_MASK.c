
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (size_t) ;
 size_t FUNC_4 (char const*) ;

char *
FUNC_5(const char **VAR_0, const char **VAR_1, const char *VAR_2)
{
 const char *VAR_3, *VAR_4;
 char *VAR_5;
 size_t VAR_6, VAR_7;

 if (*VAR_0 == ((void*)0))
  return ((void*)0);
 VAR_4 = *VAR_0;
 if (VAR_1 != ((void*)0))
  for (VAR_3 = VAR_4; *VAR_3 && *VAR_3 != ':' && *VAR_3 != '%'; VAR_3++)
   ;
 else
  for (VAR_3 = VAR_4; *VAR_3 && *VAR_3 != ':'; VAR_3++)
   ;
 VAR_7 = FUNC_4(VAR_2);
 VAR_6 = VAR_3 - VAR_4 + VAR_7 + 2;
 FUNC_1(VAR_5);
 FUNC_0(VAR_6, VAR_5);
 if (VAR_3 != VAR_4) {
  FUNC_2(VAR_5, VAR_4, VAR_3 - VAR_4);
  VAR_5 += VAR_3 - VAR_4;
  *VAR_5++ = '/';
 }
 FUNC_2(VAR_5, VAR_2, VAR_7 + 1);
 if (VAR_1 != ((void*)0)) {
  if (*VAR_3 == '%') {
   *VAR_1 = ++VAR_3;
   while (*VAR_3 && *VAR_3 != ':') VAR_3++;
  } else
   *VAR_1 = ((void*)0);
 }
 if (*VAR_3 == ':')
  *VAR_0 = VAR_3 + 1;
 else
  *VAR_0 = ((void*)0);
 return FUNC_3(VAR_6);
}
