
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;

void
FUNC_6(void)
{
 char *VAR_1;

 VAR_1 = FUNC_2("hw.ioat.enable_ioat_test");
 if (VAR_1 != ((void*)0) && FUNC_5(VAR_1, "0") != 0) {
  FUNC_3(&VAR_0);
  FUNC_0(1);
  FUNC_4(&VAR_0);
 }
 FUNC_1(VAR_1);
}
