
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_3 ;

void
FUNC_3(int VAR_4, char *VAR_5[])
{

 if (VAR_4 == 0 || (VAR_4 == 1 && !FUNC_1(&VAR_4, &VAR_5, "from-name")))
  goto usage;
 if ((VAR_4 < 3 && !FUNC_1(&VAR_4, &VAR_5, "to-name")) || VAR_4 > 3) {
 usage:
  FUNC_0("usage: %s from-name to-name\n", VAR_5[0]);
  VAR_2 = -1;
  return;
 }
 if (FUNC_2("RNFR %s", VAR_5[1]) == VAR_1 &&
     FUNC_2("RNTO %s", VAR_5[2]) == VAR_0)
  VAR_3 = 1;
}
