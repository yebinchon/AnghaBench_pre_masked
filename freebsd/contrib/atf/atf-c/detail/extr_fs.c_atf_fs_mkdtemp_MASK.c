
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char**) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,char*) ;

atf_error_t
FUNC_9(atf_fs_path_t *VAR_2)
{
    atf_error_t VAR_3;
    char *VAR_4;

    if (!FUNC_2(VAR_0, VAR_0)) {
        VAR_3 = FUNC_7(VAR_2, VAR_1, FUNC_4());
        goto out;
    }

    VAR_3 = FUNC_3(VAR_2, &VAR_4);
    if (FUNC_1(VAR_3))
        goto out;

    VAR_3 = FUNC_5(VAR_4);
    if (FUNC_1(VAR_3))
        goto out_buf;

    FUNC_8(VAR_2, VAR_4);

    FUNC_0(!FUNC_1(VAR_3));
out_buf:
    FUNC_6(VAR_4);
out:
    return VAR_3;
}
