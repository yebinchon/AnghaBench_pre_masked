
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_list_t ;
typedef int atf_error_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 char* FUNC_4 (char const* const) ;

__attribute__((used)) static
atf_error_t
FUNC_5(const char *const *VAR_0, atf_list_t *VAR_1)
{
    atf_error_t VAR_2;

    VAR_2 = FUNC_2(VAR_1);
    if (FUNC_0(VAR_2))
        goto out;

    while (*VAR_0 != ((void*)0)) {
        char *VAR_3 = FUNC_4(*VAR_0);
        if (VAR_3 == ((void*)0)) {
            VAR_2 = FUNC_3();
            goto out;
        }

        VAR_2 = FUNC_1(VAR_1, VAR_3, 1);
        if (FUNC_0(VAR_2))
            goto out;

        VAR_0++;
    }

out:
    return VAR_2;
}
