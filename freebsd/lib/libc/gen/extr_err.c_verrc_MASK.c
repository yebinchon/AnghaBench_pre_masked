
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
 char* FUNC_5 (int) ;
 int FUNC_6 (int *,char const*,int ) ;

void
FUNC_7(int VAR_1, int VAR_2, const char *VAR_3, va_list VAR_4)
{
 if (VAR_0 == ((void*)0))
  FUNC_2(((void*)0));
 FUNC_4(VAR_0, "%s: ", FUNC_0());
 if (VAR_3 != ((void*)0)) {
  FUNC_6(VAR_0, VAR_3, VAR_4);
  FUNC_4(VAR_0, ": ");
 }
 FUNC_4(VAR_0, "%s\n", FUNC_5(VAR_2));
 if (&FUNC_1)
  FUNC_1(VAR_1);
 FUNC_3(VAR_1);
}
