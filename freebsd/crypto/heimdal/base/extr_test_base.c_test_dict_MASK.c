
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int heim_string_t ;
typedef int heim_number_t ;
typedef int heim_dict_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(void)
{
    heim_dict_t VAR_0;
    heim_number_t VAR_1 = FUNC_3(1);
    heim_string_t VAR_2 = FUNC_5("hejsan");
    heim_number_t VAR_3 = FUNC_3(3);
    heim_string_t VAR_4 = FUNC_5("foosan");

    VAR_0 = FUNC_1(10);

    FUNC_0(VAR_0, VAR_1, VAR_2);
    FUNC_0(VAR_0, VAR_3, VAR_4);

    FUNC_2(VAR_0, VAR_3);
    FUNC_2(VAR_0, VAR_1);

    FUNC_4(VAR_1);
    FUNC_4(VAR_2);
    FUNC_4(VAR_3);
    FUNC_4(VAR_4);

    FUNC_4(VAR_0);

    return 0;
}
