
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_list_t ;
typedef int atf_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (char*,char const*,int *) ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (char const* const*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char***) ;

atf_error_t
FUNC_8(const char *VAR_2,
              const char *VAR_3,
              const char *const VAR_4[],
              char ***VAR_5)
{
    atf_error_t VAR_6;
    atf_list_t VAR_7;

    VAR_6 = FUNC_6(&VAR_7);
    if (FUNC_4(VAR_6))
        goto out;

    VAR_6 = FUNC_2("ATF_BUILD_CPP", VAR_0, &VAR_7);
    if (FUNC_4(VAR_6))
        goto out_list;

    VAR_6 = FUNC_2("ATF_BUILD_CPPFLAGS", VAR_1,
                            &VAR_7);
    if (FUNC_4(VAR_6))
        goto out_list;

    if (VAR_4 != ((void*)0)) {
        VAR_6 = FUNC_3(VAR_4, &VAR_7);
        if (FUNC_4(VAR_6))
            goto out_list;
    }

    VAR_6 = FUNC_1("-o", VAR_3, &VAR_7);
    if (FUNC_4(VAR_6))
        goto out_list;

    VAR_6 = FUNC_0(VAR_2, &VAR_7);
    if (FUNC_4(VAR_6))
        goto out_list;

    VAR_6 = FUNC_7(&VAR_7, VAR_5);
    if (FUNC_4(VAR_6))
        goto out_list;

out_list:
    FUNC_5(&VAR_7);
out:
    return VAR_6;
}
