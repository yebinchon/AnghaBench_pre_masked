
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qm_eqcr {int ithresh; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static __inline__ void FUNC_1(struct qm_portal *VAR_1, uint8_t VAR_2)
{
    register struct qm_eqcr *VAR_3 = &VAR_1->eqcr;
    VAR_3->ithresh = VAR_2;
    FUNC_0(VAR_0, VAR_2);
}
