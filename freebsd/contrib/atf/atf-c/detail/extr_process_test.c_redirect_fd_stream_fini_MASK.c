
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_type; int m_sb; } ;
struct redirect_fd_stream {TYPE_1__ m_base; int m_fd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static
void
FUNC_4(void *VAR_0)
{
    struct redirect_fd_stream *VAR_1 = VAR_0;

    FUNC_0(FUNC_3(VAR_1->m_fd) != -1);

    FUNC_1(&VAR_1->m_base.m_sb);

    FUNC_2(VAR_1->m_base.m_type);
}
