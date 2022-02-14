
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

char *
FUNC_3(char *VAR_0, const char *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, '\0', VAR_2);
 if (FUNC_2(VAR_1, "/dev/", 5) == 0)
  FUNC_1(VAR_0, VAR_1 + 5, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
 return (VAR_0);
}
