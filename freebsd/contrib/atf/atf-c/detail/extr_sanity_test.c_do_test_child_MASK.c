
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_data {int m_type; int m_cond; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;





__attribute__((used)) static
void
FUNC_4(void *VAR_2)
{
    struct test_data *VAR_3 = VAR_2;

    switch (VAR_3->m_type) {
    case 131:
        FUNC_0(VAR_3->m_cond);
        break;

    case 129:
        FUNC_2(VAR_3->m_cond);
        break;

    case 130:
        FUNC_1(VAR_3->m_cond);
        break;

    case 128:
        if (!VAR_3->m_cond)
            VAR_1;
        break;
    }

    FUNC_3(VAR_0);
}
