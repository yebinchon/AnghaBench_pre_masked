
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int VAR_6 ;

int
FUNC_5(int VAR_7, char *VAR_8[])
{

 if (VAR_7 != 4)
  FUNC_0(1, "usage");

 VAR_4 = VAR_8[1];
 VAR_5 = FUNC_3(VAR_8[1]);

 if (FUNC_2(VAR_8[3], "chdir") == 0)
  VAR_6 = VAR_2;
 else if (FUNC_2(VAR_8[3], "fchdir") == 0)
  VAR_6 = VAR_3;
 else
  FUNC_0(VAR_0, "invalid chdir type");

 if (FUNC_2(VAR_8[2], "simple") == 0)
  FUNC_1();
 if (FUNC_2(VAR_8[2], "symlink") == 0)
  FUNC_4();

 return VAR_1;
}
