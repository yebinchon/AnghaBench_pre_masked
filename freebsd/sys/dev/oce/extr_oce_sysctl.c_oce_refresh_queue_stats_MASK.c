
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct oce_tx_stats {int dummy; } ;
struct oce_rx_stats {int dummy; } ;
struct TYPE_13__ {int t_ipv6_ext_hdr_tx_drop; int t_tx_pkts; int t_tx_bytes; int t_tx_compl; int t_tx_wrbs; int t_tx_stops; int t_tx_reqs; int t_rxcp_errs; int t_rx_ucast_pkts; int t_rx_mcast_pkts; int t_rx_frags; int t_rx_bytes; int t_rx_pkts; } ;
struct oce_drv_stats {TYPE_7__ tx; TYPE_7__ rx; } ;
struct TYPE_12__ {int nrqs; int nwqs; TYPE_4__** wq; TYPE_2__** rq; struct oce_drv_stats oce_stats_info; } ;
struct TYPE_10__ {scalar_t__ ipv6_ext_hdr_tx_drop; scalar_t__ tx_pkts; scalar_t__ tx_bytes; scalar_t__ tx_compl; scalar_t__ tx_wrbs; scalar_t__ tx_stops; scalar_t__ tx_reqs; } ;
struct TYPE_11__ {TYPE_3__ tx_stats; } ;
struct TYPE_8__ {scalar_t__ rxcp_err; scalar_t__ rx_ucast_pkts; scalar_t__ rx_mcast_pkts; scalar_t__ rx_frags; scalar_t__ rx_bytes; scalar_t__ rx_pkts; } ;
struct TYPE_9__ {TYPE_1__ rx_stats; } ;
typedef TYPE_5__* POCE_SOFTC ;


 int FUNC_0 (TYPE_7__*,int) ;

void
FUNC_1(POCE_SOFTC VAR_0)
{
 struct oce_drv_stats *VAR_1;
 int VAR_2;

 VAR_1 = &VAR_0->oce_stats_info;



 FUNC_0(&VAR_1->rx, sizeof(struct oce_rx_stats));
 for (VAR_2 = 0; VAR_2 < VAR_0->nrqs; VAR_2++) {

  VAR_1->rx.t_rx_pkts += VAR_0->rq[VAR_2]->rx_stats.rx_pkts;
  VAR_1->rx.t_rx_bytes += VAR_0->rq[VAR_2]->rx_stats.rx_bytes;
  VAR_1->rx.t_rx_frags += VAR_0->rq[VAR_2]->rx_stats.rx_frags;
  VAR_1->rx.t_rx_mcast_pkts +=
     VAR_0->rq[VAR_2]->rx_stats.rx_mcast_pkts;
  VAR_1->rx.t_rx_ucast_pkts +=
     VAR_0->rq[VAR_2]->rx_stats.rx_ucast_pkts;
  VAR_1->rx.t_rxcp_errs += VAR_0-> rq[VAR_2]->rx_stats.rxcp_err;
 }

 FUNC_0(&VAR_1->tx, sizeof(struct oce_tx_stats));
 for (VAR_2 = 0; VAR_2 < VAR_0->nwqs; VAR_2++) {
  VAR_1->tx.t_tx_reqs += VAR_0->wq[VAR_2]->tx_stats.tx_reqs;
  VAR_1->tx.t_tx_stops += VAR_0->wq[VAR_2]->tx_stats.tx_stops;
  VAR_1->tx.t_tx_wrbs += VAR_0->wq[VAR_2]->tx_stats.tx_wrbs;
  VAR_1->tx.t_tx_compl += VAR_0->wq[VAR_2]->tx_stats.tx_compl;
  VAR_1->tx.t_tx_bytes += VAR_0->wq[VAR_2]->tx_stats.tx_bytes;
  VAR_1->tx.t_tx_pkts += VAR_0->wq[VAR_2]->tx_stats.tx_pkts;
  VAR_1->tx.t_ipv6_ext_hdr_tx_drop +=
    VAR_0->wq[VAR_2]->tx_stats.ipv6_ext_hdr_tx_drop;
 }

}
