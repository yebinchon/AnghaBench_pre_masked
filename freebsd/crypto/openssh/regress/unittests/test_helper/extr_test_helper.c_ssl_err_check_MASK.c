
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (long,int *) ;
 long FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,char const*,int,char*) ;
 int VAR_0 ;

void
FUNC_4(const char *VAR_1, int VAR_2)
{
 long VAR_3 = FUNC_1();

 if (VAR_3 == 0)
  return;

 FUNC_3(VAR_0, "\n%s:%d: uncaught OpenSSL error: %s",
     VAR_1, VAR_2, FUNC_0(VAR_3, ((void*)0)));
 FUNC_2();
}
