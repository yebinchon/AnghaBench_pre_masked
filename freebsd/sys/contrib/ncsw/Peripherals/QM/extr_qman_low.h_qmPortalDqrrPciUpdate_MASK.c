
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct qm_dqrr {scalar_t__ pmode; int fill; scalar_t__ pi; } ;
struct qm_portal {struct qm_dqrr dqrr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline__ uint8_t FUNC_3(struct qm_portal *VAR_3)
{
    register struct qm_dqrr *VAR_4 = &VAR_3->dqrr;
    uint8_t VAR_5, VAR_6 = VAR_4->pi;



    VAR_4->pi = (uint8_t)(FUNC_2(VAR_0) & (VAR_1 - 1));
    VAR_5 = FUNC_1(VAR_1, VAR_6, VAR_4->pi);
    VAR_4->fill += VAR_5;
    return VAR_5;
}
