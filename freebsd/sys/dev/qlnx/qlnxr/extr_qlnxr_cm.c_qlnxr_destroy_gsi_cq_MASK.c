
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlnxr_dev {TYPE_1__* ha; int rdma_ctx; } ;
struct qlnxr_cq {scalar_t__ icid; int pbl; } ;
struct ib_qp_init_attr {int recv_cq; int send_cq; } ;
struct ecore_rdma_destroy_cq_out_params {int dummy; } ;
struct ecore_rdma_destroy_cq_in_params {scalar_t__ icid; } ;
struct TYPE_2__ {int cdev; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,struct ecore_rdma_destroy_cq_in_params*,struct ecore_rdma_destroy_cq_out_params*) ;
 struct qlnxr_cq* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct qlnxr_dev *VAR_0,
  struct ib_qp_init_attr *VAR_1)
{
 struct ecore_rdma_destroy_cq_in_params VAR_2;
 struct ecore_rdma_destroy_cq_out_params VAR_3;
 struct qlnxr_cq *VAR_4;

 FUNC_0(VAR_0->ha, "enter\n");

 VAR_4 = FUNC_3((VAR_1->send_cq));
 VAR_2.icid = VAR_4->icid;
 FUNC_2(VAR_0->rdma_ctx, &VAR_2, &VAR_3);
 FUNC_1(&VAR_0->ha->cdev, &VAR_4->pbl);

 VAR_4 = FUNC_3((VAR_1->recv_cq));

 if (VAR_2.icid != VAR_4->icid) {
  VAR_2.icid = VAR_4->icid;
  FUNC_2(VAR_0->rdma_ctx, &VAR_2, &VAR_3);
  FUNC_1(&VAR_0->ha->cdev, &VAR_4->pbl);
 }

 FUNC_0(VAR_0->ha, "exit\n");

 return;
}
