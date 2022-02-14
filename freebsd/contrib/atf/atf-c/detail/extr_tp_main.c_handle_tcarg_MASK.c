
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tc_part { ____Placeholder_tc_part } tc_part ;
typedef int atf_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static
atf_error_t
FUNC_6(const char *VAR_2, char **VAR_3, enum tc_part *VAR_4)
{
    atf_error_t VAR_5;

    VAR_5 = FUNC_0();

    *VAR_3 = FUNC_4(VAR_2);
    if (*VAR_3 == ((void*)0)) {
        VAR_5 = FUNC_1();
        goto out;
    }

    char *VAR_6 = FUNC_2(*VAR_3, ':');
    if (VAR_6 != ((void*)0)) {
        *VAR_6 = '\0';

        VAR_6++;
        if (FUNC_3(VAR_6, "body") == 0) {
            *VAR_4 = VAR_0;
        } else if (FUNC_3(VAR_6, "cleanup") == 0) {
            *VAR_4 = VAR_1;
        } else {
            VAR_5 = FUNC_5("Invalid test case part `%s'", VAR_6);
            goto out;
        }
    }

out:
    return VAR_5;
}
