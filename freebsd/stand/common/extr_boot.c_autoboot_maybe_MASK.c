
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

void
FUNC_3()
{
 char *VAR_1;

 VAR_1 = FUNC_1("autoboot_delay");
 if ((VAR_0 == 0) && ((VAR_1 == ((void*)0)) || FUNC_2(VAR_1, "NO")))
  FUNC_0(-1, ((void*)0));
}
