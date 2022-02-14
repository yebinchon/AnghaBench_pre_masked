
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int ) ;

atf_error_t
FUNC_6(const atf_fs_path_t *VAR_0, atf_fs_path_t *VAR_1)
{
    atf_error_t VAR_2;

    FUNC_0(!FUNC_4(VAR_0));

    VAR_2 = FUNC_1(VAR_1);
    if (FUNC_5(VAR_2))
        goto out;

    VAR_2 = FUNC_2(VAR_1, VAR_0);
    if (FUNC_5(VAR_2))
        FUNC_3(VAR_1);

out:
    return VAR_2;
}
