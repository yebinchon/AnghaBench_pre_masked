
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (char*,int ) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (char*) ;

int
FUNC_4(void)
{
 void *VAR_1;

 VAR_1 = FUNC_1("libpthread.so", VAR_0);
 if (VAR_1 == ((void*)0))
  FUNC_2(1, "%s", FUNC_0());

 FUNC_3("libpthread loaded successfully\n");
 return 0;
}
