
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qm_eqcr {int busy; scalar_t__ pmode; int available; int vbit; struct qm_eqcr_entry* cursor; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;
struct qm_eqcr_entry {int __dont_write_directly__verb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qm_eqcr*) ;
 int FUNC_2 (struct qm_eqcr_entry*) ;
 int FUNC_3 (struct qm_eqcr_entry*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static __inline__ struct qm_eqcr_entry *FUNC_4(struct qm_portal *VAR_1, uint8_t VAR_2)
{
    register struct qm_eqcr *VAR_3 = &VAR_1->eqcr;




    if (VAR_3->available == 1)
        return ((void*)0);
    VAR_3->cursor->__dont_write_directly__verb = (uint8_t)(VAR_2 | VAR_3->vbit);
    FUNC_2(VAR_3->cursor);
    FUNC_1(VAR_3);
    VAR_3->available--;
    FUNC_3(VAR_3->cursor);
    return VAR_3->cursor;
}
