
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (char const*,char) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,char const*,int ) ;

void
FUNC_4(const char *VAR_3, va_list VAR_4)
{
 int VAR_5 = VAR_0;

 if (VAR_1 != ((void*)0))
  (void) FUNC_0(VAR_2, "%s: ", VAR_1);

 (void) FUNC_3(VAR_2, VAR_3, VAR_4);

 if (FUNC_1(VAR_3, '\n') == ((void*)0))
  (void) FUNC_0(VAR_2, ": %s\n", FUNC_2(VAR_5));
}
