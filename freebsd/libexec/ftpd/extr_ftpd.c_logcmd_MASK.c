
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wd ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_6(char *VAR_6, char *VAR_7, char *VAR_8, off_t VAR_9)
{
 char *VAR_10 = ((void*)0);
 char VAR_11[VAR_1 + 1];

 if (VAR_5 <= 1)
  return;

 if (FUNC_2(VAR_11, sizeof(VAR_11) - 1) == ((void*)0))
  FUNC_3(VAR_11, FUNC_4(VAR_3));

 FUNC_0(&VAR_10, "%s", VAR_6);
 if (VAR_7)
  FUNC_0(&VAR_10, " %s", VAR_7);
 if (VAR_8)
  FUNC_0(&VAR_10, " %s", VAR_8);
 if (VAR_9 >= 0)
  FUNC_0(&VAR_10, " = %jd bytes", (intmax_t)VAR_9);
 FUNC_0(&VAR_10, " (wd: %s", VAR_11);
 if (VAR_4 || VAR_2)
  FUNC_0(&VAR_10, "; chrooted");
 FUNC_0(&VAR_10, ")");
 FUNC_5(VAR_0, "%s", VAR_10);
 FUNC_1(VAR_10);
}
