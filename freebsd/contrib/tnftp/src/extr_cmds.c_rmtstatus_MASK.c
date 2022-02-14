
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;

void
FUNC_2(int VAR_1, char *VAR_2[])
{

 if (VAR_1 == 0) {
  FUNC_1("usage: %s [remote-file]\n", VAR_2[0]);
  VAR_0 = -1;
  return;
 }
 FUNC_0(VAR_1, VAR_2, "STAT");
}
