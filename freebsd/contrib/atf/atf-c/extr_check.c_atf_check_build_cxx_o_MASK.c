
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_error_t ;


 int FUNC_0 (char const*,char const*,char const* const*,char***) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char const* const*,int*) ;

atf_error_t
FUNC_4(const char *VAR_0,
                      const char *VAR_1,
                      const char *const VAR_2[],
                      bool *VAR_3)
{
    atf_error_t VAR_4;
    char **VAR_5;

    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5);
    if (FUNC_1(VAR_4))
        goto out;

    VAR_4 = FUNC_3((const char *const *)VAR_5, VAR_3);

    FUNC_2(VAR_5);
out:
    return VAR_4;
}
