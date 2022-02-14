
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,char*) ;
 size_t VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_3(int VAR_5, char *VAR_6[])
{
 int VAR_7 = VAR_4;

 if (VAR_5 < 1 || VAR_5 > 2) {
  FUNC_1("usage: %s [remote-path]\n", VAR_6[0]);
  VAR_1 = -1;
  return;
 }
 if (! VAR_2[VAR_0]) {
  FUNC_2(VAR_3,
      "MLST is not supported by the remote server.\n");
  return;
 }
 VAR_4 = 1;
 FUNC_0(VAR_5, VAR_6, "MLST");
 VAR_4 = VAR_7;
}
