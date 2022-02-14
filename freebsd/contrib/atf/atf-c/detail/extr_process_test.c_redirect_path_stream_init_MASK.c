
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_type; int m_sb; int * m_sb_ptr; } ;
struct redirect_path_stream {int m_path; TYPE_1__ m_base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;



__attribute__((used)) static
void
FUNC_3(void *VAR_1)
{
    struct redirect_path_stream *VAR_2 = VAR_1;

    switch (VAR_2->m_base.m_type) {
    case 128:
        FUNC_0(FUNC_1(&VAR_2->m_path, "stdout"));
        break;
    case 129:
        FUNC_0(FUNC_1(&VAR_2->m_path, "stderr"));
        break;
    default:
        VAR_0;
    }

    VAR_2->m_base.m_sb_ptr = &VAR_2->m_base.m_sb;
    FUNC_0(FUNC_2(&VAR_2->m_base.m_sb, &VAR_2->m_path));
}
