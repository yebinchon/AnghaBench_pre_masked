
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_2__ sin_addr; } ;
struct qlnxr_iw_listener {int backlog; int ecore_handle; struct iw_cm_id* cm_id; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int rdma_ctx; TYPE_3__* ha; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;struct qlnxr_iw_listener* provider_data; int (* add_ref ) (struct iw_cm_id*) ;int local_addr; int device; } ;
struct ecore_iwarp_listen_out {int max_backlog; int handle; int port; scalar_t__ vlan; int * ip_addr; int ip_version; int event_cb; struct qlnxr_iw_listener* cb_context; } ;
struct ecore_iwarp_listen_in {int max_backlog; int handle; int port; scalar_t__ vlan; int * ip_addr; int ip_version; int event_cb; struct qlnxr_iw_listener* cb_context; } ;
struct TYPE_8__ {TYPE_1__* ifp; } ;
typedef TYPE_3__ qlnx_host_t ;
struct TYPE_6__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int FUNC_3 (int ,struct ecore_iwarp_listen_out*,struct ecore_iwarp_listen_out*) ;
 struct qlnxr_dev* FUNC_4 (int ) ;
 int FUNC_5 (struct qlnxr_iw_listener*) ;
 struct qlnxr_iw_listener* FUNC_6 (int,int ) ;
 int FUNC_7 (struct ecore_iwarp_listen_out*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int FUNC_10 (struct iw_cm_id*) ;
 int FUNC_11 (struct iw_cm_id*) ;

int
FUNC_12(struct iw_cm_id *VAR_6, int VAR_7)
{
 struct qlnxr_dev *VAR_8;
 struct qlnxr_iw_listener *VAR_9;
 struct ecore_iwarp_listen_in VAR_10;
 struct ecore_iwarp_listen_out VAR_11;
 struct sockaddr_in *VAR_12;
 qlnx_host_t *VAR_13;
 int VAR_14;

 VAR_8 = FUNC_4((VAR_6->device));
 VAR_13 = VAR_8->ha;

 FUNC_2(VAR_13, "enter\n");

 if (!(VAR_13->ifp->if_drv_flags & VAR_4))
  return -VAR_1;

 VAR_12 = (struct sockaddr_in *)&VAR_6->local_addr;

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_3);

 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_13, "listener memory alloc failed\n");
  return -VAR_2;
 }

 VAR_9->dev = VAR_8;
 VAR_6->add_ref(VAR_6);
 VAR_9->cm_id = VAR_6;
 VAR_9->backlog = VAR_7;

 FUNC_7(&VAR_10, 0, sizeof (struct ecore_iwarp_listen_in));
 FUNC_7(&VAR_11, 0, sizeof (struct ecore_iwarp_listen_out));

 VAR_10.cb_context = VAR_9;
 VAR_10.event_cb = VAR_5;
 VAR_10.max_backlog = VAR_7;

 VAR_10.ip_version = VAR_0;

 VAR_10.ip_addr[0] = FUNC_8(VAR_12->sin_addr.s_addr);
 VAR_10.port = FUNC_9(VAR_12->sin_port);
 VAR_10.vlan = 0;

 FUNC_2(VAR_13, "[%d.%d.%d.%d, %d] iparamsport=%d\n",
  FUNC_0((VAR_12->sin_addr.s_addr)),
  VAR_12->sin_port, VAR_10.port);

 VAR_14 = FUNC_3(VAR_8->rdma_ctx, &VAR_10, &VAR_11);
 if (VAR_14) {
  FUNC_1(VAR_13,
   "ecore_iwarp_create_listen failed rc = %d\n", VAR_14);
  goto err;
 }

 VAR_9->ecore_handle = VAR_11.handle;
 VAR_6->provider_data = VAR_9;

 FUNC_2(VAR_13, "exit\n");
 return VAR_14;

err:
 VAR_6->rem_ref(VAR_6);
 FUNC_5(VAR_9);

 FUNC_2(VAR_13, "exit [%d]\n", VAR_14);
 return VAR_14;
}
