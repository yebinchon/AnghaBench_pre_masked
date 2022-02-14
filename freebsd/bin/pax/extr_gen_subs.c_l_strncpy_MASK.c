
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(char *VAR_0, const char *VAR_1, int VAR_2)
{
 char *VAR_3;
 char *VAR_4;

 VAR_3 = VAR_0 + VAR_2;
 VAR_4 = VAR_0;
 while ((VAR_0 < VAR_3) && (*VAR_1 != '\0'))
  *VAR_0++ = *VAR_1++;
 VAR_2 = VAR_0 - VAR_4;
 while (VAR_0 < VAR_3)
  *VAR_0++ = '\0';
 return(VAR_2);
}
