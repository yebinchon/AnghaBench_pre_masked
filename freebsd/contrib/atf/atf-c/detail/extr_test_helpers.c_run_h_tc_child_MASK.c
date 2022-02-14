
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_h_tc_data {int m_resname; int m_tc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static
void
FUNC_2(void *VAR_0)
{
    struct run_h_tc_data *VAR_1 = (struct run_h_tc_data *)VAR_0;

    FUNC_0(FUNC_1(VAR_1->m_tc, VAR_1->m_resname));
}
