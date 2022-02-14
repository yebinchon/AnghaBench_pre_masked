
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int heim_integer ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,char**) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char const*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_0, const char *VAR_1, heim_integer *VAR_2)
{
    heim_integer VAR_3;
    char *VAR_4;
    int VAR_5;

    VAR_5 = FUNC_3(VAR_2, &VAR_4);
    if (VAR_5)
 FUNC_4(1, "der_print_hex_heim_integer: %d", VAR_5);

    if (FUNC_6(VAR_4, VAR_1) != 0)
 FUNC_4(1, "der_print_hex_heim_integer: %s != %s", VAR_4, VAR_0);

    VAR_5 = FUNC_2(VAR_4, &VAR_3);
    if (VAR_5)
 FUNC_4(1, "der_parse_hex_heim_integer: %d", VAR_5);

    if (FUNC_1(VAR_2, &VAR_3) != 0)
 FUNC_4(1, "der_heim_integer_cmp: p %s", VAR_0);

    FUNC_0(&VAR_3);
    FUNC_5(VAR_4);

    VAR_5 = FUNC_2(VAR_0, &VAR_3);
    if (VAR_5)
 FUNC_4(1, "der_parse_hex_heim_integer: %d", VAR_5);

    if (FUNC_1(VAR_2, &VAR_3) != 0)
 FUNC_4(1, "der_heim_integer_cmp: norm");

    FUNC_0(&VAR_3);

    return 0;
}
