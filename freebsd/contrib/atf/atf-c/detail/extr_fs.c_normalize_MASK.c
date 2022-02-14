
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_error_t ;
typedef int atf_dynstr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char*,char**) ;

__attribute__((used)) static
atf_error_t
FUNC_7(atf_dynstr_t *VAR_0, char *VAR_1)
{
    const char *VAR_2;
    char *VAR_3;
    atf_error_t VAR_4;
    bool VAR_5;

    FUNC_0(FUNC_5(VAR_1) > 0);
    FUNC_0(FUNC_2(VAR_0) == 0);

    if (VAR_1[0] == '/')
        VAR_4 = FUNC_1(VAR_0, "/");
    else
        VAR_4 = FUNC_4();

    VAR_5 = 1;
    VAR_3 = ((void*)0);
    VAR_2 = FUNC_6(VAR_1, "/", &VAR_3);
    while (!FUNC_3(VAR_4) && VAR_2 != ((void*)0)) {
        if (FUNC_5(VAR_2) > 0) {
            VAR_4 = FUNC_1(VAR_0, "%s%s", VAR_5 ? "" : "/", VAR_2);
            VAR_5 = 0;
        }

        VAR_2 = FUNC_6(((void*)0), "/", &VAR_3);
    }

    return VAR_4;
}
