
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_3(int VAR_5, char *VAR_6[])
{
 int VAR_7 = VAR_4;

 if (VAR_5 == 0) {
  FUNC_0("usage: %s\n", VAR_6[0]);
  VAR_1 = -1;
  return;
 }
 if (! VAR_2[VAR_0]) {
  FUNC_2(VAR_3,
      "FEAT is not supported by the remote server.\n");
  return;
 }
 VAR_4 = 1;
 (void)FUNC_1("FEAT");
 VAR_4 = VAR_7;
}
