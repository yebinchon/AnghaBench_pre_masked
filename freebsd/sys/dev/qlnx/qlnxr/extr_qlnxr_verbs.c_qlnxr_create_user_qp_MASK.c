
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ureq ;
struct qlnxr_ucontext {int dummy; } ;
struct TYPE_6__ {int num_pbes; } ;
struct TYPE_8__ {TYPE_3__* pbl_tbl; TYPE_2__ pbl_info; } ;
struct qlnxr_qp {int ecore_qp; int icid; int qp_id; TYPE_4__ urq; int srq; TYPE_4__ usq; } ;
struct qlnxr_pd {int dummy; } ;
struct qlnxr_dev {int rdma_ctx; int * ha; } ;
struct qlnxr_create_qp_ureq {int rq_pbl_ptr; int rq_num_pages; int sq_pbl_ptr; int sq_num_pages; int qp_handle_hi; int qp_handle_lo; int rq_len; int rq_addr; int sq_len; int sq_addr; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_qp_init_attr {int dummy; } ;
struct ib_pd {TYPE_1__* uobject; } ;
struct ecore_rdma_destroy_qp_out_params {int dummy; } ;
struct ecore_rdma_create_qp_out_params {int icid; int qp_id; } ;
struct ecore_rdma_create_qp_in_params {int rq_pbl_ptr; int rq_num_pages; int sq_pbl_ptr; int sq_num_pages; int qp_handle_hi; int qp_handle_lo; int rq_len; int rq_addr; int sq_len; int sq_addr; } ;
typedef int qlnx_host_t ;
typedef int in_params ;
struct TYPE_7__ {int pa; } ;
struct TYPE_5__ {struct ib_ucontext* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (struct qlnxr_dev*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int ,struct qlnxr_create_qp_ureq*,struct ecore_rdma_create_qp_out_params*) ;
 int FUNC_5 (int ,int ,struct ecore_rdma_destroy_qp_out_params*) ;
 struct qlnxr_pd* FUNC_6 (struct ib_pd*) ;
 struct qlnxr_ucontext* FUNC_7 (struct ib_ucontext*) ;
 int FUNC_8 (struct qlnxr_create_qp_ureq*,struct ib_udata*,int) ;
 int FUNC_9 (struct qlnxr_create_qp_ureq*,int ,int) ;
 int FUNC_10 (struct qlnxr_dev*,struct qlnxr_qp*) ;
 int FUNC_11 (struct qlnxr_dev*,struct qlnxr_qp*,struct ib_udata*) ;
 int FUNC_12 (struct qlnxr_dev*,struct qlnxr_pd*,struct qlnxr_qp*,struct ib_qp_init_attr*,int,struct qlnxr_create_qp_ureq*) ;
 int FUNC_13 (struct ib_ucontext*,struct qlnxr_dev*,TYPE_4__*,int ,int ,int ,int ,int) ;
 int FUNC_14 (struct qlnxr_dev*,struct qlnxr_qp*,struct ecore_rdma_create_qp_out_params*) ;
 int FUNC_15 (struct qlnxr_dev*,struct qlnxr_qp*) ;

__attribute__((used)) static int
FUNC_16(struct qlnxr_dev *VAR_2,
 struct qlnxr_qp *VAR_3,
 struct ib_pd *VAR_4,
 struct ib_udata *VAR_5,
 struct ib_qp_init_attr *VAR_6)
{
 struct ecore_rdma_destroy_qp_out_params VAR_7;
 struct ecore_rdma_create_qp_in_params VAR_8;
 struct ecore_rdma_create_qp_out_params VAR_9;
 struct qlnxr_pd *VAR_10 = FUNC_6(VAR_4);
 struct ib_ucontext *VAR_11 = ((void*)0);
 struct qlnxr_ucontext *VAR_12 = ((void*)0);
 struct qlnxr_create_qp_ureq VAR_13;
 int VAR_14 = FUNC_1(VAR_2);
 int VAR_15 = -VAR_0;
 qlnx_host_t *VAR_16;

 VAR_16 = VAR_2->ha;

 FUNC_3(VAR_16, "enter\n");

 VAR_11 = VAR_4->uobject->context;
 VAR_12 = FUNC_7(VAR_11);

 FUNC_9(&VAR_13, 0, sizeof(VAR_13));
 VAR_15 = FUNC_8(&VAR_13, VAR_5, sizeof(VAR_13));

 if (VAR_15) {
  FUNC_2(VAR_16, "ib_copy_from_udata failed [%d]\n", VAR_15);
  return VAR_15;
 }


 VAR_15 = FUNC_13(VAR_11, VAR_2, &VAR_3->usq, VAR_13.sq_addr,
      VAR_13.sq_len, 0, 0,
      VAR_14);
 if (VAR_15) {
  FUNC_2(VAR_16, "qlnxr_init_user_queue failed [%d]\n", VAR_15);
  return VAR_15;
 }

 if (!VAR_3->srq) {

  VAR_15 = FUNC_13(VAR_11, VAR_2, &VAR_3->urq, VAR_13.rq_addr,
       VAR_13.rq_len, 0, 0,
       VAR_14);

  if (VAR_15) {
   FUNC_2(VAR_16, "qlnxr_init_user_queue failed [%d]\n", VAR_15);
   return VAR_15;
  }
 }

 FUNC_9(&VAR_8, 0, sizeof(VAR_8));
 FUNC_12(VAR_2, VAR_10, VAR_3, VAR_6, 0, &VAR_8);
 VAR_8.qp_handle_lo = VAR_13.qp_handle_lo;
 VAR_8.qp_handle_hi = VAR_13.qp_handle_hi;
 VAR_8.sq_num_pages = VAR_3->usq.pbl_info.num_pbes;
 VAR_8.sq_pbl_ptr = VAR_3->usq.pbl_tbl->pa;

 if (!VAR_3->srq) {
  VAR_8.rq_num_pages = VAR_3->urq.pbl_info.num_pbes;
  VAR_8.rq_pbl_ptr = VAR_3->urq.pbl_tbl->pa;
 }

 VAR_3->ecore_qp = FUNC_4(VAR_2->rdma_ctx, &VAR_8, &VAR_9);

 if (!VAR_3->ecore_qp) {
  VAR_15 = -VAR_1;
  FUNC_2(VAR_16, "ecore_rdma_create_qp failed\n");
  goto err1;
 }

 if (FUNC_0(VAR_2))
  FUNC_14(VAR_2, VAR_3, &VAR_9);

 VAR_3->qp_id = VAR_9.qp_id;
 VAR_3->icid = VAR_9.icid;

 VAR_15 = FUNC_11(VAR_2, VAR_3, VAR_5);

 if (VAR_15) {
  FUNC_2(VAR_16, "qlnxr_copy_qp_uresp failed\n");
  goto err;
 }

 FUNC_15(VAR_2, VAR_3);

 FUNC_3(VAR_16, "exit\n");
 return 0;
err:
 VAR_15 = FUNC_5(VAR_2->rdma_ctx, VAR_3->ecore_qp, &VAR_7);

 if (VAR_15)
  FUNC_3(VAR_16, "fatal fault\n");

err1:
 FUNC_10(VAR_2, VAR_3);

 FUNC_3(VAR_16, "exit[%d]\n", VAR_15);
 return VAR_15;
}
