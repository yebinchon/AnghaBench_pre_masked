
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_stdout; int m_stderr; } ;
typedef TYPE_1__ atf_process_child_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static
void
FUNC_1(atf_process_child_t *VAR_0)
{
    if (VAR_0->m_stdout != -1)
        FUNC_0(VAR_0->m_stdout);
    if (VAR_0->m_stderr != -1)
        FUNC_0(VAR_0->m_stderr);
}
