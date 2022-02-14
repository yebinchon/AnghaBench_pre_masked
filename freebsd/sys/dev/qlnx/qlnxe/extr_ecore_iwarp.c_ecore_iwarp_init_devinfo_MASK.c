
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_rdma_device {int max_qp_req_rd_atomic_resc; int max_qp_resp_rd_atomic_resc; scalar_t__ max_qp; scalar_t__ max_cq; int max_inline; } ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int num_qps; struct ecore_rdma_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;

void
FUNC_1(struct ecore_hwfn *VAR_6)
{
 struct ecore_rdma_device *VAR_7 = VAR_6->p_rdma_info->dev;

 VAR_7->max_inline = VAR_4;
 VAR_7->max_qp = FUNC_0(VAR_5,
     VAR_3,
     VAR_6->p_rdma_info->num_qps) -
  VAR_2;

 VAR_7->max_cq = VAR_7->max_qp;

 VAR_7->max_qp_resp_rd_atomic_resc = VAR_0;
 VAR_7->max_qp_req_rd_atomic_resc = VAR_1;
}
