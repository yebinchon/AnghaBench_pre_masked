
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char**) ;

void
FUNC_3(int VAR_1, char *VAR_2[])
{

 if (VAR_1 == 0 ||
     (VAR_1 == 1 && !FUNC_1(&VAR_1, &VAR_2, "command line to send"))) {
  FUNC_0("usage: %s line-to-send\n", VAR_2[0]);
  VAR_0 = -1;
  return;
 }
 FUNC_2("", VAR_1, VAR_2);
}
