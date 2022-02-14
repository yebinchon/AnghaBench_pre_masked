
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 char* VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3, const char *VAR_4, va_list VAR_5)
{
 int VAR_6 = VAR_0;

 FUNC_0(VAR_2, "%s: %s: ", VAR_3, VAR_1);
 FUNC_3(VAR_2, VAR_4, VAR_5);

 if (VAR_4[FUNC_2(VAR_4) - 1] != '\n')
  FUNC_0(VAR_2, ": %s\n", FUNC_1(VAR_6));
}
