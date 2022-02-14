
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int lock; int ref_cnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_0)
{
 FUNC_0(&VAR_0->p_rdma_info->lock);
 VAR_0->p_rdma_info->ref_cnt--;
 FUNC_1(&VAR_0->p_rdma_info->lock);
}
