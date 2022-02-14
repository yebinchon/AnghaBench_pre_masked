
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ooo_opaque {int dummy; } ;
struct ecore_hwfn {TYPE_2__* p_ooo_info; } ;
struct TYPE_3__ {int num_of_cqes; scalar_t__ head_idx; int p_cqes; } ;
struct TYPE_4__ {TYPE_1__ ooo_history; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct ecore_hwfn *VAR_0)
{
 FUNC_1(VAR_0->p_ooo_info);
 FUNC_0(VAR_0->p_ooo_info->ooo_history.p_cqes,
        VAR_0->p_ooo_info->ooo_history.num_of_cqes *
        sizeof(struct ooo_opaque));
 VAR_0->p_ooo_info->ooo_history.head_idx = 0;
}
