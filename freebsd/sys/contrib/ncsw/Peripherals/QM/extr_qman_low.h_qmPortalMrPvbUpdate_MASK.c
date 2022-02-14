
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qm_mr {int pi; scalar_t__ pmode; int vbit; int fill; int ring; } ;
struct qm_portal {struct qm_mr mr; } ;
struct qm_mr_entry {int verb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qm_mr_entry*) ;
 scalar_t__ VAR_2 ;
 struct qm_mr_entry* FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static __inline__ void FUNC_4(struct qm_portal *VAR_3)
{
    register struct qm_mr *VAR_4 = &VAR_3->mr;
    struct qm_mr_entry *VAR_5 = FUNC_2(VAR_4->ring, FUNC_3(VAR_4->pi));



    FUNC_1(FUNC_2(VAR_4->ring, FUNC_3(VAR_4->pi)));
    if ((VAR_5->verb & VAR_1) == VAR_4->vbit) {
        VAR_4->pi = (uint8_t)((VAR_4->pi + 1) & (VAR_0 - 1));
        if (!VAR_4->pi)
            VAR_4->vbit ^= VAR_1;
        VAR_4->fill++;
    }
}
