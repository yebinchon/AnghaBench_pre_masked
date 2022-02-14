
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_mr {struct qm_mr_entry* cursor; int fill; } ;
struct qm_portal {struct qm_mr mr; } ;
struct qm_mr_entry {int dummy; } ;



__attribute__((used)) static __inline__ struct qm_mr_entry *FUNC_0(struct qm_portal *VAR_0)
{
    register struct qm_mr *VAR_1 = &VAR_0->mr;
    if (!VAR_1->fill)
        return ((void*)0);
    return VAR_1->cursor;
}
