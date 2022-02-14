
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,size_t,size_t,int) ;

__attribute__((used)) static int
FUNC_1(char **VAR_0, size_t *VAR_1, size_t VAR_2, char **VAR_3, size_t VAR_4)
{
 char *VAR_5;
 size_t VAR_6;

 if (*VAR_3 + VAR_4 < *VAR_0 + *VAR_1)
  return 0;
 VAR_6 = *VAR_1 + 128;
 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;
 if ((VAR_5 = FUNC_0(*VAR_0, *VAR_1, VAR_6, 1)) == ((void*)0))
  return -1;
 *VAR_3 = VAR_5 + (*VAR_3 - *VAR_0);
 *VAR_0 = VAR_5;
 *VAR_1 = VAR_6;
 return 0;
}
