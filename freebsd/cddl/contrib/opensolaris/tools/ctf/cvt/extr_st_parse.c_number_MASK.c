
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, int *VAR_1)
{
 char *VAR_2;

 *VAR_1 = (int)FUNC_1(VAR_0, &VAR_2, 10);
 if (VAR_2 == VAR_0)
  FUNC_0("number", "<number>", VAR_0);
 return (VAR_2);
}
