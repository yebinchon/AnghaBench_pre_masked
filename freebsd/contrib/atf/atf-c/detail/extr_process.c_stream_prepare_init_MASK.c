
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_pipefds_ok; int m_pipefds; int const* m_sb; } ;
typedef TYPE_1__ stream_prepare_t ;
typedef int atf_process_stream_t ;
typedef int atf_error_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int const*) ;
 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static
atf_error_t
FUNC_4(stream_prepare_t *VAR_2, const atf_process_stream_t *VAR_3)
{
    atf_error_t VAR_4;

    const int VAR_5 = FUNC_2(VAR_3);

    VAR_2->m_sb = VAR_3;
    VAR_2->m_pipefds_ok = 0;

    if (VAR_5 == VAR_0) {
        if (FUNC_3(VAR_2->m_pipefds) == -1)
            VAR_4 = FUNC_0(VAR_1, "Failed to create pipe");
        else {
            VAR_4 = FUNC_1();
            VAR_2->m_pipefds_ok = 1;
        }
    } else
        VAR_4 = FUNC_1();

    return VAR_4;
}
