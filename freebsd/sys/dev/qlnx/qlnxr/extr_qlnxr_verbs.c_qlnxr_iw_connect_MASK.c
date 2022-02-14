
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {void* s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct qlnxr_qp {int ecore_qp; int rq_psn; } ;
struct qlnxr_iw_ep {struct iw_cm_id* cm_id; struct qlnxr_qp* qp; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int rdma_ctx; TYPE_4__* ha; int qpidr; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;int (* add_ref ) (struct iw_cm_id*) ;int remote_addr; int local_addr; int device; } ;
struct iw_cm_conn_param {int private_data_len; int private_data; int ird; int ord; int qpn; } ;
struct TYPE_9__ {int private_data_len; int private_data; int ird; int ord; scalar_t__ vlan; void* local_port; void* remote_port; void** local_ip; void** remote_ip; int ip_version; } ;
struct ecore_iwarp_connect_out {int local_mac_addr; int qp; TYPE_3__ cm_info; scalar_t__ remote_mac_addr; scalar_t__ mss; struct qlnxr_iw_ep* cb_context; int event_cb; } ;
struct ecore_iwarp_connect_in {int local_mac_addr; int qp; TYPE_3__ cm_info; scalar_t__ remote_mac_addr; scalar_t__ mss; struct qlnxr_iw_ep* cb_context; int event_cb; } ;
struct TYPE_10__ {int primary_mac; TYPE_2__* ifp; } ;
typedef TYPE_4__ qlnx_host_t ;
struct TYPE_8__ {int if_drv_flags; scalar_t__ if_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 int FUNC_3 (int ,struct ecore_iwarp_connect_out*,struct ecore_iwarp_connect_out*) ;
 struct qlnxr_dev* FUNC_4 (int ) ;
 struct qlnxr_qp* FUNC_5 (int *,int ) ;
 int FUNC_6 (struct qlnxr_iw_ep*) ;
 struct qlnxr_iw_ep* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct ecore_iwarp_connect_out*,int ,int) ;
 void* FUNC_10 (void*) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (struct qlnxr_dev*,struct sockaddr_in*,struct sockaddr_in*,int *) ;
 int VAR_6 ;
 int FUNC_13 (struct iw_cm_id*) ;
 int FUNC_14 (struct iw_cm_id*) ;

int
FUNC_15(struct iw_cm_id *VAR_7, struct iw_cm_conn_param *VAR_8)
{
 struct qlnxr_dev *VAR_9;
 struct ecore_iwarp_connect_out VAR_10;
 struct ecore_iwarp_connect_in VAR_11;
 struct qlnxr_iw_ep *VAR_12;
 struct qlnxr_qp *VAR_13;
 struct sockaddr_in *VAR_14;
 struct sockaddr_in *VAR_15;
 int VAR_16 = 0;
 qlnx_host_t *VAR_17;

 VAR_9 = FUNC_4((VAR_7->device));
 VAR_17 = VAR_9->ha;

 FUNC_2(VAR_17, "[cm_id, conn_param] = [%p, %p] "
  "enter \n", VAR_7, VAR_8);

 if (!(VAR_17->ifp->if_drv_flags & VAR_5))
  return -VAR_1;

 VAR_13 = FUNC_5(&VAR_9->qpidr, VAR_8->qpn);

 VAR_14 = (struct sockaddr_in *)&VAR_7->local_addr;
 VAR_15 = (struct sockaddr_in *)&VAR_7->remote_addr;

 FUNC_2(VAR_17,
  "local = [%d.%d.%d.%d, %d] remote = [%d.%d.%d.%d, %d]\n",
  FUNC_0((VAR_14->sin_addr.s_addr)), VAR_14->sin_port,
  FUNC_0((VAR_15->sin_addr.s_addr)), VAR_15->sin_port);

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_4);
 if (!VAR_12) {
  FUNC_1(VAR_17, "struct qlnxr_iw_ep "
   "alloc memory failed\n");
  return -VAR_2;
 }

 VAR_12->dev = VAR_9;
 VAR_12->qp = VAR_13;
 VAR_7->add_ref(VAR_7);
 VAR_12->cm_id = VAR_7;

 FUNC_9(&VAR_11, 0, sizeof (struct ecore_iwarp_connect_in));
 FUNC_9(&VAR_10, 0, sizeof (struct ecore_iwarp_connect_out));

 VAR_11.event_cb = VAR_6;
 VAR_11.cb_context = VAR_12;

 VAR_11.cm_info.ip_version = VAR_0;

 VAR_11.cm_info.remote_ip[0] = FUNC_10(VAR_15->sin_addr.s_addr);
 VAR_11.cm_info.local_ip[0] = FUNC_10(VAR_14->sin_addr.s_addr);
 VAR_11.cm_info.remote_port = FUNC_11(VAR_15->sin_port);
 VAR_11.cm_info.local_port = FUNC_11(VAR_14->sin_port);
 VAR_11.cm_info.vlan = 0;
 VAR_11.mss = VAR_9->ha->ifp->if_mtu - 40;

 FUNC_2(VAR_17, "remote_ip = [%d.%d.%d.%d] "
  "local_ip = [%d.%d.%d.%d] remote_port = %d local_port = %d "
  "vlan = %d\n",
  FUNC_0((VAR_11.cm_info.remote_ip[0])),
  FUNC_0((VAR_11.cm_info.local_ip[0])),
  VAR_11.cm_info.remote_port, VAR_11.cm_info.local_port,
  VAR_11.cm_info.vlan);

 VAR_16 = FUNC_12(VAR_9, VAR_14, VAR_15, (u8 *)VAR_11.remote_mac_addr);

 if (VAR_16) {
  FUNC_1(VAR_17, "qlnxr_addr4_resolve failed\n");
  goto err;
 }

 FUNC_2(VAR_17, "ord = %d ird=%d private_data=%p"
  " private_data_len=%d rq_psn=%d\n",
  VAR_8->ord, VAR_8->ird, VAR_8->private_data,
  VAR_8->private_data_len, VAR_13->rq_psn);

 VAR_11.cm_info.ord = VAR_8->ord;
 VAR_11.cm_info.ird = VAR_8->ird;
 VAR_11.cm_info.private_data = VAR_8->private_data;
 VAR_11.cm_info.private_data_len = VAR_8->private_data_len;
 VAR_11.qp = VAR_13->ecore_qp;

 FUNC_8(VAR_11.local_mac_addr, VAR_9->ha->primary_mac, VAR_3);

 VAR_16 = FUNC_3(VAR_9->rdma_ctx, &VAR_11, &VAR_10);

 if (VAR_16) {
  FUNC_2(VAR_17, "ecore_iwarp_connect failed\n");
  goto err;
 }

 FUNC_2(VAR_17, "exit\n");

 return VAR_16;

err:
 VAR_7->rem_ref(VAR_7);
 FUNC_6(VAR_12);

 FUNC_2(VAR_17, "exit [%d]\n", VAR_16);
 return VAR_16;
}
