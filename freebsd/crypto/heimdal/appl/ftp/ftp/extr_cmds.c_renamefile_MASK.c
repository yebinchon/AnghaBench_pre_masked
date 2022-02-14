
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,char***,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

void
FUNC_3(int VAR_2, char **VAR_3)
{

 if (VAR_2 < 2 && !FUNC_0(&VAR_2, &VAR_3, "from-name"))
  goto usage;
 if (VAR_2 < 3 && !FUNC_0(&VAR_2, &VAR_3, "to-name")) {
usage:
  FUNC_2("%s from-name to-name\n", VAR_3[0]);
  VAR_1 = -1;
  return;
 }
 if (FUNC_1("RNFR %s", VAR_3[1]) == VAR_0)
  FUNC_1("RNTO %s", VAR_3[2]);
}
