
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 char* FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char const*) ;

atf_error_t
FUNC_4(const atf_fs_path_t *VAR_1)
{
    atf_error_t VAR_2;
    const char *VAR_3;

    VAR_3 = FUNC_0(VAR_1);

    if (FUNC_3(VAR_3) != 0)
        VAR_2 = FUNC_1(VAR_0, "Cannot unlink file: '%s'", VAR_3);
    else
        VAR_2 = FUNC_2();

    return VAR_2;
}
