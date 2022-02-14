
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 double VAR_1 ;
 scalar_t__ VAR_2 ;
 double FUNC_0 (char const*,char**) ;

int FUNC_1(const char *VAR_3)
{
 double VAR_4;
 char *VAR_5;
 VAR_2 = 0;
 VAR_4 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_5 == VAR_3 || VAR_4 == VAR_1 || VAR_2 == VAR_0)
  return 0;
 while (*VAR_5 == ' ' || *VAR_5 == '\t' || *VAR_5 == '\n')
  VAR_5++;
 if (*VAR_5 == '\0')
  return 1;
 else
  return 0;
}
