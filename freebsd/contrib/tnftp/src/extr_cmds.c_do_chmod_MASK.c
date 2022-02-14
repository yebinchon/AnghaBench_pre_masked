
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,char*) ;

void
FUNC_3(int VAR_1, char *VAR_2[])
{

 if (VAR_1 == 0 || (VAR_1 == 1 && !FUNC_1(&VAR_1, &VAR_2, "mode")))
  goto usage;
 if ((VAR_1 < 3 && !FUNC_1(&VAR_1, &VAR_2, "remote-file")) || VAR_1 > 3) {
 usage:
  FUNC_0("usage: %s mode remote-file\n", VAR_2[0]);
  VAR_0 = -1;
  return;
 }
 (void)FUNC_2("SITE CHMOD %s %s", VAR_2[1], VAR_2[2]);
}
