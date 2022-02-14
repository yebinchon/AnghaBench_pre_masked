
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int stream_prepare_t ;
typedef int pid_t ;
struct TYPE_4__ {int m_stderr; int m_stdout; int m_pid; } ;
typedef TYPE_1__ atf_process_child_t ;
typedef int atf_error_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const*,int *) ;

__attribute__((used)) static
atf_error_t
FUNC_3(atf_process_child_t *VAR_0,
          const pid_t VAR_1,
          const stream_prepare_t *VAR_2,
          const stream_prepare_t *VAR_3)
{
    atf_error_t VAR_4;

    VAR_4 = FUNC_1(VAR_0);
    if (FUNC_0(VAR_4))
        goto out;

    VAR_0->m_pid = VAR_1;

    FUNC_2(VAR_2, &VAR_0->m_stdout);
    FUNC_2(VAR_3, &VAR_0->m_stderr);

out:
    return VAR_4;
}
