
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qlnxr_qp {int ecore_qp; struct qlnxr_iw_ep* ep; } ;
struct qlnxr_iw_ep {struct qlnxr_qp* qp; int ecore_context; struct iw_cm_id* cm_id; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int rdma_ctx; int qpidr; TYPE_2__* ha; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;int (* add_ref ) (struct iw_cm_id*) ;scalar_t__ provider_data; } ;
struct iw_cm_conn_param {int qpn; int ord; int ird; int private_data_len; int private_data; } ;
struct ecore_iwarp_accept_in {int ord; int ird; int private_data_len; int private_data; int qp; struct qlnxr_iw_ep* cb_context; int ep_context; } ;
struct TYPE_6__ {TYPE_1__* ifp; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_5__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 int FUNC_2 (int ,struct ecore_iwarp_accept_in*) ;
 struct qlnxr_qp* FUNC_3 (int *,int) ;
 int FUNC_4 (struct iw_cm_id*) ;
 int FUNC_5 (struct iw_cm_id*) ;

int
FUNC_6(struct iw_cm_id *VAR_2,
 struct iw_cm_conn_param *VAR_3)
{
 struct qlnxr_iw_ep *VAR_4 = (struct qlnxr_iw_ep *)VAR_2->provider_data;
 struct qlnxr_dev *VAR_5 = VAR_4->dev;
 struct qlnxr_qp *VAR_6;
 struct ecore_iwarp_accept_in VAR_7;
 int VAR_8;
 qlnx_host_t *VAR_9;

 VAR_9 = VAR_5->ha;

 FUNC_1(VAR_9, "enter  qpid=%d\n", VAR_3->qpn);

 if (!(VAR_9->ifp->if_drv_flags & VAR_1))
  return -VAR_0;

 VAR_6 = FUNC_3(&VAR_5->qpidr, VAR_3->qpn);
 if (!VAR_6) {
  FUNC_0(VAR_9, "idr_find failed invalid qpn = %d\n",
   VAR_3->qpn);
  return -VAR_0;
 }
 VAR_4->qp = VAR_6;
 VAR_6->ep = VAR_4;
 VAR_2->add_ref(VAR_2);
 VAR_4->cm_id = VAR_2;

 VAR_7.ep_context = VAR_4->ecore_context;
 VAR_7.cb_context = VAR_4;
 VAR_7.qp = VAR_4->qp->ecore_qp;
 VAR_7.private_data = VAR_3->private_data;
 VAR_7.private_data_len = VAR_3->private_data_len;
 VAR_7.ird = VAR_3->ird;
 VAR_7.ord = VAR_3->ord;

 VAR_8 = FUNC_2(VAR_5->rdma_ctx, &VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_9, "ecore_iwarp_accept failed %d\n", VAR_8);
  goto err;
 }

 FUNC_1(VAR_9, "exit\n");
 return 0;
err:
 VAR_2->rem_ref(VAR_2);
 FUNC_1(VAR_9, "exit rc = %d\n", VAR_8);
 return VAR_8;
}
