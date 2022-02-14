
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int heim_string_t ;
typedef int heim_number_t ;
typedef int heim_auto_release_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(void)
{
    heim_auto_release_t VAR_0, VAR_1;
    heim_number_t VAR_2;
    heim_string_t VAR_3;

    VAR_0 = FUNC_1();

    VAR_3 = FUNC_4("hejsan");
    FUNC_0(VAR_3);

    VAR_2 = FUNC_2(1);
    FUNC_0(VAR_2);

    VAR_1 = FUNC_1();

    VAR_2 = FUNC_2(1);
    FUNC_0(VAR_2);

    FUNC_3(VAR_1);
    FUNC_3(VAR_0);

    return 0;
}
