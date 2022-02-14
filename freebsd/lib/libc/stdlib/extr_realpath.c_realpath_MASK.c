
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (char const*,char*) ;

char *
FUNC_3(const char * __restrict VAR_4, char * __restrict VAR_5)
{
 char *VAR_6, *VAR_7;

 if (VAR_4 == ((void*)0)) {
  VAR_3 = VAR_0;
  return (((void*)0));
 }
 if (VAR_4[0] == '\0') {
  VAR_3 = VAR_1;
  return (((void*)0));
 }
 if (VAR_5 != ((void*)0)) {
  VAR_6 = ((void*)0);
 } else {
  VAR_6 = VAR_5 = FUNC_1(VAR_2);
  if (VAR_5 == ((void*)0))
   return (((void*)0));
 }
 VAR_7 = FUNC_2(VAR_4, VAR_5);
 if (VAR_7 == ((void*)0))
  FUNC_0(VAR_6);
 return (VAR_7);
}
