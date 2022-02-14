
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* m_path; int m_type; } ;
typedef TYPE_1__ atf_process_stream_t ;
typedef int atf_fs_path_t ;
typedef int atf_error_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

atf_error_t
FUNC_3(atf_process_stream_t *VAR_1,
                                      const atf_fs_path_t *VAR_2)
{
    VAR_1->m_type = VAR_0;
    VAR_1->m_path = VAR_2;

    FUNC_0(FUNC_2(VAR_1));
    return FUNC_1();
}
