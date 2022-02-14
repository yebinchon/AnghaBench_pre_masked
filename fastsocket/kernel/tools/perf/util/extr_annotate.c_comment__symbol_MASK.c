
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 char* FUNC_0 (char*,char) ;
 char* FUNC_1 (char*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, char *VAR_1, u64 *VAR_2, char **VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;

 if (FUNC_2(VAR_0, "(%rip)") == ((void*)0))
  return 0;

 *VAR_2 = FUNC_3(VAR_1, &VAR_4, 16);
 VAR_5 = FUNC_0(VAR_4, '<');
 if (VAR_5 == ((void*)0))
  return -1;

 VAR_5++;

 VAR_6 = FUNC_0(VAR_5, '>');
 if (VAR_6 == ((void*)0))
  return 0;

 *VAR_6 = '\0';
 *VAR_3 = FUNC_1(VAR_5);
 *VAR_6 = '>';

 return 0;
}
