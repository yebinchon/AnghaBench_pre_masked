
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(int VAR_2, char *VAR_3[])
{
 int VAR_4 = VAR_1;

 if (VAR_2 < 1 || VAR_2 > 2) {
  FUNC_1("usage: %s [seconds]\n", VAR_3[0]);
  VAR_0 = -1;
  return;
 }
 VAR_1 = 1;
 FUNC_0(VAR_2, VAR_3, "SITE IDLE");
 VAR_1 = VAR_4;
}
