
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int heim_string_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(void)
{
    heim_string_t VAR_0, VAR_1;
    const char *VAR_2 = "hejsan";

    VAR_0 = FUNC_3(VAR_2);
    VAR_1 = FUNC_3(VAR_2);

    if (FUNC_1(VAR_0, VAR_1) != 0) {
 FUNC_4("the same string is not the same\n");
 FUNC_0(1);
    }

    FUNC_2(VAR_0);
    FUNC_2(VAR_1);

    return 0;
}
