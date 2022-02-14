
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_type; int m_sb; } ;
struct capture_stream {TYPE_1__ m_base; int m_msg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;



__attribute__((used)) static
void
FUNC_4(void *VAR_1)
{
    struct capture_stream *VAR_2 = VAR_1;

    switch (VAR_2->m_base.m_type) {
    case 128:
        FUNC_0(FUNC_2("stdout: msg", VAR_2->m_msg));
        FUNC_0(!FUNC_2("stderr: msg", VAR_2->m_msg));
        break;
    case 129:
        FUNC_0(!FUNC_2("stdout: msg", VAR_2->m_msg));
        FUNC_0(FUNC_2("stderr: msg", VAR_2->m_msg));
        break;
    default:
        VAR_0;
    }

    FUNC_3(VAR_2->m_msg);
    FUNC_1(&VAR_2->m_base.m_sb);
}
