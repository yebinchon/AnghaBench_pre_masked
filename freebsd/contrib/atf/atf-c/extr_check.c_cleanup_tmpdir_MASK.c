
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static
void
FUNC_7(const atf_fs_path_t *VAR_1, const atf_fs_path_t *VAR_2,
               const atf_fs_path_t *VAR_3)
{
    {
        atf_error_t VAR_4 = FUNC_4(VAR_2);
        if (FUNC_5(VAR_4)) {
            FUNC_0(FUNC_2(VAR_4, "libc") &&
                FUNC_6(VAR_4) == VAR_0);
            FUNC_1(VAR_4);
        } else
            FUNC_0(!FUNC_5(VAR_4));
    }

    {
        atf_error_t VAR_5 = FUNC_4(VAR_3);
        if (FUNC_5(VAR_5)) {
            FUNC_0(FUNC_2(VAR_5, "libc") &&
                FUNC_6(VAR_5) == VAR_0);
            FUNC_1(VAR_5);
        } else
            FUNC_0(!FUNC_5(VAR_5));
    }

    {
        atf_error_t VAR_6 = FUNC_3(VAR_1);
        FUNC_0(!FUNC_5(VAR_6));
    }
}
