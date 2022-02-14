
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct atf_check_result_impl {int dummy; } ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;
struct TYPE_4__ {TYPE_2__* pimpl; } ;
typedef TYPE_1__ atf_check_result_t ;
struct TYPE_5__ {int m_argv; int m_dir; int m_stdout; int m_stderr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const* const*,int *) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 TYPE_2__* FUNC_9 (int) ;

__attribute__((used)) static
atf_error_t
FUNC_10(atf_check_result_t *VAR_0, const char *const *VAR_1,
                      const atf_fs_path_t *VAR_2)
{
    atf_error_t VAR_3;

    VAR_0->pimpl = FUNC_9(sizeof(struct atf_check_result_impl));
    if (VAR_0->pimpl == ((void*)0))
        return FUNC_8();

    VAR_3 = FUNC_1(VAR_1, &VAR_0->pimpl->m_argv);
    if (FUNC_6(VAR_3))
        goto out;

    VAR_3 = FUNC_2(&VAR_0->pimpl->m_dir, VAR_2);
    if (FUNC_6(VAR_3))
        goto err_argv;

    VAR_3 = FUNC_5(&VAR_0->pimpl->m_stdout, "%s/stdout",
                               FUNC_3(VAR_2));
    if (FUNC_6(VAR_3))
        goto err_dir;

    VAR_3 = FUNC_5(&VAR_0->pimpl->m_stderr, "%s/stderr",
                               FUNC_3(VAR_2));
    if (FUNC_6(VAR_3))
        goto err_stdout;

    FUNC_0(!FUNC_6(VAR_3));
    goto out;

err_stdout:
    FUNC_4(&VAR_0->pimpl->m_stdout);
err_dir:
    FUNC_4(&VAR_0->pimpl->m_dir);
err_argv:
    FUNC_7(&VAR_0->pimpl->m_argv);
out:
    return VAR_3;
}
