
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ib_qp {int qp_num; } ;
struct TYPE_9__ {int max_wr; } ;
struct TYPE_8__ {int max_wr; } ;
struct qlnxr_qp {void* rqe_wr_id; struct ib_qp ibqp; void* wqe_wr_id; TYPE_3__ sq; TYPE_2__ rq; } ;
struct qlnxr_dev {TYPE_5__* ha; TYPE_4__* gsi_rqcq; int gsi_ll2_mac_address; } ;
struct TYPE_7__ {int max_recv_wr; int max_send_wr; } ;
struct ib_qp_init_attr {TYPE_1__ cap; } ;
struct TYPE_11__ {int primary_mac; } ;
struct TYPE_10__ {void* cq_type; } ;


 int VAR_0 ;
 struct ib_qp* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (TYPE_5__*,char*,...) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct qlnxr_dev*,struct ib_qp_init_attr*) ;
 int FUNC_7 (struct qlnxr_dev*,struct ib_qp_init_attr*) ;
 int FUNC_8 (struct qlnxr_dev*,struct ib_qp_init_attr*,struct qlnxr_qp*) ;
 int FUNC_9 (struct qlnxr_dev*) ;
 int FUNC_10 (struct qlnxr_dev*,struct qlnxr_qp*,struct ib_qp_init_attr*) ;

struct ib_qp*
FUNC_11(struct qlnxr_dev *VAR_4,
   struct ib_qp_init_attr *VAR_5,
   struct qlnxr_qp *VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_4->ha, "enter\n");

 VAR_7 = FUNC_6(VAR_4, VAR_5);

 if (VAR_7) {
  FUNC_1(VAR_4->ha, "qlnxr_check_gsi_qp_attrs failed\n");
  return FUNC_0(VAR_7);
 }

 VAR_7 = FUNC_8(VAR_4, VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_4->ha, "qlnxr_ll2_start failed\n");
  return FUNC_0(VAR_7);
 }


 VAR_6->ibqp.qp_num = 1;
 VAR_6->rq.max_wr = VAR_5->cap.max_recv_wr;
 VAR_6->sq.max_wr = VAR_5->cap.max_send_wr;

 VAR_6->rqe_wr_id = FUNC_4(VAR_6->rq.max_wr * sizeof(*VAR_6->rqe_wr_id),
    VAR_2);
 if (!VAR_6->rqe_wr_id) {
  FUNC_1(VAR_4->ha, "(!qp->rqe_wr_id)\n");
  goto err;
 }

 VAR_6->wqe_wr_id = FUNC_4(VAR_6->sq.max_wr * sizeof(*VAR_6->wqe_wr_id),
    VAR_2);
 if (!VAR_6->wqe_wr_id) {
  FUNC_1(VAR_4->ha, "(!qp->wqe_wr_id)\n");
  goto err;
 }

 FUNC_10(VAR_4, VAR_6, VAR_5);
 FUNC_5(VAR_4->gsi_ll2_mac_address, VAR_4->ha->primary_mac, VAR_1);


 FUNC_7(VAR_4, VAR_5);
 VAR_4->gsi_rqcq->cq_type = VAR_3;
 VAR_4->gsi_rqcq->cq_type = VAR_3;

 FUNC_2(VAR_4->ha, "exit &qp->ibqp = %p\n", &VAR_6->ibqp);

 return &VAR_6->ibqp;
err:
 FUNC_3(VAR_6->rqe_wr_id);

 VAR_7 = FUNC_9(VAR_4);

 FUNC_2(VAR_4->ha, "exit with error\n");

 return FUNC_0(-VAR_0);
}
