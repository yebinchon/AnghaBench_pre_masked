
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int atf_error_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(atf_error_t VAR_1)
{
    if (FUNC_3(VAR_1)) {
        char VAR_2[1024];
        FUNC_1(VAR_1, VAR_2, sizeof(VAR_2));
        FUNC_4(VAR_0, "FATAL ERROR: %s\n", VAR_2);
        FUNC_2(VAR_1);
        FUNC_0();
    }
}
