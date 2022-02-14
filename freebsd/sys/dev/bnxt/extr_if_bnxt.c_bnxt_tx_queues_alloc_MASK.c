
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
typedef void* uint16_t ;
struct ctx_hw_stats {int dummy; } ;
struct TYPE_7__ {int idi_map; int idi_tag; } ;
struct bnxt_softc {int ntxqsets; TYPE_4__* tx_cp_rings; TYPE_4__* tx_rings; TYPE_2__* scctx; TYPE_3__ tx_stats; } ;
struct bnxt_ring {int dummy; } ;
struct bnxt_cp_ring {int dummy; } ;
typedef int if_ctx_t ;
typedef void* caddr_t ;
struct TYPE_5__ {int id; int doorbell; void* paddr; void* vaddr; int ring_size; struct bnxt_softc* softc; void* phys_id; } ;
struct TYPE_8__ {int id; int doorbell; void* paddr; void* vaddr; int ring_size; struct bnxt_softc* softc; void* phys_id; TYPE_1__ ring; scalar_t__ stats_ctx_id; } ;
struct TYPE_6__ {int isc_nrxqsets; int * isc_ntxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnxt_softc*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int ,int,TYPE_3__*,int ) ;
 int FUNC_5 (int ) ;
 struct bnxt_softc* FUNC_6 (int ) ;
 void* FUNC_7 (int,int ,int) ;

__attribute__((used)) static int
FUNC_8(if_ctx_t VAR_6, caddr_t *VAR_7,
    uint64_t *VAR_8, int VAR_9, int VAR_10)
{
 struct bnxt_softc *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_6(VAR_6);

 VAR_11->tx_cp_rings = FUNC_7(sizeof(struct bnxt_cp_ring) * VAR_10,
     VAR_3, VAR_4 | VAR_5);
 if (!VAR_11->tx_cp_rings) {
  FUNC_2(FUNC_5(VAR_6),
      "unable to allocate TX completion rings\n");
  VAR_13 = VAR_1;
  goto cp_alloc_fail;
 }
 VAR_11->tx_rings = FUNC_7(sizeof(struct bnxt_ring) * VAR_10,
     VAR_3, VAR_4 | VAR_5);
 if (!VAR_11->tx_rings) {
  FUNC_2(FUNC_5(VAR_6),
      "unable to allocate TX rings\n");
  VAR_13 = VAR_1;
  goto ring_alloc_fail;
 }
 VAR_13 = FUNC_4(VAR_6, sizeof(struct ctx_hw_stats) * VAR_10,
     &VAR_11->tx_stats, 0);
 if (VAR_13)
  goto dma_alloc_fail;
 FUNC_1(VAR_11->tx_stats.idi_tag, VAR_11->tx_stats.idi_map,
     VAR_0);

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {

  VAR_11->tx_cp_rings[VAR_12].stats_ctx_id = VAR_2;
  VAR_11->tx_cp_rings[VAR_12].ring.phys_id =
      (uint16_t)VAR_2;
  VAR_11->tx_cp_rings[VAR_12].ring.softc = VAR_11;
  VAR_11->tx_cp_rings[VAR_12].ring.id =
      (VAR_11->scctx->isc_nrxqsets * 2) + 1 + VAR_12;
  VAR_11->tx_cp_rings[VAR_12].ring.doorbell =
      VAR_11->tx_cp_rings[VAR_12].ring.id * 0x80;
  VAR_11->tx_cp_rings[VAR_12].ring.ring_size =
      VAR_11->scctx->isc_ntxd[0];
  VAR_11->tx_cp_rings[VAR_12].ring.vaddr = VAR_7[VAR_12 * VAR_9];
  VAR_11->tx_cp_rings[VAR_12].ring.paddr = VAR_8[VAR_12 * VAR_9];


  VAR_11->tx_rings[VAR_12].phys_id = (uint16_t)VAR_2;
  VAR_11->tx_rings[VAR_12].softc = VAR_11;
  VAR_11->tx_rings[VAR_12].id =
      (VAR_11->scctx->isc_nrxqsets * 2) + 1 + VAR_12;
  VAR_11->tx_rings[VAR_12].doorbell = VAR_11->tx_rings[VAR_12].id * 0x80;
  VAR_11->tx_rings[VAR_12].ring_size = VAR_11->scctx->isc_ntxd[1];
  VAR_11->tx_rings[VAR_12].vaddr = VAR_7[VAR_12 * VAR_9 + 1];
  VAR_11->tx_rings[VAR_12].paddr = VAR_8[VAR_12 * VAR_9 + 1];

  FUNC_0(VAR_11, VAR_12);
 }

 VAR_11->ntxqsets = VAR_10;
 return VAR_13;

dma_alloc_fail:
 FUNC_3(VAR_11->tx_rings, VAR_3);
ring_alloc_fail:
 FUNC_3(VAR_11->tx_cp_rings, VAR_3);
cp_alloc_fail:
 return VAR_13;
}
