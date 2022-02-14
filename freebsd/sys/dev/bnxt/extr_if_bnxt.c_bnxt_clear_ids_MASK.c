
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef void* uint16_t ;
struct TYPE_14__ {int idi_size; int idi_vaddr; } ;
struct TYPE_15__ {int filter_id; TYPE_11__ rss_grp_tbl; void* rss_id; void* id; } ;
struct TYPE_16__ {void* phys_id; } ;
struct TYPE_17__ {TYPE_1__ ring; void* stats_ctx_id; } ;
struct bnxt_softc {int ntxqsets; int nrxqsets; TYPE_12__ vnic_info; TYPE_10__* grp_info; TYPE_9__* ag_rings; TYPE_8__* rx_rings; TYPE_7__* rx_cp_rings; TYPE_5__* tx_rings; TYPE_4__* tx_cp_rings; TYPE_2__ def_cp_ring; } ;
struct TYPE_24__ {void* phys_id; } ;
struct TYPE_23__ {void* phys_id; } ;
struct TYPE_21__ {void* phys_id; } ;
struct TYPE_22__ {TYPE_6__ ring; void* stats_ctx_id; } ;
struct TYPE_20__ {void* phys_id; } ;
struct TYPE_18__ {void* phys_id; } ;
struct TYPE_19__ {TYPE_3__ ring; void* stats_ctx_id; } ;
struct TYPE_13__ {void* grp_id; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct bnxt_softc *VAR_1)
{
 int VAR_2;

 VAR_1->def_cp_ring.stats_ctx_id = VAR_0;
 VAR_1->def_cp_ring.ring.phys_id = (uint16_t)VAR_0;
 for (VAR_2 = 0; VAR_2 < VAR_1->ntxqsets; VAR_2++) {
  VAR_1->tx_cp_rings[VAR_2].stats_ctx_id = VAR_0;
  VAR_1->tx_cp_rings[VAR_2].ring.phys_id =
      (uint16_t)VAR_0;
  VAR_1->tx_rings[VAR_2].phys_id = (uint16_t)VAR_0;
 }
 for (VAR_2 = 0; VAR_2 < VAR_1->nrxqsets; VAR_2++) {
  VAR_1->rx_cp_rings[VAR_2].stats_ctx_id = VAR_0;
  VAR_1->rx_cp_rings[VAR_2].ring.phys_id =
      (uint16_t)VAR_0;
  VAR_1->rx_rings[VAR_2].phys_id = (uint16_t)VAR_0;
  VAR_1->ag_rings[VAR_2].phys_id = (uint16_t)VAR_0;
  VAR_1->grp_info[VAR_2].grp_id = (uint16_t)VAR_0;
 }
 VAR_1->vnic_info.filter_id = -1;
 VAR_1->vnic_info.id = (uint16_t)VAR_0;
 VAR_1->vnic_info.rss_id = (uint16_t)VAR_0;
 FUNC_0(VAR_1->vnic_info.rss_grp_tbl.idi_vaddr, 0xff,
     VAR_1->vnic_info.rss_grp_tbl.idi_size);
}
