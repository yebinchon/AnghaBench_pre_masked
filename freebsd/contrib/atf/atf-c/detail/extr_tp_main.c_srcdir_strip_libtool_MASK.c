
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static
atf_error_t
FUNC_4(atf_fs_path_t *VAR_0)
{
    atf_error_t VAR_1;
    atf_fs_path_t VAR_2;

    VAR_1 = FUNC_1(VAR_0, &VAR_2);
    if (FUNC_3(VAR_1))
        goto out;

    FUNC_2(VAR_0);
    *VAR_0 = VAR_2;

    FUNC_0(!FUNC_3(VAR_1));
out:
    return VAR_1;
}
