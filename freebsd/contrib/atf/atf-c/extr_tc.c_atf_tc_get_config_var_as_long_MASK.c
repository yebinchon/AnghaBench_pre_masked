
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;
typedef int atf_error_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char const*) ;
 char* FUNC_3 (int const*,char const*) ;
 int FUNC_4 (char const*,long*) ;

long
FUNC_5(const atf_tc_t *VAR_0, const char *VAR_1)
{
    long VAR_2;
    const char *VAR_3;
    atf_error_t VAR_4;

    VAR_3 = FUNC_3(VAR_0, VAR_1);
    VAR_4 = FUNC_4(VAR_3, &VAR_2);
    if (FUNC_1(VAR_4)) {
        FUNC_0(VAR_4);
        FUNC_2("Configuration variable %s does not have a valid "
                    "long value; found %s", VAR_1, VAR_3);
    }

    return VAR_2;
}
