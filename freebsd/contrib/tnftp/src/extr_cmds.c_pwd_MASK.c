
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;

void
FUNC_3(int VAR_3, char *VAR_4[])
{

 VAR_0 = -1;
 if (VAR_3 != 1) {
  FUNC_0("usage: %s\n", VAR_4[0]);
  return;
 }
 if (! VAR_1[0])
  FUNC_2();
 if (! VAR_1[0])
  FUNC_1(VAR_2, "Unable to determine remote directory\n");
 else {
  FUNC_1(VAR_2, "Remote directory: %s\n", VAR_1);
  VAR_0 = 0;
 }
}
