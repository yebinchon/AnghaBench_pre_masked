
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_list_t ;
typedef int atf_error_t ;
typedef int atf_dynstr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,char const*) ;

atf_error_t
FUNC_9(const char *VAR_0, const char *VAR_1, atf_list_t *VAR_2)
{
    atf_error_t VAR_3;
    const char *VAR_4;
    const char *VAR_5;

    VAR_3 = FUNC_6(VAR_2);
    if (FUNC_3(VAR_3))
        goto err;

    VAR_4 = VAR_0 + FUNC_7(VAR_0);
    FUNC_0(*VAR_4 == '\0');
    VAR_5 = VAR_0;
    while (VAR_5 < VAR_4) {
        const char *VAR_6;

        FUNC_0(VAR_5 != ((void*)0));
        VAR_6 = FUNC_8(VAR_5, VAR_1);
        if (VAR_6 == ((void*)0))
            VAR_6 = VAR_4;

        FUNC_0(VAR_6 >= VAR_5);
        if (VAR_6 > VAR_5) {
            atf_dynstr_t VAR_7;

            VAR_3 = FUNC_2(&VAR_7, VAR_5, VAR_6 - VAR_5);
            if (FUNC_3(VAR_3))
                goto err_list;

            VAR_3 = FUNC_4(VAR_2, FUNC_1(&VAR_7), 1);
            if (FUNC_3(VAR_3))
                goto err_list;
        }

        VAR_5 = VAR_6 + FUNC_7(VAR_1);
    }

    FUNC_0(!FUNC_3(VAR_3));
    return VAR_3;

err_list:
    FUNC_5(VAR_2);
err:
    return VAR_3;
}
