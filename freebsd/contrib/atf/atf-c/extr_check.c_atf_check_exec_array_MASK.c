
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int atf_fs_path_t ;
typedef int atf_error_t ;
struct TYPE_7__ {TYPE_1__* pimpl; } ;
typedef TYPE_2__ atf_check_result_t ;
struct TYPE_6__ {int m_status; int m_stderr; int m_stdout; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char const* const*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const* const*,int *,int *,int *) ;

atf_error_t
FUNC_8(const char *const *VAR_0, atf_check_result_t *VAR_1)
{
    atf_error_t VAR_2;
    atf_fs_path_t VAR_3;

    VAR_2 = FUNC_6(&VAR_3);
    if (FUNC_5(VAR_2))
        goto out;

    VAR_2 = FUNC_2(VAR_1, VAR_0, &VAR_3);
    if (FUNC_5(VAR_2)) {
        atf_error_t VAR_4 = FUNC_4(&VAR_3);
        FUNC_0(!FUNC_5(VAR_4));
        goto out;
    }

    VAR_2 = FUNC_7(VAR_0, &VAR_1->pimpl->m_stdout, &VAR_1->pimpl->m_stderr,
                        &VAR_1->pimpl->m_status);
    if (FUNC_5(VAR_2)) {
        FUNC_1(VAR_1);
        goto out;
    }

    FUNC_0(!FUNC_5(VAR_2));

    FUNC_3(&VAR_3);
out:
    return VAR_2;
}
