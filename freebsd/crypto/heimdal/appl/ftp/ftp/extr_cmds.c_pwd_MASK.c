
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;

void
FUNC_2(int VAR_3, char **VAR_4)
{
 int VAR_5 = VAR_2;




 VAR_2 = 1;
 if (FUNC_0("PWD") == VAR_0 && VAR_1 == 500) {
  FUNC_1("PWD command not recognized, trying XPWD\n");
  FUNC_0("XPWD");
 }
 VAR_2 = VAR_5;
}
