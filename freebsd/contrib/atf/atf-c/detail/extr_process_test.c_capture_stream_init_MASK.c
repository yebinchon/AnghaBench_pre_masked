
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_sb; int * m_sb_ptr; } ;
struct capture_stream {int * m_msg; TYPE_1__ m_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static
void
FUNC_2(void *VAR_0)
{
    struct capture_stream *VAR_1 = VAR_0;

    VAR_1->m_base.m_sb_ptr = &VAR_1->m_base.m_sb;
    FUNC_0(FUNC_1(&VAR_1->m_base.m_sb));
    VAR_1->m_msg = ((void*)0);
}
