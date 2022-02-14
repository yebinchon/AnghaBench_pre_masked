
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;


 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*,int *,int ) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;
 char VAR_3[256];
 char *VAR_4;

 if (VAR_1 == ((void*)0))
  return -1;

 VAR_4 = FUNC_1(VAR_0, ';');
 VAR_3[0] = ' ';
 if (VAR_4 == ((void*)0))
  FUNC_3(VAR_3 + 1, VAR_0, sizeof(VAR_3) - 1);
 else {
  FUNC_0(VAR_3 + 1, VAR_0, VAR_4 - VAR_0);
  VAR_3[VAR_4 - VAR_0 + 1] = '\0';
 }
 FUNC_2(VAR_3, "=", sizeof(VAR_3));
 if (FUNC_5(VAR_3 + 1, VAR_1, FUNC_4(VAR_3 + 1)) == 0)
  VAR_2 = FUNC_7(VAR_1 + FUNC_4(VAR_3 + 1), ((void*)0), 0);
 else {
  VAR_4 = FUNC_6(VAR_1, VAR_3);
  if (VAR_4 == ((void*)0))
   VAR_2 = -1;
  else
   VAR_2 = FUNC_7(VAR_4 + FUNC_4(VAR_3), ((void*)0), 0);
 }
 return VAR_2;
}
