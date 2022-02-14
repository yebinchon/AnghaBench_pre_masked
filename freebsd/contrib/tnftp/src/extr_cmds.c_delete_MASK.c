
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_2 ;

void
FUNC_3(int VAR_3, char *VAR_4[])
{

 if (VAR_3 == 0 || VAR_3 > 2 ||
     (VAR_3 == 1 && !FUNC_1(&VAR_3, &VAR_4, "remote-file"))) {
  FUNC_0("usage: %s remote-file\n", VAR_4[0]);
  VAR_1 = -1;
  return;
 }
 if (FUNC_2("DELE %s", VAR_4[1]) == VAR_0)
  VAR_2 = 1;
}
