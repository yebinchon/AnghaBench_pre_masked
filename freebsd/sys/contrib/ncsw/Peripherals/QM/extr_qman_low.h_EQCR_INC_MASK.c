
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_eqcr_entry {int dummy; } ;
struct qm_eqcr {int vbit; struct qm_eqcr_entry* cursor; } ;


 struct qm_eqcr_entry* FUNC_0 (struct qm_eqcr_entry*) ;
 int VAR_0 ;

__attribute__((used)) static __inline__ void FUNC_1(struct qm_eqcr *VAR_1)
{



    struct qm_eqcr_entry *VAR_2 = VAR_1->cursor + 1;
    VAR_1->cursor = FUNC_0(VAR_2);
    if (VAR_2 != VAR_1->cursor)
        VAR_1->vbit ^= VAR_0;
}
