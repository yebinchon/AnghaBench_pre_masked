
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_2, int *VAR_3)
{
 char *VAR_4;
 unsigned long VAR_5;

 if (*VAR_2 == '\0')
  return -1;
 VAR_4 = ((void*)0);
 VAR_1 = 0;
 VAR_5 = FUNC_0(VAR_2, &VAR_4, 10);
 if (VAR_1 == 0 && VAR_4 && *VAR_4 == '\0' && VAR_5 <= VAR_0) {
  *VAR_3 = VAR_5;
  return 0;
 } else
  return -1;
}
