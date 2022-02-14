
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3, va_list VAR_4)
{
 int VAR_5 = VAR_0;

 (void) FUNC_0(VAR_2, "%s: ", VAR_1);
 (void) FUNC_3(VAR_2, VAR_3, VAR_4);

 if (VAR_3[FUNC_2(VAR_3) - 1] != '\n')
  (void) FUNC_0(VAR_2, ": %s\n", FUNC_1(VAR_5));
}
