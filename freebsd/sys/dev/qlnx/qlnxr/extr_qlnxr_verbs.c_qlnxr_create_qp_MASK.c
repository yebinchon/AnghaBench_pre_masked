
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp {int qp_num; } ;
struct qlnxr_qp {struct ib_qp ibqp; int qp_id; } ;
struct qlnxr_pd {int dummy; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; int recv_cq; int send_cq; int event_handler; } ;
struct ib_pd {int device; } ;
typedef int qlnx_host_t ;
struct TYPE_2__ {int icid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_qp* FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_1__* FUNC_3 (int ) ;
 struct qlnxr_dev* FUNC_4 (int ) ;
 struct qlnxr_pd* FUNC_5 (struct ib_pd*) ;
 int FUNC_6 (struct qlnxr_qp*) ;
 struct qlnxr_qp* FUNC_7 (int) ;
 int FUNC_8 (struct ib_pd*,struct qlnxr_dev*,struct ib_qp_init_attr*,struct ib_udata*) ;
 struct ib_qp* FUNC_9 (struct qlnxr_dev*,struct ib_qp_init_attr*,struct qlnxr_qp*) ;
 int FUNC_10 (struct qlnxr_dev*,struct qlnxr_qp*,struct ib_pd*,struct ib_qp_init_attr*) ;
 int FUNC_11 (struct qlnxr_dev*,struct qlnxr_qp*,struct ib_pd*,struct ib_udata*,struct ib_qp_init_attr*) ;
 int FUNC_12 (struct qlnxr_dev*,struct qlnxr_qp*,int ) ;
 int FUNC_13 (struct qlnxr_dev*,struct qlnxr_qp*,struct qlnxr_pd*,struct ib_qp_init_attr*) ;

struct ib_qp *
FUNC_14(struct ib_pd *VAR_3,
  struct ib_qp_init_attr *VAR_4,
  struct ib_udata *VAR_5)
{
 struct qlnxr_dev *VAR_6 = FUNC_4(VAR_3->device);
 struct qlnxr_pd *VAR_7 = FUNC_5(VAR_3);
 struct qlnxr_qp *VAR_8;
 int VAR_9 = 0;
 qlnx_host_t *VAR_10;

 VAR_10 = VAR_6->ha;

 FUNC_2(VAR_10, "enter\n");

 VAR_9 = FUNC_8(VAR_3, VAR_6, VAR_4, VAR_5);
 if (VAR_9) {
  FUNC_1(VAR_10, "qlnxr_check_qp_attrs failed [%d]\n", VAR_9);
  return FUNC_0(VAR_9);
 }

 FUNC_2(VAR_10, "called from %s, event_handle=%p,"
  " eepd=%p sq_cq=%p, sq_icid=%d, rq_cq=%p, rq_icid=%d\n",
  (VAR_5 ? "user library" : "kernel"),
  VAR_4->event_handler, VAR_7,
  FUNC_3(VAR_4->send_cq),
  FUNC_3(VAR_4->send_cq)->icid,
  FUNC_3(VAR_4->recv_cq),
  FUNC_3(VAR_4->recv_cq)->icid);

 VAR_8 = FUNC_7(sizeof(struct qlnxr_qp));

 if (!VAR_8) {
  FUNC_1(VAR_10, "kzalloc(qp) failed\n");
  return FUNC_0(-VAR_1);
 }

 FUNC_13(VAR_6, VAR_8, VAR_7, VAR_4);

 if (VAR_4->qp_type == VAR_2) {
  FUNC_1(VAR_10, "calling qlnxr_create_gsi_qp\n");
  return FUNC_9(VAR_6, VAR_4, VAR_8);
 }

 if (VAR_5) {
  VAR_9 = FUNC_11(VAR_6, VAR_8, VAR_3, VAR_5, VAR_4);

  if (VAR_9) {
   FUNC_1(VAR_10, "qlnxr_create_user_qp failed\n");
   goto err;
  }
 } else {
  VAR_9 = FUNC_10(VAR_6, VAR_8, VAR_3, VAR_4);

  if (VAR_9) {
   FUNC_1(VAR_10, "qlnxr_create_kernel_qp failed\n");
   goto err;
  }
 }

 VAR_8->ibqp.qp_num = VAR_8->qp_id;

 VAR_9 = FUNC_12(VAR_6, VAR_8, VAR_8->qp_id);

 if (VAR_9) {
  FUNC_1(VAR_10, "qlnxr_idr_add failed\n");
  goto err;
 }

 FUNC_2(VAR_10, "exit [%p]\n", &VAR_8->ibqp);

 return &VAR_8->ibqp;
err:
 FUNC_6(VAR_8);

 FUNC_2(VAR_10, "failed exit\n");
 return FUNC_0(-VAR_0);
}
