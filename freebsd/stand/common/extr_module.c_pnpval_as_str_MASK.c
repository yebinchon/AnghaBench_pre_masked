
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char const*,int) ;
 char* FUNC_8 (char const*,char*) ;

__attribute__((used)) static char *
FUNC_9(const char *VAR_0, const char *VAR_1)
{
 static char VAR_2[256];
 char VAR_3[256];
 char *VAR_4;

 if (VAR_1 == ((void*)0)) {
  *VAR_2 = '\0';
  return VAR_2;
 }

 VAR_4 = FUNC_2(VAR_0, ';');
 VAR_3[0] = ' ';
 if (VAR_4 == ((void*)0))
  FUNC_5(VAR_3 + 1, VAR_0, sizeof(VAR_3) - 1);
 else {
  FUNC_0(VAR_3 + 1, VAR_0, VAR_4 - VAR_0);
  VAR_3[VAR_4 - VAR_0 + 1] = '\0';
 }
 FUNC_4(VAR_3, "=", sizeof(VAR_3));
 if (FUNC_7(VAR_3 + 1, VAR_1, FUNC_6(VAR_3 + 1)) == 0)
  FUNC_1(VAR_2, VAR_1 + FUNC_6(VAR_3 + 1));
 else {
  VAR_4 = FUNC_8(VAR_1, VAR_3);
  if (VAR_4 == ((void*)0))
   FUNC_3(VAR_2, "MISSING");
  else
   FUNC_1(VAR_2, VAR_4 + FUNC_6(VAR_3));
 }
 return VAR_2;
}
