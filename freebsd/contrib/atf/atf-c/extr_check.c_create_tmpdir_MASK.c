
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static
atf_error_t
FUNC_6(atf_fs_path_t *VAR_0)
{
    atf_error_t VAR_1;

    VAR_1 = FUNC_4(VAR_0, "%s/check.XXXXXX",
                               FUNC_1("TMPDIR", "/tmp"));
    if (FUNC_5(VAR_1))
        goto out;

    VAR_1 = FUNC_2(VAR_0);
    if (FUNC_5(VAR_1)) {
        FUNC_3(VAR_0);
        goto out;
    }

    FUNC_0(!FUNC_5(VAR_1));
out:
    return VAR_1;
}
