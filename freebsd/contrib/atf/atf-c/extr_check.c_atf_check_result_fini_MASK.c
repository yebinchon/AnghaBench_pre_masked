
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pimpl; } ;
typedef TYPE_1__ atf_check_result_t ;
struct TYPE_5__ {int m_argv; int m_dir; int m_stderr; int m_stdout; int m_status; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(atf_check_result_t *VAR_0)
{
    FUNC_2(&VAR_0->pimpl->m_status);

    FUNC_3(&VAR_0->pimpl->m_dir, &VAR_0->pimpl->m_stdout,
                   &VAR_0->pimpl->m_stderr);
    FUNC_0(&VAR_0->pimpl->m_stdout);
    FUNC_0(&VAR_0->pimpl->m_stderr);
    FUNC_0(&VAR_0->pimpl->m_dir);

    FUNC_1(&VAR_0->pimpl->m_argv);

    FUNC_4(VAR_0->pimpl);
}
