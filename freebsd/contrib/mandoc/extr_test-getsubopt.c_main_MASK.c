
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char* const*,char**) ;

int
FUNC_1(void)
{
 char VAR_0[] = "k=v";
 char *VAR_1 = VAR_0;
 char VAR_2[] = "k";
 char *const VAR_3[] = { VAR_2, ((void*)0) };
 char *VAR_4 = ((void*)0);
 return ! (FUNC_0(&VAR_1, VAR_3, &VAR_4) == 0
     && VAR_4 == VAR_0+2 && VAR_1 == VAR_0+3);
}
