
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int pbl; } ;
struct TYPE_3__ {int pbl; } ;
struct qlnxr_qp {int icid; int qp_id; int ecore_qp; TYPE_2__ rq; int srq; TYPE_1__ sq; } ;
struct qlnxr_dev {int rdma_ctx; int cdev; int * ha; } ;
struct ecore_rdma_create_qp_out_params {int icid; int qp_id; } ;
struct ecore_rdma_create_qp_in_params {void* rq_pbl_ptr; void* rq_num_pages; void* sq_pbl_ptr; void* sq_num_pages; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int *,int *) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int ,struct ecore_rdma_create_qp_in_params*,struct ecore_rdma_create_qp_out_params*) ;
 int FUNC_6 (struct qlnxr_dev*,struct qlnxr_qp*) ;

__attribute__((used)) static int
FUNC_7(struct qlnxr_dev *VAR_7,
 struct qlnxr_qp *VAR_8,
 struct ecore_rdma_create_qp_in_params *VAR_9,
 u32 VAR_10,
 u32 VAR_11)
{
 struct ecore_rdma_create_qp_out_params VAR_12;
 int VAR_13;
 qlnx_host_t *VAR_14;

 VAR_14 = VAR_7->ha;

 FUNC_1(VAR_14, "enter\n");

        VAR_13 = FUNC_2(
                VAR_7->cdev,
                VAR_3,
                VAR_1,
                VAR_0,
                VAR_10,
                VAR_6,
                &VAR_8->sq.pbl,
                ((void*)0));

 if (VAR_13) {
  FUNC_0(VAR_14, "ecore_chain_alloc qp->sq.pbl failed[%d]\n", VAR_13);
  return VAR_13;
 }

 VAR_9->sq_num_pages = FUNC_3(&VAR_8->sq.pbl);
 VAR_9->sq_pbl_ptr = FUNC_4(&VAR_8->sq.pbl);

 if (!VAR_8->srq) {

                VAR_13 = FUNC_2(
                        VAR_7->cdev,
                        VAR_2,
                        VAR_1,
                        VAR_0,
                        VAR_11,
                        VAR_5,
                        &VAR_8->rq.pbl,
                        ((void*)0));

  if (VAR_13) {
   FUNC_0(VAR_14,
    "ecore_chain_alloc qp->rq.pbl failed[%d]\n", VAR_13);
   return VAR_13;
  }

  VAR_9->rq_num_pages = FUNC_3(&VAR_8->rq.pbl);
  VAR_9->rq_pbl_ptr = FUNC_4(&VAR_8->rq.pbl);
 }

 VAR_8->ecore_qp = FUNC_5(VAR_7->rdma_ctx, VAR_9, &VAR_12);

 if (!VAR_8->ecore_qp) {
  FUNC_0(VAR_14, "qp->ecore_qp == NULL\n");
  return -VAR_4;
 }

 VAR_8->qp_id = VAR_12.qp_id;
 VAR_8->icid = VAR_12.icid;

 FUNC_6(VAR_7, VAR_8);

 FUNC_1(VAR_14, "exit\n");
 return 0;
}
