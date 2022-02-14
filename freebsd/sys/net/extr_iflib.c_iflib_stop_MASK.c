
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* iflib_txq_t ;
typedef TYPE_2__* iflib_rxq_t ;
typedef int iflib_fl_t ;
typedef TYPE_3__* iflib_dma_info_t ;
typedef TYPE_4__* if_softc_ctx_t ;
typedef TYPE_5__* if_shared_ctx_t ;
typedef TYPE_6__* if_ctx_t ;
struct TYPE_18__ {int isc_ntxqsets; int isc_nrxqsets; } ;
struct TYPE_20__ {int ifc_ifp; TYPE_5__* ifc_sctx; TYPE_4__ ifc_softc_ctx; TYPE_2__* ifc_rxqs; TYPE_1__* ifc_txqs; } ;
struct TYPE_19__ {int isc_ntxqs; int isc_nrxqs; } ;
struct TYPE_17__ {int idi_size; scalar_t__ idi_vaddr; } ;
struct TYPE_16__ {int ifr_nfl; int ifr_fl; TYPE_3__* ifr_ifdi; scalar_t__ ifr_cq_cidx; } ;
struct TYPE_15__ {int ift_size; TYPE_3__* ift_ifdi; int ift_br; scalar_t__ ift_pullups; scalar_t__ ift_map_failed; scalar_t__ ift_txd_encap_efbig; scalar_t__ ift_no_tx_dma_setup; scalar_t__ ift_mbuf_defrag_failed; scalar_t__ ift_mbuf_defrag; scalar_t__ ift_closed; scalar_t__ ift_no_desc_avail; scalar_t__ ift_pidx; scalar_t__ ift_cidx; scalar_t__ ift_gen; scalar_t__ ift_in_use; scalar_t__ ift_cidx_processed; scalar_t__ ift_cleaned; scalar_t__ ift_processed; int ift_timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_1__*,int) ;
 int FUNC_12 (int ) ;

void
FUNC_13(if_ctx_t VAR_2)
{
 iflib_txq_t VAR_3 = VAR_2->ifc_txqs;
 iflib_rxq_t VAR_4 = VAR_2->ifc_rxqs;
 if_softc_ctx_t VAR_5 = &VAR_2->ifc_softc_ctx;
 if_shared_ctx_t VAR_6 = VAR_2->ifc_sctx;
 iflib_dma_info_t VAR_7;
 iflib_fl_t VAR_8;
 int VAR_9, VAR_10;


 FUNC_7(VAR_2->ifc_ifp, VAR_0, VAR_1);

 FUNC_3(VAR_2);
 FUNC_2(1000);
 FUNC_4(VAR_2);
 FUNC_2(1000);

 FUNC_8();

 for (VAR_9 = 0; VAR_9 < VAR_5->isc_ntxqsets; VAR_9++, VAR_3++) {


  FUNC_0(VAR_3);
  FUNC_6(&VAR_3->ift_timer);
  FUNC_1(VAR_3);


  FUNC_10(VAR_3);

  for (VAR_10 = 0; VAR_10 < VAR_3->ift_size; VAR_10++) {
   FUNC_11(VAR_2, VAR_3, VAR_10);
  }
  VAR_3->ift_processed = VAR_3->ift_cleaned = VAR_3->ift_cidx_processed = 0;
  VAR_3->ift_in_use = VAR_3->ift_gen = VAR_3->ift_cidx = VAR_3->ift_pidx = VAR_3->ift_no_desc_avail = 0;
  VAR_3->ift_closed = VAR_3->ift_mbuf_defrag = VAR_3->ift_mbuf_defrag_failed = 0;
  VAR_3->ift_no_tx_dma_setup = VAR_3->ift_txd_encap_efbig = VAR_3->ift_map_failed = 0;
  VAR_3->ift_pullups = 0;
  FUNC_12(VAR_3->ift_br);
  for (VAR_10 = 0, VAR_7 = VAR_3->ift_ifdi; VAR_10 < VAR_6->isc_ntxqs; VAR_10++, VAR_7++)
   FUNC_5((void *)VAR_7->idi_vaddr, VAR_7->idi_size);
 }
 for (VAR_9 = 0; VAR_9 < VAR_5->isc_nrxqsets; VAR_9++, VAR_4++) {


  VAR_4->ifr_cq_cidx = 0;
  for (VAR_10 = 0, VAR_7 = VAR_4->ifr_ifdi; VAR_10 < VAR_6->isc_nrxqs; VAR_10++, VAR_7++)
   FUNC_5((void *)VAR_7->idi_vaddr, VAR_7->idi_size);

  for (VAR_10 = 0, VAR_8 = VAR_4->ifr_fl; VAR_10 < VAR_4->ifr_nfl; VAR_10++, VAR_8++)
   FUNC_9(VAR_8);
 }
}
