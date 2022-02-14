
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;

void
FUNC_2(int VAR_3, char *VAR_4[])
{

 if (VAR_3 != 2) {
  FUNC_0("usage: %s struct-mode\n", VAR_4[0]);
  VAR_0 = -1;
  return;
 }
 FUNC_1(VAR_2, "We only support %s structure, sorry.\n", VAR_1);
 VAR_0 = -1;
}
