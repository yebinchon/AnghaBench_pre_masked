
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_0, const char *VAR_1)
{
 char VAR_2[64];
 const char *VAR_3;


 if (VAR_1 == ((void*)0) || *VAR_1 == '\0') {
  FUNC_3(VAR_0, "PaxHeader/blank");
  return (VAR_0);
 }


 VAR_3 = VAR_1 + FUNC_4(VAR_1);
 for (;;) {

  if (VAR_3 > VAR_1 && VAR_3[-1] == '/') {
   --VAR_3;
   continue;
  }

  if (VAR_3 > VAR_1 + 1 && VAR_3[-1] == '.'
      && VAR_3[-2] == '/') {
   --VAR_3;
   continue;
  }
  break;
 }



 if (VAR_3 == VAR_1) {
  FUNC_3(VAR_0, "/PaxHeader/rootdir");
  return (VAR_0);
 }


 if (*VAR_1 == '.' && VAR_3 == VAR_1 + 1) {
  FUNC_3(VAR_0, "PaxHeader/currentdir");
  return (VAR_0);
 }
 FUNC_3(VAR_2, "PaxHeader");



 FUNC_0(VAR_0, VAR_1, VAR_3 - VAR_1, VAR_2);

 return (VAR_0);
}
