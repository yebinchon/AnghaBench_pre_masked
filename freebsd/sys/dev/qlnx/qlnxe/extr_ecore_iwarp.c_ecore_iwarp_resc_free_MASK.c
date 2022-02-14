
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_iwarp_info {scalar_t__ mpa_intermediate_buf; scalar_t__ mpa_bufs; scalar_t__ partial_fpdus; int qp_lock; int iw_lock; } ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; int p_dev; } ;
struct TYPE_2__ {int tcp_cid_map; struct ecore_iwarp_info iwarp; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*,int *,int) ;

void
FUNC_4(struct ecore_hwfn *VAR_0)
{
 struct ecore_iwarp_info *VAR_1 = &VAR_0->p_rdma_info->iwarp;





 FUNC_2(VAR_0);
 if (VAR_1->partial_fpdus)
  FUNC_0(VAR_0->p_dev, VAR_1->partial_fpdus);
 if (VAR_1->mpa_bufs)
  FUNC_0(VAR_0->p_dev, VAR_1->mpa_bufs);
 if (VAR_1->mpa_intermediate_buf)
  FUNC_0(VAR_0->p_dev, VAR_1->mpa_intermediate_buf);

 FUNC_3(VAR_0, &VAR_0->p_rdma_info->tcp_cid_map, 1);
}
