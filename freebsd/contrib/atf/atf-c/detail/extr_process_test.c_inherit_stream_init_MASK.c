
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_type; int m_sb; int * m_sb_ptr; } ;
struct inherit_stream {int m_old_fd; int m_fd; TYPE_1__ m_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,int,int) ;



__attribute__((used)) static
void
FUNC_7(void *VAR_6)
{
    struct inherit_stream *VAR_7 = VAR_6;
    const char *VAR_8;

    VAR_7->m_base.m_sb_ptr = &VAR_7->m_base.m_sb;
    FUNC_2(FUNC_3(&VAR_7->m_base.m_sb));

    switch (VAR_7->m_base.m_type) {
    case 128:
        VAR_7->m_fd = VAR_4;
        VAR_8 = "stdout";
        break;
    case 129:
        VAR_7->m_fd = VAR_3;
        VAR_8 = "stderr";
        break;
    default:
        VAR_5;
        VAR_8 = ((void*)0);
    }

    VAR_7->m_old_fd = FUNC_5(VAR_7->m_fd);
    FUNC_0(VAR_7->m_old_fd != -1);
    FUNC_0(FUNC_4(VAR_7->m_fd) != -1);
    FUNC_1(FUNC_6(VAR_8, VAR_2 | VAR_0 | VAR_1, 0644),
                   VAR_7->m_fd);
}
