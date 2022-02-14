
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct octeon_tx_stats {int fw_tx_vxlan; int fw_err_tso; int fw_tso_fwd; int fw_tso; int fw_err_drop; int fw_err_link; int fw_err_pki; int fw_err_pko; int fw_total_fwd; int fw_total_sent; int total_collisions; int runts; int fifo_err; int max_deferral_fail; int max_collision_fail; int multi_collision_sent; int one_collision_sent; int ctl_sent; int bcast_pkts_sent; int mcast_pkts_sent; int total_bytes_sent; int total_pkts_sent; } ;
struct octeon_rx_stats {int fwd_rate; int fw_lro_aborts_timer; int fw_lro_aborts_tsval; int fw_lro_aborts_seq; int fw_lro_aborts_port; int fw_lro_aborts; int fw_total_lro; int fw_lro_octs; int fw_lro_pkts; int fw_rx_vxlan_err; int fw_rx_vxlan; int fw_err_drop; int fw_err_link; int fw_err_pko; int fw_total_fwd; int fw_total_rcvd; int frame_err; int l2_err; int jabber_err; int fcs_err; int dmac_drop; int fifo_err; int ctl_rcvd; int runts; int total_mcst; int total_bcst; int bytes_rcvd; int total_rcvd; } ;
struct octeon_link_stats {int dummy; } ;
struct TYPE_5__ {struct ifnet* ifp; } ;
struct TYPE_4__ {struct octeon_tx_stats fromhost; struct octeon_rx_stats fromwire; } ;
struct octeon_device {TYPE_2__ props; TYPE_1__ link_stats; } ;
struct lio_soft_command {scalar_t__ virtrptr; } ;
struct TYPE_6__ {struct octeon_tx_stats fromhost; struct octeon_rx_stats fromwire; } ;
struct lio_fw_stats_resp {TYPE_3__ stats; int status; } ;
struct lio {int stats_interval; int stats_timer; } ;
struct ifnet {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct lio* FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct octeon_device*,struct lio_soft_command*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(struct octeon_device *VAR_1, uint32_t VAR_2, void *VAR_3)
{
 struct lio_soft_command *VAR_4 = (struct lio_soft_command *)VAR_3;
 struct lio_fw_stats_resp *VAR_5 =
  (struct lio_fw_stats_resp *)VAR_4->virtrptr;
 struct octeon_rx_stats *VAR_6 = &VAR_5->stats.fromwire;
 struct octeon_tx_stats *VAR_7 = &VAR_5->stats.fromhost;
 struct octeon_rx_stats *VAR_8 = &VAR_1->link_stats.fromwire;
 struct octeon_tx_stats *VAR_9 = &VAR_1->link_stats.fromhost;
 struct ifnet *VAR_10 = VAR_1->props.ifp;
 struct lio *VAR_11 = FUNC_1(VAR_10);

 if ((VAR_2 != VAR_0) && !VAR_5->status) {
  FUNC_4((uint64_t *)&VAR_5->stats,
     (sizeof(struct octeon_link_stats)) >> 3);


  VAR_8->total_rcvd = VAR_6->total_rcvd;
  VAR_8->bytes_rcvd = VAR_6->bytes_rcvd;
  VAR_8->total_bcst = VAR_6->total_bcst;
  VAR_8->total_mcst = VAR_6->total_mcst;
  VAR_8->runts = VAR_6->runts;
  VAR_8->ctl_rcvd = VAR_6->ctl_rcvd;

  VAR_8->fifo_err = VAR_6->fifo_err;
  VAR_8->dmac_drop = VAR_6->dmac_drop;
  VAR_8->fcs_err = VAR_6->fcs_err;
  VAR_8->jabber_err = VAR_6->jabber_err;
  VAR_8->l2_err = VAR_6->l2_err;
  VAR_8->frame_err = VAR_6->frame_err;


  VAR_8->fw_total_rcvd = VAR_6->fw_total_rcvd;
  VAR_8->fw_total_fwd = VAR_6->fw_total_fwd;
  VAR_8->fw_err_pko = VAR_6->fw_err_pko;
  VAR_8->fw_err_link = VAR_6->fw_err_link;
  VAR_8->fw_err_drop = VAR_6->fw_err_drop;
  VAR_8->fw_rx_vxlan = VAR_6->fw_rx_vxlan;
  VAR_8->fw_rx_vxlan_err = VAR_6->fw_rx_vxlan_err;


  VAR_8->fw_lro_pkts = VAR_6->fw_lro_pkts;

  VAR_8->fw_lro_octs = VAR_6->fw_lro_octs;

  VAR_8->fw_total_lro = VAR_6->fw_total_lro;

  VAR_8->fw_lro_aborts = VAR_6->fw_lro_aborts;
  VAR_8->fw_lro_aborts_port = VAR_6->fw_lro_aborts_port;
  VAR_8->fw_lro_aborts_seq = VAR_6->fw_lro_aborts_seq;
  VAR_8->fw_lro_aborts_tsval = VAR_6->fw_lro_aborts_tsval;
  VAR_8->fw_lro_aborts_timer = VAR_6->fw_lro_aborts_timer;

  VAR_8->fwd_rate = VAR_6->fwd_rate;


  VAR_9->total_pkts_sent = VAR_7->total_pkts_sent;
  VAR_9->total_bytes_sent = VAR_7->total_bytes_sent;
  VAR_9->mcast_pkts_sent = VAR_7->mcast_pkts_sent;
  VAR_9->bcast_pkts_sent = VAR_7->bcast_pkts_sent;
  VAR_9->ctl_sent = VAR_7->ctl_sent;

  VAR_9->one_collision_sent = VAR_7->one_collision_sent;

  VAR_9->multi_collision_sent = VAR_7->multi_collision_sent;

  VAR_9->max_collision_fail = VAR_7->max_collision_fail;

  VAR_9->max_deferral_fail = VAR_7->max_deferral_fail;

  VAR_9->fifo_err = VAR_7->fifo_err;
  VAR_9->runts = VAR_7->runts;

  VAR_9->total_collisions = VAR_7->total_collisions;


  VAR_9->fw_total_sent = VAR_7->fw_total_sent;
  VAR_9->fw_total_fwd = VAR_7->fw_total_fwd;
  VAR_9->fw_err_pko = VAR_7->fw_err_pko;
  VAR_9->fw_err_pki = VAR_7->fw_err_pki;
  VAR_9->fw_err_link = VAR_7->fw_err_link;
  VAR_9->fw_err_drop = VAR_7->fw_err_drop;
  VAR_9->fw_tso = VAR_7->fw_tso;
  VAR_9->fw_tso_fwd = VAR_7->fw_tso_fwd;
  VAR_9->fw_err_tso = VAR_7->fw_err_tso;
  VAR_9->fw_tx_vxlan = VAR_7->fw_tx_vxlan;
 }
 FUNC_2(VAR_1, VAR_4);
 FUNC_0(&VAR_11->stats_timer,
    FUNC_3(VAR_11->stats_interval));
}
