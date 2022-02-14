
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct qm_eqcr {scalar_t__ cmode; int available; scalar_t__ ci; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static __inline__ uint8_t FUNC_4(struct qm_portal *VAR_3)
{
    register struct qm_eqcr *VAR_4 = &VAR_3->eqcr;
    uint8_t VAR_5, VAR_6 = VAR_4->ci;



    VAR_4->ci = (uint8_t)(FUNC_2(VAR_0) & (VAR_1 - 1));
    FUNC_3(VAR_0);
    VAR_5 = FUNC_1(VAR_1, VAR_6, VAR_4->ci);
    VAR_4->available += VAR_5;
    return VAR_5;
}
