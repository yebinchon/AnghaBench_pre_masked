
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qm_dqrr {int fill; int cursor; } ;
struct qm_portal {struct qm_dqrr dqrr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __inline__ uint8_t FUNC_2(struct qm_portal *VAR_0)
{
    register struct qm_dqrr *VAR_1 = &VAR_0->dqrr;



    VAR_1->cursor = FUNC_1(VAR_1->cursor);
    return --VAR_1->fill;
}
