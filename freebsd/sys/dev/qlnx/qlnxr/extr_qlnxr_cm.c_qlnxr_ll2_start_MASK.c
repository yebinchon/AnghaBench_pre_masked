
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qlnxr_qp {int dummy; } ;
struct qlnxr_dev {int gsi_ll2_handle; TYPE_3__* ha; int rdma_ctx; } ;
struct ib_qp_init_attr {int dummy; } ;
struct ecore_ll2_cbs {struct qlnxr_dev* cookie; void* tx_release_cb; int rx_release_cb; void* tx_comp_cb; int rx_comp_cb; } ;
struct TYPE_6__ {int rx_num_desc; int rx_drop_ttl0_flg; int tx_num_desc; int gsi_enable; void* ai_err_no_buf; void* ai_err_packet_too_big; int tx_dest; scalar_t__ tx_tc; scalar_t__ rx_vlan_removal_en; int mtu; int conn_type; } ;
struct ecore_ll2_acquire_data {int* p_connection_handle; struct ecore_ll2_cbs* cbs; TYPE_2__ input; } ;
typedef int data ;
struct TYPE_7__ {int primary_mac; TYPE_1__* ifp; } ;
struct TYPE_5__ {int if_mtu; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 int FUNC_2 (int ,struct ecore_ll2_acquire_data*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct ecore_ll2_acquire_data*,int ,int) ;
 int FUNC_7 (int ,int *,int ) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;

int FUNC_8(struct qlnxr_dev *VAR_6,
     struct ib_qp_init_attr *VAR_7,
     struct qlnxr_qp *VAR_8)
{
 struct ecore_ll2_acquire_data VAR_9;
 struct ecore_ll2_cbs VAR_10;
 int VAR_11;

 FUNC_1(VAR_6->ha, "enter\n");


 VAR_10.rx_comp_cb = VAR_3;
 VAR_10.tx_comp_cb = VAR_4;
 VAR_10.rx_release_cb = VAR_5;
 VAR_10.tx_release_cb = VAR_4;
 VAR_10.cookie = VAR_6;
 VAR_6->gsi_ll2_handle = 0xFF;

 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.input.conn_type = VAR_2;
 VAR_9.input.mtu = VAR_6->ha->ifp->if_mtu;
 VAR_9.input.rx_num_desc = 8 * 1024;
 VAR_9.input.rx_drop_ttl0_flg = 1;
 VAR_9.input.rx_vlan_removal_en = 0;
 VAR_9.input.tx_num_desc = 8 * 1024;
 VAR_9.input.tx_tc = 0;
 VAR_9.input.tx_dest = VAR_1;
 VAR_9.input.ai_err_packet_too_big = VAR_0;
 VAR_9.input.ai_err_no_buf = VAR_0;
 VAR_9.input.gsi_enable = 1;
 VAR_9.p_connection_handle = &VAR_6->gsi_ll2_handle;
 VAR_9.cbs = &VAR_10;

 VAR_11 = FUNC_2(VAR_6->rdma_ctx, &VAR_9);

 if (VAR_11) {
  FUNC_0(VAR_6->ha,
   "ecore_ll2_acquire_connection failed: %d\n",
   VAR_11);
  return VAR_11;
 }

 FUNC_0(VAR_6->ha,
  "ll2 connection acquired successfully\n");
 VAR_11 = FUNC_3(VAR_6->rdma_ctx,
  VAR_6->gsi_ll2_handle);

 if (VAR_11) {
  FUNC_0(VAR_6->ha,
   "ecore_ll2_establish_connection failed\n", VAR_11);
  goto err1;
 }

 FUNC_0(VAR_6->ha,
  "ll2 connection established successfully\n");
 VAR_11 = FUNC_7(VAR_6->rdma_ctx, ((void*)0),
   VAR_6->ha->primary_mac);
 if (VAR_11) {
  FUNC_0(VAR_6->ha, "qlnx_rdma_ll2_set_mac_filter failed\n", VAR_11);
  goto err2;
 }

 FUNC_1(VAR_6->ha, "exit rc = %d\n", VAR_11);
 return 0;

err2:
 FUNC_5(VAR_6->rdma_ctx, VAR_6->gsi_ll2_handle);
err1:
 FUNC_4(VAR_6->rdma_ctx, VAR_6->gsi_ll2_handle);

 FUNC_1(VAR_6->ha, "exit rc = %d\n", VAR_11);
 return VAR_11;
}
