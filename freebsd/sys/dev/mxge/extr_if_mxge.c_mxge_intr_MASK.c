
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_9__ {size_t idx; TYPE_1__* entry; } ;
struct TYPE_7__ {scalar_t__ pkt_done; } ;
struct mxge_slice_state {scalar_t__* irq_claim; TYPE_4__ rx_done; TYPE_2__ tx; TYPE_5__* fw_stats; TYPE_3__* sc; } ;
typedef TYPE_2__ mxge_tx_ring_t ;
struct TYPE_8__ {scalar_t__ link_state; int need_media_probe; scalar_t__ rdma_tags_available; int ifp; int down_cnt; int dev; struct mxge_slice_state* ss; scalar_t__ legacy_irq; scalar_t__* irq_deassert; } ;
typedef TYPE_3__ mxge_softc_t ;
typedef TYPE_4__ mxge_rx_done_t ;
struct TYPE_10__ {int valid; int send_done_count; scalar_t__ link_up; int rdma_tags_available; scalar_t__ link_down; scalar_t__ stats_updated; } ;
typedef TYPE_5__ mcp_irq_data_t ;
struct TYPE_6__ {scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mxge_slice_state*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (struct mxge_slice_state*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void *VAR_4)
{
 struct mxge_slice_state *VAR_5 = VAR_4;
 mxge_softc_t *VAR_6 = VAR_5->sc;
 mcp_irq_data_t *VAR_7 = VAR_5->fw_stats;
 mxge_tx_ring_t *VAR_8 = &VAR_5->tx;
 mxge_rx_done_t *VAR_9 = &VAR_5->rx_done;
 uint32_t VAR_10;
 uint8_t VAR_11;





 if (VAR_5 != VAR_6->ss) {
  FUNC_4(VAR_5);
  *VAR_5->irq_claim = FUNC_1(3);
  return;
 }



 if (!VAR_7->valid) {
  return;
 }
 VAR_11 = VAR_7->valid;

 if (VAR_6->legacy_irq) {

  *VAR_6->irq_deassert = 0;
  if (!VAR_2)

   VAR_7->valid = 0;
 } else {
  VAR_7->valid = 0;
 }


 do {

  VAR_10 = FUNC_1(VAR_7->send_done_count);
  while ((VAR_10 != VAR_8->pkt_done) ||
         (VAR_9->entry[VAR_9->idx].length != 0)) {
   if (VAR_10 != VAR_8->pkt_done)
    FUNC_5(VAR_5, (int)VAR_10);
   FUNC_4(VAR_5);
   VAR_10 = FUNC_1(VAR_7->send_done_count);
  }
  if (VAR_6->legacy_irq && VAR_2)
   FUNC_6();
 } while (*((volatile uint8_t *) &VAR_7->valid));


 if (FUNC_0((VAR_5 == VAR_6->ss) && VAR_7->stats_updated)) {
  if (VAR_6->link_state != VAR_7->link_up) {
   VAR_6->link_state = VAR_7->link_up;
   if (VAR_6->link_state) {
    FUNC_3(VAR_6->ifp, VAR_1);
    if (VAR_3)
     FUNC_2(VAR_6->dev, "link up\n");
   } else {
    FUNC_3(VAR_6->ifp, VAR_0);
    if (VAR_3)
     FUNC_2(VAR_6->dev, "link down\n");
   }
   VAR_6->need_media_probe = 1;
  }
  if (VAR_6->rdma_tags_available !=
      FUNC_1(VAR_7->rdma_tags_available)) {
   VAR_6->rdma_tags_available =
    FUNC_1(VAR_7->rdma_tags_available);
   FUNC_2(VAR_6->dev, "RDMA timed out! %d tags "
          "left\n", VAR_6->rdma_tags_available);
  }

  if (VAR_7->link_down) {
   VAR_6->down_cnt += VAR_7->link_down;
   VAR_6->link_state = 0;
   FUNC_3(VAR_6->ifp, VAR_0);
  }
 }


 if (VAR_11 & 0x1)
     *VAR_5->irq_claim = FUNC_1(3);
 *(VAR_5->irq_claim + 1) = FUNC_1(3);
}
