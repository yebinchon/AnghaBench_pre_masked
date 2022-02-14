
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct ecore_bmap {int dummy; } ;
struct TYPE_2__ {struct ecore_bmap srq_map; struct ecore_bmap xrc_srq_map; } ;



__attribute__((used)) static struct ecore_bmap *FUNC_0(struct ecore_hwfn *VAR_0, bool VAR_1)
{
 if (VAR_1)
  return &VAR_0->p_rdma_info->xrc_srq_map;

 return &VAR_0->p_rdma_info->srq_map;
}
