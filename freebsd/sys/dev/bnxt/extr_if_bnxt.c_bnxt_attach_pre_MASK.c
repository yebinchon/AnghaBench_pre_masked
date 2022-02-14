
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ uint16_t ;
struct tx_bd_short {int dummy; } ;
struct rx_prod_pkt_bd {int dummy; } ;
struct cmpl_base {int dummy; } ;
struct bnxt_ver_info {int dummy; } ;
struct TYPE_20__ {int * idi_vaddr; } ;
struct TYPE_21__ {int rss_hash_type; TYPE_6__ vlan_tag_list; int vlan_tags; int rss_hash_key; } ;
struct TYPE_13__ {int idi_paddr; int idi_vaddr; } ;
struct TYPE_18__ {int id; int doorbell; int ring_size; int paddr; int vaddr; struct bnxt_softc* softc; scalar_t__ phys_id; } ;
struct TYPE_19__ {TYPE_4__ ring; scalar_t__ stats_ctx_id; } ;
struct TYPE_17__ {int max_agg_segs; int min_agg_len; int max_aggs; scalar_t__ is_mode_gro; scalar_t__ enable; } ;
struct TYPE_16__ {void* alloc_completion_rings; void* alloc_tx_rings; void* alloc_vnics; void* alloc_rx_rings; } ;
struct TYPE_15__ {int max_cp_rings; int mac_addr; } ;
struct bnxt_softc {int flags; int dev; TYPE_11__* ver_info; TYPE_11__* nvm_info; TYPE_7__ vnic_info; int def_cp_task; TYPE_10__ def_cp_ring_mem; TYPE_5__ def_cp_ring; TYPE_3__ hw_lro; TYPE_2__ fn_qcfg; TYPE_1__ func; TYPE_8__* scctx; int sctx; int media; int ctx; } ;
struct bnxt_nvram_info {int dummy; } ;
typedef TYPE_8__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_22__ {int isc_tx_csum_flags; int isc_capabilities; int isc_capenable; int isc_tx_nsegments; int isc_tx_tso_segments_max; int* isc_nrxd; int* isc_ntxd; int* isc_txqsizes; int* isc_rxqsizes; int isc_msix_bar; scalar_t__ isc_rss_table_size; scalar_t__ isc_rss_table_mask; void* isc_nrxqsets_max; void* isc_ntxqsets_max; int * isc_txrx; int isc_min_frame_size; int isc_vectors; void* isc_tx_tso_segsize_max; void* isc_tx_tso_size_max; } ;
struct TYPE_14__ {int hwrm_min_major; int hwrm_min_minor; int hwrm_min_update; int available_size; int reserved_size; int size; int sector_size; int device_id; int mfg_id; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct bnxt_softc*) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;






 int VAR_40 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct bnxt_softc*) ;
 int FUNC_6 (struct bnxt_softc*) ;
 int FUNC_7 (struct bnxt_softc*) ;
 int FUNC_8 (struct bnxt_softc*) ;
 int FUNC_9 (struct bnxt_softc*) ;
 int FUNC_10 (TYPE_11__*) ;
 int FUNC_11 (struct bnxt_softc*) ;
 int VAR_41 ;
 int FUNC_12 (struct bnxt_softc*) ;
 int FUNC_13 (struct bnxt_softc*) ;
 int FUNC_14 (struct bnxt_softc*) ;
 int FUNC_15 (struct bnxt_softc*) ;
 int FUNC_16 (struct bnxt_softc*) ;
 int FUNC_17 (struct bnxt_softc*,int) ;
 int FUNC_18 (struct bnxt_softc*) ;
 int FUNC_19 (struct bnxt_softc*) ;
 int FUNC_20 (struct bnxt_softc*) ;
 int FUNC_21 (struct bnxt_softc*,int *,int ) ;
 int FUNC_22 (struct bnxt_softc*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_23 (struct bnxt_softc*) ;
 int FUNC_24 (struct bnxt_softc*) ;
 int FUNC_25 (struct bnxt_softc*) ;
 scalar_t__ FUNC_26 (struct bnxt_softc*) ;
 int FUNC_27 (struct bnxt_softc*) ;
 int VAR_42 ;
 scalar_t__ FUNC_28 (struct bnxt_softc*) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ,char*,...) ;
 int FUNC_31 (TYPE_11__*,int ) ;
 int FUNC_32 (int ,int *,int ,char*) ;
 int FUNC_33 (int ,int,TYPE_10__*,int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ) ;
 struct bnxt_softc* FUNC_37 (int ) ;
 TYPE_8__* FUNC_38 (int ) ;
 int FUNC_39 (int ,int ) ;
 void* FUNC_40 (int,int ,int) ;
 void* FUNC_41 (void*,void*) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (int ) ;
 int FUNC_44 (int ) ;
 void* FUNC_45 (int ) ;
 int FUNC_46 (int ) ;

__attribute__((used)) static int
FUNC_47(if_ctx_t VAR_43)
{
 struct bnxt_softc *VAR_44 = FUNC_37(VAR_43);
 if_softc_ctx_t VAR_45;
 int VAR_46 = 0;

 VAR_44->ctx = VAR_43;
 VAR_44->dev = FUNC_34(VAR_43);
 VAR_44->media = FUNC_35(VAR_43);
 VAR_44->scctx = FUNC_38(VAR_43);
 VAR_44->sctx = FUNC_36(VAR_43);
 VAR_45 = VAR_44->scctx;


 switch (FUNC_44(VAR_44->dev)) {
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
  VAR_44->flags |= VAR_0;
  break;
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_44->flags |= VAR_2;
  break;
 }

 FUNC_43(VAR_44->dev);

 if (FUNC_26(VAR_44))
  return (VAR_12);


 FUNC_1(VAR_44, FUNC_29(VAR_44->dev));
 VAR_46 = FUNC_5(VAR_44);
 if (VAR_46)
  goto dma_fail;



 VAR_44->ver_info = FUNC_40(sizeof(struct bnxt_ver_info),
     VAR_37, VAR_38 | VAR_39);
 if (VAR_44->ver_info == ((void*)0)) {
  VAR_46 = VAR_11;
  FUNC_30(VAR_44->dev,
      "Unable to allocate space for version info\n");
  goto ver_alloc_fail;
 }

 VAR_44->ver_info->hwrm_min_major = 1;
 VAR_44->ver_info->hwrm_min_minor = 2;
 VAR_44->ver_info->hwrm_min_update = 2;

 VAR_46 = FUNC_24(VAR_44);
 if (VAR_46) {
  FUNC_30(VAR_44->dev, "attach: hwrm ver get failed\n");
  goto ver_fail;
 }

 if (VAR_44->flags & VAR_1) {
  VAR_46 = FUNC_6(VAR_44);
  if (VAR_46)
   goto hwrm_short_cmd_alloc_fail;
 }


 if (FUNC_2(VAR_44)) {
  VAR_44->nvm_info = FUNC_40(sizeof(struct bnxt_nvram_info),
      VAR_37, VAR_38 | VAR_39);
  if (VAR_44->nvm_info == ((void*)0)) {
   VAR_46 = VAR_11;
   FUNC_30(VAR_44->dev,
       "Unable to allocate space for NVRAM info\n");
   goto nvm_alloc_fail;
  }

  VAR_46 = FUNC_22(VAR_44, &VAR_44->nvm_info->mfg_id,
      &VAR_44->nvm_info->device_id, &VAR_44->nvm_info->sector_size,
      &VAR_44->nvm_info->size, &VAR_44->nvm_info->reserved_size,
      &VAR_44->nvm_info->available_size);
 }


 VAR_46 = FUNC_16(VAR_44);
 if (VAR_46) {
  FUNC_30(VAR_44->dev, "attach: hwrm drv rgtr failed\n");
  goto drv_rgtr_fail;
 }

        VAR_46 = FUNC_21(VAR_44, ((void*)0), 0);
 if (VAR_46) {
  FUNC_30(VAR_44->dev, "attach: hwrm rgtr async evts failed\n");
  goto drv_rgtr_fail;
 }


 VAR_46 = FUNC_18(VAR_44);
 if (VAR_46)
  goto failed;


 VAR_46 = FUNC_19(VAR_44);
 if (VAR_46) {
  FUNC_30(VAR_44->dev, "attach: hwrm func qcfg failed\n");
  goto failed;
 }

 FUNC_39(VAR_43, VAR_44->func.mac_addr);

 VAR_45->isc_txrx = &VAR_42;
 VAR_45->isc_tx_csum_flags = (VAR_5 | VAR_6 | VAR_9 |
     VAR_7 | VAR_10 | VAR_8);
 VAR_45->isc_capabilities = VAR_45->isc_capenable =

     VAR_29 | VAR_30 | VAR_27 | VAR_28 |

     VAR_24 | VAR_32 |

     VAR_25 | VAR_26 | VAR_35 |
     VAR_33 | VAR_34 |

     VAR_31 | VAR_23;

 if (FUNC_28(VAR_44))
  VAR_45->isc_capenable |= VAR_36;


 VAR_46 = FUNC_23(VAR_44);
 if (VAR_46) {
  FUNC_30(VAR_44->dev, "attach: hwrm qportcfg failed\n");
  goto failed;
 }

 FUNC_15(VAR_44);


 VAR_46 = FUNC_20(VAR_44);
 FUNC_7(VAR_44);
 if (VAR_46)
  goto failed;


 VAR_45->isc_tx_nsegments = 31,
 VAR_45->isc_tx_tso_segments_max = 31;
 VAR_45->isc_tx_tso_size_max = VAR_4;
 VAR_45->isc_tx_tso_segsize_max = VAR_4;
 VAR_45->isc_vectors = VAR_44->func.max_cp_rings;
 VAR_45->isc_min_frame_size = VAR_3;
 VAR_45->isc_txrx = &VAR_42;

 if (VAR_45->isc_nrxd[0] <
     ((VAR_45->isc_nrxd[1] * 4) + VAR_45->isc_nrxd[2]))
  FUNC_30(VAR_44->dev,
      "WARNING: nrxd0 (%d) should be at least 4 * nrxd1 (%d) + nrxd2 (%d).  Driver may be unstable\n",
      VAR_45->isc_nrxd[0], VAR_45->isc_nrxd[1], VAR_45->isc_nrxd[2]);
 if (VAR_45->isc_ntxd[0] < VAR_45->isc_ntxd[1] * 2)
  FUNC_30(VAR_44->dev,
      "WARNING: ntxd0 (%d) should be at least 2 * ntxd1 (%d).  Driver may be unstable\n",
      VAR_45->isc_ntxd[0], VAR_45->isc_ntxd[1]);
 VAR_45->isc_txqsizes[0] = sizeof(struct cmpl_base) * VAR_45->isc_ntxd[0];
 VAR_45->isc_txqsizes[1] = sizeof(struct tx_bd_short) *
     VAR_45->isc_ntxd[1];
 VAR_45->isc_rxqsizes[0] = sizeof(struct cmpl_base) * VAR_45->isc_nrxd[0];
 VAR_45->isc_rxqsizes[1] = sizeof(struct rx_prod_pkt_bd) *
     VAR_45->isc_nrxd[1];
 VAR_45->isc_rxqsizes[2] = sizeof(struct rx_prod_pkt_bd) *
     VAR_45->isc_nrxd[2];

 VAR_45->isc_nrxqsets_max = FUNC_41(FUNC_45(VAR_44->dev)-1,
     VAR_44->fn_qcfg.alloc_completion_rings - 1);
 VAR_45->isc_nrxqsets_max = FUNC_41(VAR_45->isc_nrxqsets_max,
     VAR_44->fn_qcfg.alloc_rx_rings);
 VAR_45->isc_nrxqsets_max = FUNC_41(VAR_45->isc_nrxqsets_max,
     VAR_44->fn_qcfg.alloc_vnics);
 VAR_45->isc_ntxqsets_max = FUNC_41(VAR_44->fn_qcfg.alloc_tx_rings,
     VAR_44->fn_qcfg.alloc_completion_rings - VAR_45->isc_nrxqsets_max - 1);

 VAR_45->isc_rss_table_size = VAR_21;
 VAR_45->isc_rss_table_mask = VAR_45->isc_rss_table_size - 1;


 VAR_45->isc_msix_bar = FUNC_46(VAR_44->dev);






 VAR_44->hw_lro.enable = 0;
 VAR_44->hw_lro.is_mode_gro = 0;
 VAR_44->hw_lro.max_agg_segs = 5;
 VAR_44->hw_lro.max_aggs = VAR_20;
 VAR_44->hw_lro.min_agg_len = 512;


 VAR_44->def_cp_ring.stats_ctx_id = VAR_13;
 VAR_44->def_cp_ring.ring.phys_id = (uint16_t)VAR_13;
 VAR_44->def_cp_ring.ring.softc = VAR_44;
 VAR_44->def_cp_ring.ring.id = 0;
 VAR_44->def_cp_ring.ring.doorbell = VAR_44->def_cp_ring.ring.id * 0x80;
 VAR_44->def_cp_ring.ring.ring_size = VAR_40 /
     sizeof(struct cmpl_base);
 VAR_46 = FUNC_33(VAR_43,
     sizeof(struct cmpl_base) * VAR_44->def_cp_ring.ring.ring_size,
     &VAR_44->def_cp_ring_mem, 0);
 VAR_44->def_cp_ring.ring.vaddr = VAR_44->def_cp_ring_mem.idi_vaddr;
 VAR_44->def_cp_ring.ring.paddr = VAR_44->def_cp_ring_mem.idi_paddr;
 FUNC_32(VAR_43, &VAR_44->def_cp_task, VAR_41,
     "dflt_cp");

 VAR_46 = FUNC_25(VAR_44);
 if (VAR_46)
  goto init_sysctl_failed;
 if (FUNC_2(VAR_44)) {
  VAR_46 = FUNC_10(VAR_44->nvm_info);
  if (VAR_46)
   goto failed;
 }

 FUNC_4(VAR_44->vnic_info.rss_hash_key, VAR_22, 0);
 VAR_44->vnic_info.rss_hash_type =
     VAR_14 |
     VAR_16 |
     VAR_18 |
     VAR_15 |
     VAR_17 |
     VAR_19;
 VAR_46 = FUNC_8(VAR_44);
 if (VAR_46)
  goto failed;

 VAR_46 = FUNC_9(VAR_44);
 if (VAR_46)
  goto failed;

 VAR_46 = FUNC_11(VAR_44);
 if (VAR_46)
  goto failed;


 FUNC_3(&VAR_44->vnic_info.vlan_tags);
 VAR_44->vnic_info.vlan_tag_list.idi_vaddr = ((void*)0);

 return (VAR_46);

failed:
 FUNC_14(VAR_44);
init_sysctl_failed:
 FUNC_17(VAR_44, 0);
drv_rgtr_fail:
 if (FUNC_2(VAR_44))
  FUNC_31(VAR_44->nvm_info, VAR_37);
nvm_alloc_fail:
 FUNC_13(VAR_44);
hwrm_short_cmd_alloc_fail:
ver_fail:
 FUNC_31(VAR_44->ver_info, VAR_37);
ver_alloc_fail:
 FUNC_12(VAR_44);
dma_fail:
 FUNC_0(VAR_44);
 FUNC_27(VAR_44);
 FUNC_42(VAR_44->dev);
 return (VAR_46);
}
