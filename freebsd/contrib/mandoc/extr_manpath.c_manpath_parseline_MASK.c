
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct manpaths {int dummy; } ;


 int FUNC_0 (struct manpaths*,char*,char) ;
 char* FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct manpaths *VAR_0, char *VAR_1, char VAR_2)
{
 char *VAR_3;

 if (((void*)0) == VAR_1)
  return;

 for (VAR_3 = FUNC_1(VAR_1, ":"); VAR_3; VAR_3 = FUNC_1(((void*)0), ":"))
  FUNC_0(VAR_0, VAR_3, VAR_2);
}
