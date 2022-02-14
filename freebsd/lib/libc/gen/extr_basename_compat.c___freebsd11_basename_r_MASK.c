
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char const*) ;

char *
FUNC_2(const char *VAR_3, char *VAR_4)
{
 const char *VAR_5, *VAR_6;
 size_t VAR_7;


 if (VAR_3 == ((void*)0) || *VAR_3 == '\0') {
  VAR_4[0] = '.';
  VAR_4[1] = '\0';
  return (VAR_4);
 }


 VAR_5 = VAR_3 + FUNC_1(VAR_3) - 1;
 while (VAR_5 > VAR_3 && *VAR_5 == '/')
  VAR_5--;


 if (VAR_5 == VAR_3 && *VAR_5 == '/') {
  VAR_4[0] = '/';
  VAR_4[1] = '\0';
  return (VAR_4);
 }


 VAR_6 = VAR_5;
 while (VAR_6 > VAR_3 && *(VAR_6 - 1) != '/')
  VAR_6--;

 VAR_7 = VAR_5 - VAR_6 + 1;
 if (VAR_7 >= VAR_1) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }
 FUNC_0(VAR_4, VAR_6, VAR_7);
 VAR_4[VAR_7] = '\0';
 return (VAR_4);
}
