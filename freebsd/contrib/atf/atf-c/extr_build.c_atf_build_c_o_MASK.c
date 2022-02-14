
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_list_t ;
typedef int atf_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (char const* const*,int *) ;
 int FUNC_2 (char const*,char const*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char***) ;

atf_error_t
FUNC_7(const char *VAR_3,
              const char *VAR_4,
              const char *const VAR_5[],
              char ***VAR_6)
{
    atf_error_t VAR_7;
    atf_list_t VAR_8;

    VAR_7 = FUNC_5(&VAR_8);
    if (FUNC_3(VAR_7))
        goto out;

    VAR_7 = FUNC_0("ATF_BUILD_CC", VAR_0, &VAR_8);
    if (FUNC_3(VAR_7))
        goto out_list;

    VAR_7 = FUNC_0("ATF_BUILD_CPPFLAGS", VAR_2,
                            &VAR_8);
    if (FUNC_3(VAR_7))
        goto out_list;

    VAR_7 = FUNC_0("ATF_BUILD_CFLAGS", VAR_1, &VAR_8);
    if (FUNC_3(VAR_7))
        goto out_list;

    if (VAR_5 != ((void*)0)) {
        VAR_7 = FUNC_1(VAR_5, &VAR_8);
        if (FUNC_3(VAR_7))
            goto out_list;
    }

    VAR_7 = FUNC_2(VAR_3, VAR_4, &VAR_8);
    if (FUNC_3(VAR_7))
        goto out_list;

    VAR_7 = FUNC_6(&VAR_8, VAR_6);
    if (FUNC_3(VAR_7))
        goto out_list;

out_list:
    FUNC_4(&VAR_8);
out:
    return VAR_7;
}
