
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_2, char *VAR_3[])
{
 int VAR_4;

 FUNC_3("install_format");

 VAR_4 = 1;
 while (1) {
  if (VAR_2 == VAR_4) {
   VAR_1 =
       "usage: install [--format] <URL>";
   return (VAR_0);
  }
  if (!FUNC_2(VAR_3[VAR_4], "--format")) {
   FUNC_1("install_format", "yes", 1);
   VAR_4++;
   continue;
  }
  break;
 }

 return (FUNC_0(VAR_3[VAR_4]));
}
