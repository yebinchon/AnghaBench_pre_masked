
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef int uint16_t ;
struct ifmediareq {int dummy; } ;
struct ctx_hw_stats {int dummy; } ;
struct TYPE_20__ {scalar_t__ idi_vaddr; } ;
struct TYPE_24__ {int rss_hash_type; TYPE_2__ rss_grp_tbl; int mru; int def_ring_grp; int rss_id; } ;
struct TYPE_18__ {int phys_id; } ;
struct TYPE_23__ {int v_bit; scalar_t__ stats_ctx_id; TYPE_12__ ring; void* cons; void* last_idx; } ;
struct TYPE_21__ {scalar_t__ idi_paddr; } ;
struct TYPE_22__ {scalar_t__ idi_paddr; } ;
struct bnxt_softc {int nrxqsets; int ntxqsets; TYPE_6__ vnic_info; int ctx; TYPE_5__ def_cp_ring; TYPE_12__* tx_rings; TYPE_5__* tx_cp_rings; TYPE_3__ tx_stats; TYPE_11__* grp_info; TYPE_1__* scctx; TYPE_5__* rx_cp_rings; TYPE_12__* ag_rings; TYPE_12__* rx_rings; TYPE_4__ rx_stats; } ;
typedef int if_ctx_t ;
struct TYPE_19__ {int isc_max_frame_size; } ;
struct TYPE_17__ {int grp_id; int cp_ring_id; int ag_ring_id; int rx_ring_id; scalar_t__ stats_ctx; } ;


 int FUNC_0 (TYPE_12__*,int ) ;
 int FUNC_1 (TYPE_12__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (struct bnxt_softc*) ;
 int FUNC_3 (struct bnxt_softc*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (struct bnxt_softc*,TYPE_6__*) ;
 int FUNC_6 (struct bnxt_softc*) ;
 int FUNC_7 (struct bnxt_softc*,int ,TYPE_12__*,int ,scalar_t__,int) ;
 int FUNC_8 (struct bnxt_softc*,TYPE_11__*) ;
 int FUNC_9 (struct bnxt_softc*,TYPE_6__*,int ) ;
 int FUNC_10 (struct bnxt_softc*,TYPE_6__*) ;
 int FUNC_11 (struct bnxt_softc*,TYPE_5__*,scalar_t__) ;
 int FUNC_12 (struct bnxt_softc*,TYPE_6__*) ;
 int FUNC_13 (struct bnxt_softc*,TYPE_6__*) ;
 int FUNC_14 (struct bnxt_softc*,int *) ;
 int FUNC_15 (struct bnxt_softc*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (int ,struct ifmediareq*) ;
 int FUNC_18 (int ) ;
 struct bnxt_softc* FUNC_19 (int ) ;

__attribute__((used)) static void
FUNC_20(if_ctx_t VAR_6)
{
 struct bnxt_softc *VAR_7 = FUNC_19(VAR_6);
 struct ifmediareq VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_6(VAR_7);
 if (VAR_11)
  return;
 FUNC_3(VAR_7);


 VAR_7->def_cp_ring.cons = VAR_5;
 VAR_7->def_cp_ring.v_bit = 1;
 FUNC_16(&VAR_7->def_cp_ring);
 VAR_11 = FUNC_7(VAR_7,
     VAR_1,
     &VAR_7->def_cp_ring.ring,
     (uint16_t)VAR_0,
     VAR_0, 1);
 if (VAR_11)
  goto fail;


 VAR_11 = FUNC_2(VAR_7);
 if (VAR_11)
  goto fail;

 for (VAR_9 = 0; VAR_9 < VAR_7->nrxqsets; VAR_9++) {

  VAR_11 = FUNC_11(VAR_7, &VAR_7->rx_cp_rings[VAR_9],
      VAR_7->rx_stats.idi_paddr +
      (sizeof(struct ctx_hw_stats) * VAR_9));
  if (VAR_11)
   goto fail;


  VAR_7->rx_cp_rings[VAR_9].cons = VAR_5;
  VAR_7->rx_cp_rings[VAR_9].v_bit = 1;
  VAR_7->rx_cp_rings[VAR_9].last_idx = VAR_5;
  FUNC_16(&VAR_7->rx_cp_rings[VAR_9]);
  VAR_11 = FUNC_7(VAR_7,
      VAR_1,
      &VAR_7->rx_cp_rings[VAR_9].ring, (uint16_t)VAR_0,
      VAR_0, 1);
  if (VAR_11)
   goto fail;


  VAR_11 = FUNC_7(VAR_7,
      VAR_2,
      &VAR_7->rx_rings[VAR_9], (uint16_t)VAR_0,
      VAR_0, 0);
  if (VAR_11)
   goto fail;
  FUNC_0(&VAR_7->rx_rings[VAR_9], 0);

  FUNC_0(&VAR_7->rx_rings[VAR_9], 0);


  VAR_11 = FUNC_7(VAR_7,
      VAR_2,
      &VAR_7->ag_rings[VAR_9], (uint16_t)VAR_0,
      VAR_0, 0);
  if (VAR_11)
   goto fail;
  FUNC_0(&VAR_7->rx_rings[VAR_9], 0);

  FUNC_0(&VAR_7->ag_rings[VAR_9], 0);


  VAR_7->grp_info[VAR_9].stats_ctx =
      VAR_7->rx_cp_rings[VAR_9].stats_ctx_id;
  VAR_7->grp_info[VAR_9].rx_ring_id = VAR_7->rx_rings[VAR_9].phys_id;
  VAR_7->grp_info[VAR_9].ag_ring_id = VAR_7->ag_rings[VAR_9].phys_id;
  VAR_7->grp_info[VAR_9].cp_ring_id =
      VAR_7->rx_cp_rings[VAR_9].ring.phys_id;
  VAR_11 = FUNC_8(VAR_7, &VAR_7->grp_info[VAR_9]);
  if (VAR_11)
   goto fail;

 }


 VAR_11 = FUNC_14(VAR_7, &VAR_7->vnic_info.rss_id);
 if (VAR_11)
  goto fail;


 VAR_7->vnic_info.def_ring_grp = VAR_7->grp_info[0].grp_id;
 VAR_7->vnic_info.mru = VAR_7->scctx->isc_max_frame_size;
 VAR_11 = FUNC_12(VAR_7, &VAR_7->vnic_info);
 if (VAR_11)
  goto fail;
 VAR_11 = FUNC_13(VAR_7, &VAR_7->vnic_info);
 if (VAR_11)
  goto fail;
 VAR_11 = FUNC_10(VAR_7, &VAR_7->vnic_info);
 if (VAR_11)
  goto fail;


 for (VAR_9 = 0, VAR_10 = 0; VAR_9 < VAR_4; VAR_9++) {
  ((uint16_t *)
      VAR_7->vnic_info.rss_grp_tbl.idi_vaddr)[VAR_9] =
      FUNC_18(VAR_7->grp_info[VAR_10].grp_id);
  if (++VAR_10 == VAR_7->nrxqsets)
   VAR_10 = 0;
 }

 VAR_11 = FUNC_9(VAR_7, &VAR_7->vnic_info,
     VAR_7->vnic_info.rss_hash_type);
 if (VAR_11)
  goto fail;

 VAR_11 = FUNC_15(VAR_7);
 if (VAR_11)
  goto fail;

 for (VAR_9 = 0; VAR_9 < VAR_7->ntxqsets; VAR_9++) {

  VAR_11 = FUNC_11(VAR_7, &VAR_7->tx_cp_rings[VAR_9],
      VAR_7->tx_stats.idi_paddr +
      (sizeof(struct ctx_hw_stats) * VAR_9));
  if (VAR_11)
   goto fail;


  VAR_7->tx_cp_rings[VAR_9].cons = VAR_5;
  VAR_7->tx_cp_rings[VAR_9].v_bit = 1;
  FUNC_16(&VAR_7->tx_cp_rings[VAR_9]);
  VAR_11 = FUNC_7(VAR_7,
      VAR_1,
      &VAR_7->tx_cp_rings[VAR_9].ring, (uint16_t)VAR_0,
      VAR_0, 0);
  if (VAR_11)
   goto fail;


  VAR_11 = FUNC_7(VAR_7,
      VAR_3,
      &VAR_7->tx_rings[VAR_9], VAR_7->tx_cp_rings[VAR_9].ring.phys_id,
      VAR_7->tx_cp_rings[VAR_9].stats_ctx_id, 0);
  if (VAR_11)
   goto fail;
  FUNC_1(&VAR_7->tx_rings[VAR_9], 0);

  FUNC_1(&VAR_7->tx_rings[VAR_9], 0);
 }

 FUNC_4(&VAR_7->def_cp_ring);
 FUNC_17(VAR_7->ctx, &VAR_8);
 FUNC_5(VAR_7, &VAR_7->vnic_info);
 return;

fail:
 FUNC_6(VAR_7);
 FUNC_3(VAR_7);
 return;
}
