
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int const,int const,char const*,char const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(const int VAR_3, const char* VAR_4, const char* VAR_5)
{
    const pid_t VAR_6 = FUNC_1();
    FUNC_0(VAR_6 != -1);
    if (VAR_6 == 0) {
        FUNC_4(VAR_2, "Some output\n");
        FUNC_4(VAR_1, "Some error\n");
        FUNC_3(123);
    }
    FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5);
    FUNC_3(VAR_0);
}
