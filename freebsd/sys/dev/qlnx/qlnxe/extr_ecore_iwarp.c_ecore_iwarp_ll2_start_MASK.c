
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int ooo_num_rx_bufs; } ;
struct ecore_rdma_start_in_params {int max_mtu; TYPE_2__ iwarp; int mac_addr; } ;
struct ecore_ll2_cbs {int slowpath_cb; int rx_comp_cb; struct ecore_hwfn* cookie; int tx_release_cb; int tx_comp_cb; int rx_release_cb; } ;
struct TYPE_8__ {int mtu; int rx_num_desc; int tx_num_desc; int tx_max_bds_per_packet; int rx_num_ooo_buffers; int secondary_queue; void* conn_type; int tx_dest; int tx_tc; } ;
struct ecore_ll2_acquire_data {TYPE_4__ input; struct ecore_ll2_cbs* cbs; void** p_connection_handle; } ;
struct ecore_iwarp_info {int max_mtu; int num_ooo_rx_bufs; int max_num_partial_fpdus; int mpa_buf_list; TYPE_1__* mpa_bufs; int mpa_buf_pending_list; void* mpa_intermediate_buf; void* partial_fpdus; void* ll2_mpa_handle; void* ll2_ooo_handle; void* ll2_syn_handle; int mac_addr; } ;
struct ecore_hwfn {int p_dev; TYPE_3__* p_rdma_info; } ;
typedef int data ;
struct TYPE_7__ {scalar_t__ num_qps; struct ecore_iwarp_info iwarp; } ;
struct TYPE_5__ {int list_entry; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,...) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct ecore_ll2_acquire_data*,int ,int) ;
 void* FUNC_6 (int ,int ,int) ;
 int VAR_13 ;
 int FUNC_7 (struct ecore_hwfn*,int,int,void*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (struct ecore_hwfn*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ll2_acquire_data*) ;
 int FUNC_10 (struct ecore_hwfn*,void*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_13(struct ecore_hwfn *VAR_20,
        struct ecore_rdma_start_in_params *VAR_21)
{
 struct ecore_iwarp_info *VAR_22;
 struct ecore_ll2_acquire_data VAR_23;
 struct ecore_ll2_cbs VAR_24;
 u32 VAR_25;
 int VAR_26 = VAR_10;
 u16 VAR_27;
 int VAR_28;

 VAR_22 = &VAR_20->p_rdma_info->iwarp;
 VAR_22->ll2_syn_handle = VAR_0;
 VAR_22->ll2_ooo_handle = VAR_0;
 VAR_22->ll2_mpa_handle = VAR_0;

 VAR_22->max_mtu = VAR_21->max_mtu;

 FUNC_4(VAR_20->p_rdma_info->iwarp.mac_addr, VAR_21->mac_addr,
      VAR_11);

 VAR_26 = FUNC_11(VAR_20->p_dev, 0, VAR_21->mac_addr);
 if (VAR_26 != VAR_10)
  return VAR_26;


 VAR_24.rx_comp_cb = VAR_15;
 VAR_24.rx_release_cb = VAR_17;
 VAR_24.tx_comp_cb = VAR_16;
 VAR_24.tx_release_cb = VAR_18;
 VAR_24.cookie = VAR_20;

 FUNC_5(&VAR_23, 0, sizeof(VAR_23));
 VAR_23.input.conn_type = VAR_8;
 VAR_23.input.mtu = VAR_6;
 VAR_23.input.rx_num_desc = VAR_3;
 VAR_23.input.tx_num_desc = VAR_4;
 VAR_23.input.tx_max_bds_per_packet = 1;
 VAR_23.input.tx_tc = VAR_13;
 VAR_23.input.tx_dest = VAR_7;
 VAR_23.p_connection_handle = &VAR_22->ll2_syn_handle;
 VAR_23.cbs = &VAR_24;

 VAR_26 = FUNC_9(VAR_20, &VAR_23);
 if (VAR_26) {
  FUNC_0(VAR_20, 0, "Failed to acquire LL2 connection\n");
  FUNC_12(VAR_20->p_dev, 0, VAR_21->mac_addr);
  return VAR_26;
 }

 VAR_26 = FUNC_10(VAR_20, VAR_22->ll2_syn_handle);
 if (VAR_26) {
  FUNC_0(VAR_20, 0,
     "Failed to establish LL2 connection\n");
  goto err;
 }

 VAR_26 = FUNC_7(VAR_20,
        VAR_3,
        VAR_6,
        VAR_22->ll2_syn_handle);
 if (VAR_26)
  goto err;


 VAR_23.input.conn_type = VAR_9;
 VAR_23.input.mtu = VAR_21->max_mtu;

 VAR_27 = VAR_21->iwarp.ooo_num_rx_bufs;

 if (VAR_27 > VAR_2)
  VAR_27 = VAR_2;

 VAR_23.input.rx_num_desc = VAR_27;
 VAR_23.input.rx_num_ooo_buffers = VAR_27;

 VAR_20->p_rdma_info->iwarp.num_ooo_rx_bufs = VAR_23.input.rx_num_desc;
 VAR_23.input.tx_max_bds_per_packet = 1;
 VAR_23.input.tx_num_desc = VAR_1;
 VAR_23.p_connection_handle = &VAR_22->ll2_ooo_handle;
 VAR_23.input.secondary_queue = 1;

 VAR_26 = FUNC_9(VAR_20, &VAR_23);
 if (VAR_26)
  goto err;

 VAR_26 = FUNC_10(VAR_20, VAR_22->ll2_ooo_handle);
 if (VAR_26)
  goto err;


 VAR_24.rx_comp_cb = VAR_14;
 VAR_24.slowpath_cb = VAR_19;

 FUNC_5(&VAR_23, 0, sizeof(VAR_23));
 VAR_23.input.conn_type = VAR_8;
 VAR_23.input.mtu = VAR_21->max_mtu;
 VAR_23.input.rx_num_desc = VAR_27 * 2;



 VAR_23.input.tx_num_desc = VAR_23.input.rx_num_desc;
 VAR_23.input.tx_max_bds_per_packet = VAR_5;
 VAR_23.p_connection_handle = &VAR_22->ll2_mpa_handle;
 VAR_23.input.secondary_queue = 1;
 VAR_23.cbs = &VAR_24;

 VAR_26 = FUNC_9(VAR_20, &VAR_23);
 if (VAR_26)
  goto err;

 VAR_26 = FUNC_10(VAR_20, VAR_22->ll2_mpa_handle);
 if (VAR_26)
  goto err;

 VAR_25 = FUNC_1(VAR_21->max_mtu);
 VAR_26 = FUNC_7(VAR_20,
        VAR_23.input.rx_num_desc,
        VAR_25,
        VAR_22->ll2_mpa_handle);
 if (VAR_26)
  goto err;

 VAR_22->partial_fpdus =
  FUNC_6(VAR_20->p_dev, VAR_12,
       sizeof(*VAR_22->partial_fpdus) *
       (u16)VAR_20->p_rdma_info->num_qps);

 if (!VAR_22->partial_fpdus) {
  FUNC_0(VAR_20, 0,
     "Failed to allocate ecore_iwarp_info(partial_fpdus)\n");
  goto err;
 }

 VAR_22->max_num_partial_fpdus = (u16)VAR_20->p_rdma_info->num_qps;






 VAR_22->mpa_bufs =
  FUNC_6(VAR_20->p_dev, VAR_12,
       sizeof(*VAR_22->mpa_bufs) *
       VAR_23.input.rx_num_desc);

 if (!VAR_22->mpa_bufs) {
  FUNC_0(VAR_20, 0,
     "Failed to allocate mpa_bufs array mem_size=%d\n",
     (u32)(sizeof(*VAR_22->mpa_bufs) *
    VAR_23.input.rx_num_desc));
  goto err;
 }

 VAR_22->mpa_intermediate_buf =
  FUNC_6(VAR_20->p_dev, VAR_12, VAR_25);
 if (!VAR_22->mpa_intermediate_buf) {
  FUNC_0(VAR_20, 0,
     "Failed to allocate mpa_intermediate_buf mem_size=%d\n",
     VAR_25);
  goto err;
 }

 FUNC_2(&VAR_22->mpa_buf_pending_list);
 FUNC_2(&VAR_22->mpa_buf_list);
 for (VAR_28 = 0; VAR_28 < VAR_23.input.rx_num_desc; VAR_28++) {
  FUNC_3(&VAR_22->mpa_bufs[VAR_28].list_entry,
        &VAR_22->mpa_buf_list);
 }

 return VAR_26;

err:
 FUNC_8(VAR_20);

 return VAR_26;
}
