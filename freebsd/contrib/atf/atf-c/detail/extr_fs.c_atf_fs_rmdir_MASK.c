
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;

atf_error_t
FUNC_4(const atf_fs_path_t *VAR_3)
{
    atf_error_t VAR_4;

    if (FUNC_3(FUNC_0(VAR_3))) {
        if (VAR_2 == VAR_0) {




            VAR_2 = VAR_1;
        }
        VAR_4 = FUNC_1(VAR_2, "Cannot remove directory");
    } else
        VAR_4 = FUNC_2();

    return VAR_4;
}
