
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m_src_fd; int m_tgt_fd; int m_type; } ;
typedef TYPE_1__ atf_process_stream_t ;
typedef int atf_error_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;

atf_error_t
FUNC_4(atf_process_stream_t *VAR_1,
                                const int VAR_2, const int VAR_3)
{
    FUNC_1(VAR_2 >= 0);
    FUNC_1(VAR_3 >= 0);
    FUNC_1(VAR_2 != VAR_3);

    VAR_1->m_type = VAR_0;
    VAR_1->m_src_fd = VAR_2;
    VAR_1->m_tgt_fd = VAR_3;

    FUNC_0(FUNC_3(VAR_1));
    return FUNC_2();
}
