
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (char**,size_t,int) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, char ***VAR_1, size_t *VAR_2)
{
 char **VAR_3;

 if ((VAR_3 = FUNC_0(*VAR_1, *VAR_2 + 1, sizeof(*VAR_3))) == ((void*)0))
  return -1;
 VAR_3[(*VAR_2)] = VAR_0;
 (*VAR_2)++;
 *VAR_1 = VAR_3;
 return 0;
}
