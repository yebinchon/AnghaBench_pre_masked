
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct qm_eqcr {scalar_t__ pmode; int vbit; scalar_t__ busy; TYPE_1__* cursor; int available; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;
struct TYPE_3__ {int __dont_write_directly__verb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qm_eqcr*) ;
 int FUNC_2 (struct qm_eqcr*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static __inline__ void FUNC_7(struct qm_portal *VAR_2, uint8_t VAR_3)
{
    register struct qm_eqcr *VAR_4 = &VAR_2->eqcr;




    VAR_4->cursor->__dont_write_directly__verb = (uint8_t)(VAR_3 | VAR_4->vbit);
    FUNC_2(VAR_4);
    VAR_4->available--;
    FUNC_4(VAR_4->cursor);
    FUNC_6();
    FUNC_5(VAR_0, FUNC_3(VAR_4->cursor));



}
