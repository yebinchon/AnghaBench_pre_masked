
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 size_t FUNC_1 (char*) ;

char *FUNC_2(char *VAR_0)
{
 size_t VAR_1 = FUNC_1(VAR_0);
 char *VAR_2;

 if (!VAR_1)
  return VAR_0;

 VAR_2 = VAR_0 + VAR_1 - 1;
 while (VAR_2 >= VAR_0 && FUNC_0(*VAR_2))
  VAR_2--;
 *(VAR_2 + 1) = '\0';

 return VAR_0;
}
