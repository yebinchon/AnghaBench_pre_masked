
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int const*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;

atf_error_t
FUNC_6(const atf_fs_path_t *VAR_2, bool *VAR_3)
{
    atf_error_t VAR_4;

    VAR_4 = FUNC_2(VAR_2, VAR_1);
    if (FUNC_3(VAR_4)) {
        if (FUNC_1(VAR_4, "libc") && FUNC_4(VAR_4) == VAR_0) {
            FUNC_0(VAR_4);
            VAR_4 = FUNC_5();
            *VAR_3 = 0;
        }
    } else
        *VAR_3 = 1;

    return VAR_4;
}
