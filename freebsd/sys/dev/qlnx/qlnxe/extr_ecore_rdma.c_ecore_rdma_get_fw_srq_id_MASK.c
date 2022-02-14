
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {scalar_t__ srq_id_offset; } ;



u16 FUNC_0(struct ecore_hwfn *VAR_0, u16 VAR_1, bool VAR_2)
{
 if (VAR_2)
  return VAR_1;

 return VAR_1 + VAR_0->p_rdma_info->srq_id_offset;
}
