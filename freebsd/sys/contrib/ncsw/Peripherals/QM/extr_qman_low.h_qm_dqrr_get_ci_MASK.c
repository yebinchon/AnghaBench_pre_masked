
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qm_dqrr {scalar_t__ cmode; int ci; } ;
struct qm_portal {struct qm_dqrr dqrr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static __inline__ uint8_t FUNC_1(struct qm_portal *VAR_1)
{
    register struct qm_dqrr *VAR_2 = &VAR_1->dqrr;




    return VAR_2->ci;
}
