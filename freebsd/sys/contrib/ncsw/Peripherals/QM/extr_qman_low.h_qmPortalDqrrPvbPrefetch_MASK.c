
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_dqrr {scalar_t__ pmode; int flags; int pi; int ring; } ;
struct qm_portal {struct qm_dqrr dqrr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static __inline__ void FUNC_4(struct qm_portal *VAR_2)
{
    register struct qm_dqrr *VAR_3 = &VAR_2->dqrr;





        FUNC_1(FUNC_2(VAR_3->ring, FUNC_3(VAR_3->pi)));
}
