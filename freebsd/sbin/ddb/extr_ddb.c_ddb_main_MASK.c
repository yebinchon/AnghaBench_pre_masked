
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int,char**) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 () ;

void
FUNC_6(int VAR_0, char *VAR_1[])
{

 if (VAR_0 < 1)
  FUNC_5();

 if (FUNC_4(VAR_1[0], "capture") == 0)
  FUNC_0(VAR_0, VAR_1);
 else if (FUNC_4(VAR_1[0], "script") == 0)
  FUNC_1(VAR_0, VAR_1);
 else if (FUNC_4(VAR_1[0], "scripts") == 0)
  FUNC_2(VAR_0, VAR_1);
 else if (FUNC_4(VAR_1[0], "unscript") == 0)
  FUNC_3(VAR_0, VAR_1);
 else
  FUNC_5();
}
