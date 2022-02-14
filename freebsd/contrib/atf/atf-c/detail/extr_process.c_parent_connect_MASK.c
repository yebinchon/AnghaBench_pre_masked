
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* m_pipefds; int m_sb; } ;
typedef TYPE_1__ stream_prepare_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_1 (int) ;

__attribute__((used)) static
void
FUNC_2(const stream_prepare_t *VAR_6, int *VAR_7)
{
    const int VAR_8 = FUNC_0(VAR_6->m_sb);

    if (VAR_8 == VAR_1) {
        FUNC_1(VAR_6->m_pipefds[1]);
        *VAR_7 = VAR_6->m_pipefds[0];
    } else if (VAR_8 == VAR_2) {

    } else if (VAR_8 == VAR_3) {

    } else if (VAR_8 == VAR_4) {

    } else if (VAR_8 == VAR_5) {

    } else {
        VAR_0;
    }
}
