
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,char***,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_2 ;

void
FUNC_3(int VAR_3, char **VAR_4)
{

 if (VAR_3 < 2 && !FUNC_0(&VAR_3, &VAR_4, "directory-name")) {
  FUNC_2("usage: %s directory-name\n", VAR_4[0]);
  VAR_1 = -1;
  return;
 }
 if (FUNC_1("MKD %s", VAR_4[1]) == VAR_0 && VAR_1 == 500) {
  if (VAR_2)
   FUNC_2("MKD command not recognized, trying XMKD\n");
  FUNC_1("XMKD %s", VAR_4[1]);
 }
}
