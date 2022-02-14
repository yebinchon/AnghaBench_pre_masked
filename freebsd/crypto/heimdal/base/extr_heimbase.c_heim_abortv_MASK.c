
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int str ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int,char const*,int ) ;

void
FUNC_3(const char *VAR_1, va_list VAR_2)
{
    static char VAR_3[1024];

    FUNC_2(VAR_3, sizeof(VAR_3), VAR_1, VAR_2);
    FUNC_1(VAR_0, "heim_abort: %s", VAR_3);
    FUNC_0();
}
