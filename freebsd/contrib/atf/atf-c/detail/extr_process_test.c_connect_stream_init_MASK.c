
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_type; int m_sb; int * m_sb_ptr; } ;
struct connect_stream {int m_fd; TYPE_1__ m_base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int,int) ;
 void* FUNC_3 (char*,int,int) ;



__attribute__((used)) static
void
FUNC_4(void *VAR_6)
{
    struct connect_stream *VAR_7 = VAR_6;
    int VAR_8;

    switch (VAR_7->m_base.m_type) {
    case 128:
        VAR_8 = VAR_4;
        VAR_7->m_fd = FUNC_3("stdout", VAR_2 | VAR_0 | VAR_1, 0644);
        break;
    case 129:
        VAR_8 = VAR_3;
        VAR_7->m_fd = FUNC_3("stderr", VAR_2 | VAR_0 | VAR_1, 0644);
        break;
    default:
        VAR_5;
        VAR_8 = -1;
    }
    FUNC_0(VAR_7->m_fd != -1);

    VAR_7->m_base.m_sb_ptr = &VAR_7->m_base.m_sb;
    FUNC_1(FUNC_2(&VAR_7->m_base.m_sb, VAR_8, VAR_7->m_fd));
}
