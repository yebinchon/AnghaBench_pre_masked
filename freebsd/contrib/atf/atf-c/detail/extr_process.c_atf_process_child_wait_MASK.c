
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int atf_process_status_t ;
struct TYPE_4__ {int m_pid; } ;
typedef TYPE_1__ atf_process_child_t ;
typedef int atf_error_t ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int*,int ) ;

atf_error_t
FUNC_4(atf_process_child_t *VAR_1, atf_process_status_t *VAR_2)
{
    atf_error_t VAR_3;
    int VAR_4;

    if (FUNC_3(VAR_1->m_pid, &VAR_4, 0) == -1)
        VAR_3 = FUNC_0(VAR_0, "Failed waiting for process %d",
                             VAR_1->m_pid);
    else {
        FUNC_1(VAR_1);
        VAR_3 = FUNC_2(VAR_2, VAR_4);
    }

    return VAR_3;
}
