
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,char const*,char*,int) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int
FUNC_3(phandle_t VAR_1, const char *VAR_2, phandle_t *VAR_3)
{
 char VAR_4[64];
 char *VAR_5;

 if (FUNC_1(VAR_1, VAR_2, VAR_4, sizeof(VAR_4)) <= 0)
  return (VAR_0);





 VAR_5 = FUNC_2(VAR_4, ':');
 if (VAR_5 != ((void*)0))
  *VAR_5 = '\0';
 if ((*VAR_3 = FUNC_0(VAR_4)) == -1)
  return (VAR_0);

 return (0);
}
