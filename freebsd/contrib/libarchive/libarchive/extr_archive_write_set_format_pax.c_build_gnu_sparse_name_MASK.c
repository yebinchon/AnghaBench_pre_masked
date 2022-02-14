
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;


 if (VAR_1 == ((void*)0) || *VAR_1 == '\0') {
  FUNC_1(VAR_0, "GNUSparseFile/blank");
  return (VAR_0);
 }


 VAR_2 = VAR_1 + FUNC_2(VAR_1);
 for (;;) {

  if (VAR_2 > VAR_1 && VAR_2[-1] == '/') {
   --VAR_2;
   continue;
  }

  if (VAR_2 > VAR_1 + 1 && VAR_2[-1] == '.'
      && VAR_2[-2] == '/') {
   --VAR_2;
   continue;
  }
  break;
 }



 FUNC_0(VAR_0, VAR_1, VAR_2 - VAR_1, "GNUSparseFile.0");

 return (VAR_0);
}
