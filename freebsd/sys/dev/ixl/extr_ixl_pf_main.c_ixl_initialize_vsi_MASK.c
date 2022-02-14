
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
typedef int tctx ;
struct tx_ring {int tx_paddr; } ;
struct rx_ring {scalar_t__ mbuf_sz; int rx_paddr; } ;
struct TYPE_13__ {int * qs_handle; } ;
struct ixl_vsi {int num_tx_queues; int num_rx_queues; struct i40e_hw* hw; int ctx; scalar_t__ enable_head_writeback; TYPE_7__ info; scalar_t__ hw_filters_del; scalar_t__ hw_filters_add; int vsi_num; int ifp; int seid; struct ixl_rx_queue* rx_queues; struct ixl_tx_queue* tx_queues; struct ixl_pf* back; } ;
struct ixl_tx_queue {struct tx_ring txr; } ;
struct ixl_rx_queue {struct rx_ring rxr; } ;
struct TYPE_10__ {int first_qidx; int num_allocated; } ;
struct ixl_pf {scalar_t__ veb_seid; scalar_t__ iw_enabled; TYPE_3__ qtag; } ;
struct TYPE_12__ {int* tc_mapping; int queueing_opt_flags; int valid_sections; int port_vlan_flags; scalar_t__* queue_mapping; int mapping_flags; int up_enable_bits; int stat_counter_idx; } ;
struct i40e_vsi_context {scalar_t__ uplink_seid; int pf_num; int dbuff; int hbuff; int dsize; int base; int tphrdesc_ena; int tphwdesc_ena; int lrxqthresh; int crcstrip; int l2tsel; int showiv; int prefena; scalar_t__ fc_ena; scalar_t__ tphhead_ena; scalar_t__ tphdata_ena; int qlen; scalar_t__ hsplit_0; scalar_t__ dtype; scalar_t__ rxmax; int flags; TYPE_6__ info; int vsi_number; int vf_num; int vsis_unallocated; int vsis_allocated; int seid; } ;
struct i40e_tx_desc {int dummy; } ;
struct TYPE_8__ {scalar_t__ rx_buf_chain_len; } ;
struct TYPE_9__ {int asq_last_status; } ;
struct i40e_hw {int pf_id; TYPE_1__ func_caps; TYPE_2__ aq; } ;
struct i40e_hmc_obj_txq {int new_context; int base; int qlen; int head_wb_ena; int head_wb_addr; scalar_t__ rdylist_act; int rdylist; scalar_t__ fc_ena; } ;
struct i40e_hmc_obj_rxq {scalar_t__ uplink_seid; int pf_num; int dbuff; int hbuff; int dsize; int base; int tphrdesc_ena; int tphwdesc_ena; int lrxqthresh; int crcstrip; int l2tsel; int showiv; int prefena; scalar_t__ fc_ena; scalar_t__ tphhead_ena; scalar_t__ tphdata_ena; int qlen; scalar_t__ hsplit_0; scalar_t__ dtype; scalar_t__ rxmax; int flags; TYPE_6__ info; int vsi_number; int vf_num; int vsis_unallocated; int vsis_allocated; int seid; } ;
typedef TYPE_4__* if_softc_ctx_t ;
typedef int device_t ;
typedef int ctxt ;
struct TYPE_11__ {int* isc_ntxd; scalar_t__ isc_max_frame_size; int * isc_nrxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (TYPE_6__*,TYPE_7__*,int) ;
 int FUNC_3 (struct i40e_hmc_obj_txq*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct i40e_hw*,struct i40e_vsi_context*,int *) ;
 int FUNC_8 (struct i40e_hw*,struct i40e_vsi_context*,int *) ;
 int FUNC_9 (struct i40e_hw*,int) ;
 int FUNC_10 (struct i40e_hw*,int) ;
 int FUNC_11 (struct i40e_hw*,int,struct i40e_vsi_context*) ;
 int FUNC_12 (struct i40e_hw*,int,struct i40e_hmc_obj_txq*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 TYPE_4__* FUNC_16 (int ) ;
 int FUNC_17 (struct ixl_pf*,int ,char*,int ,scalar_t__,int ,int ,int ,int ,int,int ,int ,int ) ;
 scalar_t__ VAR_22 ;
 int FUNC_18 (struct i40e_hw*) ;
 int FUNC_19 (struct ixl_vsi*,struct ixl_tx_queue*) ;
 int FUNC_20 (struct ixl_vsi*) ;
 int FUNC_21 (struct i40e_vsi_context*,int ,int) ;
 int FUNC_22 (struct i40e_hw*,int ,int) ;

int
FUNC_23(struct ixl_vsi *VAR_23)
{
 struct ixl_pf *VAR_24 = VAR_23->back;
 if_softc_ctx_t VAR_25 = FUNC_16(VAR_23->ctx);
 struct ixl_tx_queue *VAR_26 = VAR_23->tx_queues;
 struct ixl_rx_queue *VAR_27 = VAR_23->rx_queues;
 device_t VAR_28 = FUNC_14(VAR_23->ctx);
 struct i40e_hw *VAR_29 = VAR_23->hw;
 struct i40e_vsi_context VAR_30;
 int VAR_31;
 int VAR_32 = 0;

 FUNC_21(&VAR_30, 0, sizeof(VAR_30));
 VAR_30.seid = VAR_23->seid;
 if (VAR_24->veb_seid != 0)
  VAR_30.uplink_seid = VAR_24->veb_seid;
 VAR_30.pf_num = VAR_29->pf_id;
 VAR_32 = FUNC_7(VAR_29, &VAR_30, ((void*)0));
 if (VAR_32) {
  FUNC_4(VAR_28, "i40e_aq_get_vsi_params() failed, error %d"
      " aq_error %d\n", VAR_32, VAR_29->aq.asq_last_status);
  return (VAR_32);
 }
 FUNC_17(VAR_24, VAR_19,
     "get_vsi_params: seid: %d, uplinkseid: %d, vsi_number: %d, "
     "vsis_allocated: %d, vsis_unallocated: %d, flags: 0x%x, "
     "pfnum: %d, vfnum: %d, stat idx: %d, enabled: %d\n", VAR_30.seid,
     VAR_30.uplink_seid, VAR_30.vsi_number,
     VAR_30.vsis_allocated, VAR_30.vsis_unallocated,
     VAR_30.flags, VAR_30.pf_num, VAR_30.vf_num,
     VAR_30.info.stat_counter_idx, VAR_30.info.up_enable_bits);





 VAR_30.info.valid_sections = VAR_0;
 VAR_30.info.mapping_flags |= VAR_6;

 VAR_30.info.queue_mapping[0] = 0;





 VAR_31 = FUNC_5(VAR_24->qtag.num_allocated) - 1;
 VAR_30.info.tc_mapping[0] = ((VAR_24->qtag.first_qidx << VAR_11)
     & VAR_10) |
     ((VAR_31 << VAR_9)
     & VAR_8);


 VAR_30.info.valid_sections |= VAR_2;
 VAR_30.info.port_vlan_flags = VAR_5;
 if (FUNC_13(VAR_23->ifp) & VAR_18)
  VAR_30.info.port_vlan_flags |= VAR_4;
 else
  VAR_30.info.port_vlan_flags |= VAR_3;
 VAR_23->vsi_num = VAR_30.vsi_number;
 FUNC_2(&VAR_30.info, &VAR_23->info, sizeof(VAR_23->info));


 FUNC_20(VAR_23);
 VAR_23->hw_filters_add = 0;
 VAR_23->hw_filters_del = 0;

 VAR_30.flags = FUNC_6(VAR_12);

 VAR_32 = FUNC_8(VAR_29, &VAR_30, ((void*)0));
 if (VAR_32) {
  FUNC_4(VAR_28, "i40e_aq_update_vsi_params() failed, error %d,"
      " aq_error %d\n", VAR_32, VAR_29->aq.asq_last_status);
  return (VAR_32);
 }

 for (int VAR_33 = 0; VAR_33 < VAR_23->num_tx_queues; VAR_33++, VAR_26++) {
  struct tx_ring *VAR_34 = &VAR_26->txr;
  struct i40e_hmc_obj_txq VAR_35;
  u32 VAR_36;


  FUNC_3(&VAR_35, sizeof(VAR_35));
  VAR_35.new_context = 1;
  VAR_35.base = (VAR_34->tx_paddr/VAR_21);
  VAR_35.qlen = VAR_25->isc_ntxd[0];
  VAR_35.fc_ena = 0;




  VAR_35.rdylist = VAR_23->info.qs_handle[0];





  if (VAR_23->enable_head_writeback) {
   VAR_35.head_wb_ena = 1;
   VAR_35.head_wb_addr = VAR_34->tx_paddr +
       (VAR_25->isc_ntxd[0] * sizeof(struct i40e_tx_desc));
  } else {
   VAR_35.head_wb_ena = 0;
   VAR_35.head_wb_addr = 0;
  }
  VAR_35.rdylist_act = 0;
  VAR_32 = FUNC_10(VAR_29, VAR_33);
  if (VAR_32) {
   FUNC_4(VAR_28, "Unable to clear TX context\n");
   break;
  }
  VAR_32 = FUNC_12(VAR_29, VAR_33, &VAR_35);
  if (VAR_32) {
   FUNC_4(VAR_28, "Unable to set TX context\n");
   break;
  }

  VAR_36 = VAR_15;
  VAR_36 |= ((VAR_29->pf_id << VAR_14) &
      VAR_13);
  FUNC_22(VAR_29, FUNC_1(VAR_33), VAR_36);
  FUNC_18(VAR_29);


  FUNC_19(VAR_23, VAR_26);
 }
 for (int VAR_37 = 0; VAR_37 < VAR_23->num_rx_queues; VAR_37++, VAR_27++) {
  struct rx_ring *VAR_38 = &VAR_27->rxr;
  struct i40e_hmc_obj_rxq VAR_39;


  VAR_38->mbuf_sz = FUNC_15(VAR_23->ctx);

  u16 VAR_40 = VAR_38->mbuf_sz * VAR_29->func_caps.rx_buf_chain_len;


  FUNC_21(&VAR_39, 0, sizeof(struct i40e_hmc_obj_rxq));
  VAR_39.dbuff = VAR_38->mbuf_sz >> VAR_16;

  VAR_39.hbuff = 0 >> VAR_17;
  VAR_39.rxmax = (VAR_25->isc_max_frame_size < VAR_40) ?
      VAR_25->isc_max_frame_size : VAR_40;
  VAR_39.dtype = 0;
  VAR_39.dsize = 1;
  VAR_39.hsplit_0 = 0;
  VAR_39.base = (VAR_38->rx_paddr/VAR_20);
  VAR_39.qlen = VAR_25->isc_nrxd[0];
  VAR_39.tphrdesc_ena = 1;
  VAR_39.tphwdesc_ena = 1;
  VAR_39.tphdata_ena = 0;
  VAR_39.tphhead_ena = 0;
  VAR_39.lrxqthresh = 1;
  VAR_39.crcstrip = 1;
  VAR_39.l2tsel = 1;
  VAR_39.showiv = 1;
  VAR_39.fc_ena = 0;
  VAR_39.prefena = 1;

  VAR_32 = FUNC_9(VAR_29, VAR_37);
  if (VAR_32) {
   FUNC_4(VAR_28,
       "Unable to clear RX context %d\n", VAR_37);
   break;
  }
  VAR_32 = FUNC_11(VAR_29, VAR_37, &VAR_39);
  if (VAR_32) {
   FUNC_4(VAR_28, "Unable to set RX context %d\n", VAR_37);
   break;
  }
  FUNC_22(VAR_23->hw, FUNC_0(VAR_37), 0);
 }
 return (VAR_32);
}
