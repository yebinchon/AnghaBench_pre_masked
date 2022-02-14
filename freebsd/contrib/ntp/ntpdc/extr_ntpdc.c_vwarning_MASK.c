
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
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static void __attribute__((__format__(__printf__, 1, 0)))
FUNC_3(const char *VAR_3, va_list VAR_4)
{
 int VAR_5 = VAR_0;
 (void) FUNC_0(VAR_2, "%s: ", VAR_1);
 FUNC_2(VAR_2, VAR_3, VAR_4);
 (void) FUNC_0(VAR_2, ": %s\n", FUNC_1(VAR_5));
}
