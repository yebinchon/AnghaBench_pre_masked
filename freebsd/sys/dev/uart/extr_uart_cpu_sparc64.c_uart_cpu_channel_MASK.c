
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int alias ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static int
FUNC_6(char *VAR_0)
{
 char VAR_1[64];
 phandle_t VAR_2;
 int VAR_3;
 const char *VAR_4;

 FUNC_3(VAR_1, VAR_0);
 if ((VAR_2 = FUNC_0("/aliases")) != -1)
  (void)FUNC_1(VAR_2, VAR_0, VAR_1, sizeof(VAR_1));
 VAR_3 = FUNC_4(VAR_1);
 if ((VAR_4 = FUNC_5(VAR_1, ':')) == ((void*)0))
  return (0);
 VAR_4++;
 if (VAR_4 - VAR_1 == VAR_3 - 1 && (*VAR_4 == 'a' || *VAR_4 == 'b'))
  return (*VAR_4 - 'a' + 1);
 if (FUNC_2(VAR_4, "ssp") == 0)
  return (1);
 return (0);
}
