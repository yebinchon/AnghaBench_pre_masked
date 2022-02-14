
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint64_t ;
typedef void* uint16_t ;
struct tx_port_stats {int dummy; } ;
struct rx_port_stats {int dummy; } ;
struct ctx_hw_stats {int dummy; } ;
struct TYPE_10__ {int idi_size; scalar_t__ idi_vaddr; int idi_map; int idi_tag; } ;
struct TYPE_9__ {int filter_id; TYPE_4__ mc_list; TYPE_4__ rss_hash_key_tbl; TYPE_4__ rss_grp_tbl; int rss_hash_key; int flags; scalar_t__ mc_list_count; int rx_mask; void* lb_rule; void* cos_rule; void* def_ring_grp; void* flow_id; void* id; } ;
struct bnxt_softc {int nrxqsets; TYPE_6__* rx_cp_rings; TYPE_6__* rx_rings; TYPE_6__* ag_rings; TYPE_6__* grp_info; TYPE_4__ rx_stats; TYPE_4__ hw_rx_port_stats; TYPE_4__ hw_tx_port_stats; TYPE_3__ vnic_info; TYPE_1__* scctx; int dev; void* tx_port_stats; void* rx_port_stats; } ;
struct bnxt_ring {int dummy; } ;
struct bnxt_grp_info {int dummy; } ;
struct bnxt_full_tpa_start {int dummy; } ;
struct bnxt_cp_ring {int dummy; } ;
typedef int if_ctx_t ;
typedef void* caddr_t ;
struct TYPE_8__ {int id; int doorbell; void* phys_id; void* paddr; void* vaddr; int ring_size; struct bnxt_softc* softc; } ;
struct TYPE_11__ {int id; int doorbell; struct TYPE_11__* tpa_start; TYPE_2__ ring; void* cp_ring_id; void* phys_id; void* ag_ring_id; void* rx_ring_id; scalar_t__ stats_ctx_id; scalar_t__ stats_ctx; void* grp_id; void* paddr; void* vaddr; int ring_size; struct bnxt_softc* softc; } ;
struct TYPE_7__ {int * isc_nrxd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnxt_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct bnxt_softc*) ;
 int FUNC_2 (struct bnxt_softc*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (int ,int,TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ) ;
 struct bnxt_softc* FUNC_9 (int ) ;
 void* FUNC_10 (int,int ,int) ;
 int FUNC_11 (scalar_t__,int ,int) ;
 int FUNC_12 (scalar_t__,int,int ) ;

__attribute__((used)) static int
FUNC_13(if_ctx_t VAR_16, caddr_t *VAR_17,
    uint64_t *VAR_18, int VAR_19, int VAR_20)
{
 struct bnxt_softc *VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_21 = FUNC_9(VAR_16);

 VAR_21->rx_cp_rings = FUNC_10(sizeof(struct bnxt_cp_ring) * VAR_20,
     VAR_11, VAR_12 | VAR_13);
 if (!VAR_21->rx_cp_rings) {
  FUNC_4(FUNC_8(VAR_16),
      "unable to allocate RX completion rings\n");
  VAR_23 = VAR_5;
  goto cp_alloc_fail;
 }
 VAR_21->rx_rings = FUNC_10(sizeof(struct bnxt_ring) * VAR_20,
     VAR_11, VAR_12 | VAR_13);
 if (!VAR_21->rx_rings) {
  FUNC_4(FUNC_8(VAR_16),
      "unable to allocate RX rings\n");
  VAR_23 = VAR_5;
  goto ring_alloc_fail;
 }
 VAR_21->ag_rings = FUNC_10(sizeof(struct bnxt_ring) * VAR_20,
     VAR_11, VAR_12 | VAR_13);
 if (!VAR_21->ag_rings) {
  FUNC_4(FUNC_8(VAR_16),
      "unable to allocate aggregation rings\n");
  VAR_23 = VAR_5;
  goto ag_alloc_fail;
 }
 VAR_21->grp_info = FUNC_10(sizeof(struct bnxt_grp_info) * VAR_20,
     VAR_11, VAR_12 | VAR_13);
 if (!VAR_21->grp_info) {
  FUNC_4(FUNC_8(VAR_16),
      "unable to allocate ring groups\n");
  VAR_23 = VAR_5;
  goto grp_alloc_fail;
 }

 VAR_23 = FUNC_6(VAR_16, sizeof(struct ctx_hw_stats) * VAR_20,
     &VAR_21->rx_stats, 0);
 if (VAR_23)
  goto hw_stats_alloc_fail;
 FUNC_3(VAR_21->rx_stats.idi_tag, VAR_21->rx_stats.idi_map,
     VAR_3);
 VAR_23 = FUNC_6(VAR_16, sizeof(struct rx_port_stats) + 512,
     &VAR_21->hw_rx_port_stats, 0);
 if (VAR_23)
  goto hw_port_rx_stats_alloc_fail;

 FUNC_3(VAR_21->hw_rx_port_stats.idi_tag,
            VAR_21->hw_rx_port_stats.idi_map, VAR_3);

 VAR_23 = FUNC_6(VAR_16, sizeof(struct tx_port_stats) + 512,
     &VAR_21->hw_tx_port_stats, 0);

 if (VAR_23)
  goto hw_port_tx_stats_alloc_fail;

 FUNC_3(VAR_21->hw_tx_port_stats.idi_tag,
            VAR_21->hw_tx_port_stats.idi_map, VAR_3);

 VAR_21->rx_port_stats = (void *) VAR_21->hw_rx_port_stats.idi_vaddr;
 VAR_21->tx_port_stats = (void *) VAR_21->hw_tx_port_stats.idi_vaddr;

 for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {

  VAR_21->rx_cp_rings[VAR_22].stats_ctx_id = VAR_8;
  VAR_21->rx_cp_rings[VAR_22].ring.phys_id =
      (uint16_t)VAR_8;
  VAR_21->rx_cp_rings[VAR_22].ring.softc = VAR_21;
  VAR_21->rx_cp_rings[VAR_22].ring.id = VAR_22 + 1;
  VAR_21->rx_cp_rings[VAR_22].ring.doorbell =
      VAR_21->rx_cp_rings[VAR_22].ring.id * 0x80;



  VAR_21->rx_cp_rings[VAR_22].ring.ring_size =
      VAR_21->scctx->isc_nrxd[0];
  VAR_21->rx_cp_rings[VAR_22].ring.vaddr = VAR_17[VAR_22 * VAR_19];
  VAR_21->rx_cp_rings[VAR_22].ring.paddr = VAR_18[VAR_22 * VAR_19];


  VAR_21->rx_rings[VAR_22].phys_id = (uint16_t)VAR_8;
  VAR_21->rx_rings[VAR_22].softc = VAR_21;
  VAR_21->rx_rings[VAR_22].id = VAR_22 + 1;
  VAR_21->rx_rings[VAR_22].doorbell = VAR_21->rx_rings[VAR_22].id * 0x80;
  VAR_21->rx_rings[VAR_22].ring_size = VAR_21->scctx->isc_nrxd[1];
  VAR_21->rx_rings[VAR_22].vaddr = VAR_17[VAR_22 * VAR_19 + 1];
  VAR_21->rx_rings[VAR_22].paddr = VAR_18[VAR_22 * VAR_19 + 1];


  VAR_21->rx_rings[VAR_22].tpa_start = FUNC_10(sizeof(struct bnxt_full_tpa_start) *
       (VAR_14 >> VAR_15),
       VAR_11, VAR_12 | VAR_13);
  if (VAR_21->rx_rings[VAR_22].tpa_start == ((void*)0)) {
   VAR_23 = -VAR_5;
   FUNC_4(VAR_21->dev,
     "Unable to allocate space for TPA\n");
   goto tpa_alloc_fail;
  }


  VAR_21->ag_rings[VAR_22].phys_id = (uint16_t)VAR_8;
  VAR_21->ag_rings[VAR_22].softc = VAR_21;
  VAR_21->ag_rings[VAR_22].id = VAR_20 + VAR_22 + 1;
  VAR_21->ag_rings[VAR_22].doorbell = VAR_21->ag_rings[VAR_22].id * 0x80;
  VAR_21->ag_rings[VAR_22].ring_size = VAR_21->scctx->isc_nrxd[2];
  VAR_21->ag_rings[VAR_22].vaddr = VAR_17[VAR_22 * VAR_19 + 2];
  VAR_21->ag_rings[VAR_22].paddr = VAR_18[VAR_22 * VAR_19 + 2];


  VAR_21->grp_info[VAR_22].grp_id = (uint16_t)VAR_8;
  VAR_21->grp_info[VAR_22].stats_ctx =
      VAR_21->rx_cp_rings[VAR_22].stats_ctx_id;
  VAR_21->grp_info[VAR_22].rx_ring_id = VAR_21->rx_rings[VAR_22].phys_id;
  VAR_21->grp_info[VAR_22].ag_ring_id = VAR_21->ag_rings[VAR_22].phys_id;
  VAR_21->grp_info[VAR_22].cp_ring_id =
      VAR_21->rx_cp_rings[VAR_22].ring.phys_id;

  FUNC_2(VAR_21, VAR_22);
 }





 if (FUNC_0(VAR_21))
         FUNC_1(VAR_21);


 VAR_21->vnic_info.id = (uint16_t)VAR_8;
 VAR_21->vnic_info.flow_id = (uint16_t)VAR_8;
 VAR_21->vnic_info.filter_id = -1;
 VAR_21->vnic_info.def_ring_grp = (uint16_t)VAR_8;
 VAR_21->vnic_info.cos_rule = (uint16_t)VAR_8;
 VAR_21->vnic_info.lb_rule = (uint16_t)VAR_8;
 VAR_21->vnic_info.rx_mask = VAR_7;
 VAR_21->vnic_info.mc_list_count = 0;
 VAR_21->vnic_info.flags = VAR_2;
 VAR_23 = FUNC_6(VAR_16, VAR_0 * VAR_6,
     &VAR_21->vnic_info.mc_list, 0);
 if (VAR_23)
  goto mc_list_alloc_fail;


 VAR_23 = FUNC_6(VAR_16, VAR_10,
     &VAR_21->vnic_info.rss_hash_key_tbl, 0);
 if (VAR_23)
  goto rss_hash_alloc_fail;
 FUNC_3(VAR_21->vnic_info.rss_hash_key_tbl.idi_tag,
     VAR_21->vnic_info.rss_hash_key_tbl.idi_map,
     VAR_4);
 FUNC_11(VAR_21->vnic_info.rss_hash_key_tbl.idi_vaddr,
     VAR_21->vnic_info.rss_hash_key, VAR_10);


 VAR_23 = FUNC_6(VAR_16, VAR_9 * sizeof(uint16_t),
     &VAR_21->vnic_info.rss_grp_tbl, 0);
 if (VAR_23)
  goto rss_grp_alloc_fail;
 FUNC_3(VAR_21->vnic_info.rss_grp_tbl.idi_tag,
     VAR_21->vnic_info.rss_grp_tbl.idi_map,
     VAR_4);
 FUNC_12(VAR_21->vnic_info.rss_grp_tbl.idi_vaddr, 0xff,
     VAR_21->vnic_info.rss_grp_tbl.idi_size);

 VAR_21->nrxqsets = VAR_20;
 return VAR_23;

rss_grp_alloc_fail:
 FUNC_7(&VAR_21->vnic_info.rss_hash_key_tbl);
rss_hash_alloc_fail:
 FUNC_7(&VAR_21->vnic_info.mc_list);
tpa_alloc_fail:
mc_list_alloc_fail:
 for (VAR_22 = VAR_22 - 1; VAR_22 >= 0; VAR_22--)
  FUNC_5(VAR_21->rx_rings[VAR_22].tpa_start, VAR_11);
 FUNC_7(&VAR_21->hw_tx_port_stats);
hw_port_tx_stats_alloc_fail:
 FUNC_7(&VAR_21->hw_rx_port_stats);
hw_port_rx_stats_alloc_fail:
 FUNC_7(&VAR_21->rx_stats);
hw_stats_alloc_fail:
 FUNC_5(VAR_21->grp_info, VAR_11);
grp_alloc_fail:
 FUNC_5(VAR_21->ag_rings, VAR_11);
ag_alloc_fail:
 FUNC_5(VAR_21->rx_rings, VAR_11);
ring_alloc_fail:
 FUNC_5(VAR_21->rx_cp_rings, VAR_11);
cp_alloc_fail:
 return VAR_23;
}
