
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * m_pipefds; scalar_t__ m_pipefds_ok; } ;
typedef TYPE_1__ stream_prepare_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static
void
FUNC_1(stream_prepare_t *VAR_0)
{
    if (VAR_0->m_pipefds_ok) {
        FUNC_0(VAR_0->m_pipefds[0]);
        FUNC_0(VAR_0->m_pipefds[1]);
    }
}
