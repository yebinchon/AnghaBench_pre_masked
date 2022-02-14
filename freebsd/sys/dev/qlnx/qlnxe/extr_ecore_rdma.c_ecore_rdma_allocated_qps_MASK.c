
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_4__ {int bitmap; } ;
struct TYPE_3__ {int lock; TYPE_2__ qp_map; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

bool FUNC_3(struct ecore_hwfn *VAR_0)
{
 bool VAR_1;


 if (!VAR_0->p_rdma_info)
  return 0;

 FUNC_0(&VAR_0->p_rdma_info->lock);
 if (!VAR_0->p_rdma_info->qp_map.bitmap)
  VAR_1 = 0;
 else
  VAR_1 = !FUNC_2(&VAR_0->p_rdma_info->qp_map);
 FUNC_1(&VAR_0->p_rdma_info->lock);
 return VAR_1;
}
