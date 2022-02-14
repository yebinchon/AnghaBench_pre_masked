
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, const char* VAR_1)
{
 char* VAR_2 = FUNC_1(VAR_0, VAR_1);
 if(VAR_2)
  return (int)(VAR_2-VAR_0)+(int)FUNC_0(VAR_1);
 return -1;
}
