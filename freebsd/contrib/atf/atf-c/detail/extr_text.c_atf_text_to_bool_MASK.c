
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_error_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,char*) ;

atf_error_t
FUNC_3(const char *VAR_1, bool *VAR_2)
{
    atf_error_t VAR_3;

    if (FUNC_2(VAR_1, "yes") == 0 ||
        FUNC_2(VAR_1, "true") == 0) {
        *VAR_2 = 1;
        VAR_3 = FUNC_1();
    } else if (FUNC_2(VAR_1, "no") == 0 ||
               FUNC_2(VAR_1, "false") == 0) {
        *VAR_2 = 0;
        VAR_3 = FUNC_1();
    } else {

        VAR_3 = FUNC_0(VAR_0, "Cannot convert string '%s' "
                             "to boolean", VAR_1);
    }

    return VAR_3;
}
