
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_type; } ;
struct capture_stream {void* m_msg; TYPE_1__ m_base; } ;
typedef int atf_process_child_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;



__attribute__((used)) static
void
FUNC_3(void *VAR_1, atf_process_child_t *VAR_2)
{
    struct capture_stream *VAR_3 = VAR_1;

    switch (VAR_3->m_base.m_type) {
    case 128:
        VAR_3->m_msg = FUNC_2(FUNC_1(VAR_2));
        break;
    case 129:
        VAR_3->m_msg = FUNC_2(FUNC_0(VAR_2));
        break;
    default:
        VAR_0;
    }
}
