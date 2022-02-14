
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 char* FUNC_0 () ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char const*,int ) ;

void
FUNC_4(const char *VAR_1, va_list VAR_2)
{
 if (VAR_0 == ((void*)0))
  FUNC_1(((void*)0));
 FUNC_2(VAR_0, "%s: ", FUNC_0());
 if (VAR_1 != ((void*)0))
  FUNC_3(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_0, "\n");
}
