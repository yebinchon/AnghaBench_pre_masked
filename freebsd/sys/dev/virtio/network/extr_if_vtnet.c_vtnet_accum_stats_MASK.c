
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vtnet_txq_stats {scalar_t__ vtxs_rescheduled; scalar_t__ vtxs_tso; scalar_t__ vtxs_csum; scalar_t__ vtxs_obytes; scalar_t__ vtxs_opackets; scalar_t__ vrxs_rescheduled; scalar_t__ vrxs_csum_failed; scalar_t__ vrxs_csum; scalar_t__ vrxs_iqdrops; scalar_t__ vrxs_ibytes; scalar_t__ vrxs_ipackets; } ;
struct vtnet_softc {int vtnet_max_vq_pairs; TYPE_2__* vtnet_txqs; TYPE_1__* vtnet_rxqs; } ;
struct vtnet_rxq_stats {scalar_t__ vtxs_rescheduled; scalar_t__ vtxs_tso; scalar_t__ vtxs_csum; scalar_t__ vtxs_obytes; scalar_t__ vtxs_opackets; scalar_t__ vrxs_rescheduled; scalar_t__ vrxs_csum_failed; scalar_t__ vrxs_csum; scalar_t__ vrxs_iqdrops; scalar_t__ vrxs_ibytes; scalar_t__ vrxs_ipackets; } ;
struct TYPE_4__ {struct vtnet_txq_stats vtntx_stats; } ;
struct TYPE_3__ {struct vtnet_txq_stats vtnrx_stats; } ;


 int FUNC_0 (struct vtnet_txq_stats*,int) ;

__attribute__((used)) static void
FUNC_1(struct vtnet_softc *VAR_0, struct vtnet_rxq_stats *VAR_1,
    struct vtnet_txq_stats *VAR_2)
{

 FUNC_0(VAR_1, sizeof(struct vtnet_rxq_stats));
 FUNC_0(VAR_2, sizeof(struct vtnet_txq_stats));

 for (int VAR_3 = 0; VAR_3 < VAR_0->vtnet_max_vq_pairs; VAR_3++) {
  struct vtnet_rxq_stats *VAR_4;
  struct vtnet_txq_stats *VAR_5;

  VAR_4 = &VAR_0->vtnet_rxqs[VAR_3].vtnrx_stats;
  VAR_1->vrxs_ipackets += VAR_4->vrxs_ipackets;
  VAR_1->vrxs_ibytes += VAR_4->vrxs_ibytes;
  VAR_1->vrxs_iqdrops += VAR_4->vrxs_iqdrops;
  VAR_1->vrxs_csum += VAR_4->vrxs_csum;
  VAR_1->vrxs_csum_failed += VAR_4->vrxs_csum_failed;
  VAR_1->vrxs_rescheduled += VAR_4->vrxs_rescheduled;

  VAR_5 = &VAR_0->vtnet_txqs[VAR_3].vtntx_stats;
  VAR_2->vtxs_opackets += VAR_5->vtxs_opackets;
  VAR_2->vtxs_obytes += VAR_5->vtxs_obytes;
  VAR_2->vtxs_csum += VAR_5->vtxs_csum;
  VAR_2->vtxs_tso += VAR_5->vtxs_tso;
  VAR_2->vtxs_rescheduled += VAR_5->vtxs_rescheduled;
 }
}
