
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qm_dqrr {scalar_t__ cmode; int ci; } ;
struct qm_portal {struct qm_dqrr dqrr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static __inline__ void FUNC_2(struct qm_portal *VAR_3)
{
    register struct qm_dqrr *VAR_4 = &VAR_3->dqrr;



    FUNC_1(VAR_0, (0 << 8) |
        (uint32_t)(1 << 6) |
        (VAR_4->ci & (VAR_1 - 1)));
}
