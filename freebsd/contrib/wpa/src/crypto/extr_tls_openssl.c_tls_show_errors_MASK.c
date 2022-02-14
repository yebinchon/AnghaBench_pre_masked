
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,int *) ;
 unsigned long FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char const*,...) ;

__attribute__((used)) static void FUNC_3(int VAR_1, const char *VAR_2, const char *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(VAR_1, "OpenSSL: %s - %s %s",
     VAR_2, VAR_3, FUNC_0(FUNC_1(), ((void*)0)));

 while ((VAR_4 = FUNC_1())) {
  FUNC_2(VAR_0, "OpenSSL: pending error: %s",
      FUNC_0(VAR_4, ((void*)0)));
 }
}
