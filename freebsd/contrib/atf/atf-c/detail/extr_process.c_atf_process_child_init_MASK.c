
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_stdout; int m_stderr; scalar_t__ m_pid; } ;
typedef TYPE_1__ atf_process_child_t ;
typedef int atf_error_t ;


 int FUNC_0 () ;

__attribute__((used)) static
atf_error_t
FUNC_1(atf_process_child_t *VAR_0)
{
    VAR_0->m_pid = 0;
    VAR_0->m_stdout = -1;
    VAR_0->m_stderr = -1;

    return FUNC_0();
}
