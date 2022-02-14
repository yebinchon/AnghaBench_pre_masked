
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_24__ {scalar_t__ lro_flushed; scalar_t__ lro_queued; scalar_t__ lro_bad_csum; } ;
struct TYPE_23__ {scalar_t__ cnt; } ;
struct TYPE_22__ {scalar_t__ cnt; } ;
struct TYPE_21__ {scalar_t__ stall; scalar_t__ defrag; scalar_t__ wake; scalar_t__ deactivate; scalar_t__ activate; scalar_t__ queue_active; scalar_t__ pkt_done; scalar_t__ done; scalar_t__ req; } ;
struct TYPE_20__ {int bus_addr; } ;
struct TYPE_27__ {scalar_t__ cnt; scalar_t__ idx; TYPE_1__ dma; TYPE_9__* entry; } ;
struct mxge_slice_state {int * fw_stats; TYPE_5__ lc; TYPE_4__ rx_small; TYPE_3__ rx_big; TYPE_2__ tx; TYPE_8__ rx_done; int volatile* irq_claim; } ;
struct TYPE_26__ {int rx_ring_size; int num_slices; int rdma_tags_available; int throttle; int dev; int pause; TYPE_6__* ifp; struct mxge_slice_state* ss; int intr_coal_delay; int volatile* intr_coal_delay_ptr; scalar_t__ sram; int volatile* irq_deassert; } ;
typedef TYPE_7__ mxge_softc_t ;
typedef TYPE_8__ mxge_rx_done_t ;
struct TYPE_28__ {int data0; int data2; int data1; } ;
typedef TYPE_9__ mxge_cmd_t ;
typedef int cmd ;
struct TYPE_25__ {int if_flags; } ;


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
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*) ;
 int volatile FUNC_4 (int ) ;
 int FUNC_5 (TYPE_9__*,int ,int) ;
 int FUNC_6 (TYPE_7__*,int ) ;
 int FUNC_7 (TYPE_7__*,int) ;
 int FUNC_8 (TYPE_7__*,int ) ;
 int FUNC_9 (TYPE_7__*,int) ;
 int FUNC_10 (TYPE_7__*,int ,TYPE_9__*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*) ;

__attribute__((used)) static int
FUNC_13(mxge_softc_t *VAR_14, int VAR_15)
{
 struct mxge_slice_state *VAR_16;
 mxge_rx_done_t *VAR_17;
 volatile uint32_t *VAR_18;
 mxge_cmd_t VAR_19;
 int VAR_20, VAR_21;



 FUNC_5(&VAR_19, 0, sizeof (VAR_19));
 VAR_21 = FUNC_10(VAR_14, VAR_7, &VAR_19);
 if (VAR_21 != 0) {
  FUNC_3(VAR_14->dev, "failed reset\n");
  return VAR_0;
 }

 FUNC_9(VAR_14, 1);



 VAR_19.data0 = VAR_14->rx_ring_size;
 VAR_21 = FUNC_10(VAR_14, VAR_9, &VAR_19);
 if (VAR_14->num_slices > 1) {

  VAR_21 = FUNC_10(VAR_14, VAR_6,
        &VAR_19);
  if (VAR_21 != 0) {
   FUNC_3(VAR_14->dev,
          "failed to get number of slices\n");
   return VAR_21;
  }




  VAR_19.data0 = VAR_14->num_slices;
  VAR_19.data1 = VAR_13;



  VAR_21 = FUNC_10(VAR_14, VAR_2,
        &VAR_19);
  if (VAR_21 != 0) {
   FUNC_3(VAR_14->dev,
          "failed to set number of slices\n");
   return VAR_21;
  }
 }


 if (VAR_15) {

  for (VAR_20 = 0; VAR_20 < VAR_14->num_slices; VAR_20++) {
   VAR_17 = &VAR_14->ss[VAR_20].rx_done;
   FUNC_5(VAR_17->entry, 0, VAR_14->rx_ring_size);
   VAR_19.data0 = FUNC_1(VAR_17->dma.bus_addr);
   VAR_19.data1 = FUNC_0(VAR_17->dma.bus_addr);
   VAR_19.data2 = VAR_20;
   VAR_21 |= FUNC_10(VAR_14,
      VAR_8,
      &VAR_19);
  }
 }

 VAR_21 |= FUNC_10(VAR_14,
    VAR_3, &VAR_19);


 VAR_14->intr_coal_delay_ptr = (volatile uint32_t *)(VAR_14->sram + VAR_19.data0);

 VAR_21 |= FUNC_10(VAR_14, VAR_4, &VAR_19);
 VAR_18 = (volatile uint32_t *)(VAR_14->sram + VAR_19.data0);


 VAR_21 |= FUNC_10(VAR_14, VAR_5,
    &VAR_19);
 VAR_14->irq_deassert = (volatile uint32_t *)(VAR_14->sram + VAR_19.data0);
 if (VAR_21 != 0) {
  FUNC_3(VAR_14->dev, "failed set interrupt parameters\n");
  return VAR_21;
 }


 *VAR_14->intr_coal_delay_ptr = FUNC_4(VAR_14->intr_coal_delay);



 (void) FUNC_8(VAR_14, VAR_11);

 for (VAR_20 = 0; VAR_20 < VAR_14->num_slices; VAR_20++) {
  VAR_16 = &VAR_14->ss[VAR_20];

  VAR_16->irq_claim = VAR_18 + (2 * VAR_20);

  VAR_16->rx_done.idx = 0;
  VAR_16->rx_done.cnt = 0;
  VAR_16->tx.req = 0;
  VAR_16->tx.done = 0;
  VAR_16->tx.pkt_done = 0;
  VAR_16->tx.queue_active = 0;
  VAR_16->tx.activate = 0;
  VAR_16->tx.deactivate = 0;
  VAR_16->tx.wake = 0;
  VAR_16->tx.defrag = 0;
  VAR_16->tx.stall = 0;
  VAR_16->rx_big.cnt = 0;
  VAR_16->rx_small.cnt = 0;
  VAR_16->lc.lro_bad_csum = 0;
  VAR_16->lc.lro_queued = 0;
  VAR_16->lc.lro_flushed = 0;
  if (VAR_16->fw_stats != ((void*)0)) {
   FUNC_2(VAR_16->fw_stats, sizeof *VAR_16->fw_stats);
  }
 }
 VAR_14->rdma_tags_available = 15;
 VAR_21 = FUNC_12(VAR_14);
 FUNC_7(VAR_14, VAR_14->ifp->if_flags & VAR_1);
 FUNC_6(VAR_14, VAR_14->pause);
 FUNC_11(VAR_14);
 if (VAR_14->throttle) {
  VAR_19.data0 = VAR_14->throttle;
  if (FUNC_10(VAR_14, VAR_10,
      &VAR_19)) {
   FUNC_3(VAR_14->dev,
          "can't enable throttle\n");
  }
 }
 return VAR_21;
}
