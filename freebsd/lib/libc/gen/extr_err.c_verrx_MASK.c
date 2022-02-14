
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 char* FUNC_0 () ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char const*,int ) ;

void
FUNC_6(int VAR_1, const char *VAR_2, va_list VAR_3)
{
 if (VAR_0 == ((void*)0))
  FUNC_2(((void*)0));
 FUNC_4(VAR_0, "%s: ", FUNC_0());
 if (VAR_2 != ((void*)0))
  FUNC_5(VAR_0, VAR_2, VAR_3);
 FUNC_4(VAR_0, "\n");
 if (&FUNC_1)
  FUNC_1(VAR_1);
 FUNC_3(VAR_1);
}
