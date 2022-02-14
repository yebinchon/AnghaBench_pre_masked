
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;

void
FUNC_3(int VAR_2, char *VAR_3[])
{


 if (VAR_2 == 0 && VAR_3 != ((void*)0)) {
  FUNC_0("usage: %s\n", VAR_3[0]);
  VAR_0 = -1;
  return;
 }
 if (!VAR_1)
  return;
 (void)FUNC_2("QUIT");
 FUNC_1();
}
