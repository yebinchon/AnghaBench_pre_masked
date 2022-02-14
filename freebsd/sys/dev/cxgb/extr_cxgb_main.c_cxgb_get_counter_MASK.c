
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct mac_stats {scalar_t__ rx_cong_drops; scalar_t__ tx_mcast_frames; scalar_t__ rx_mcast_frames; scalar_t__ tx_octets; scalar_t__ rx_octets; scalar_t__ tx_total_collisions; scalar_t__ tx_fcs_errs; scalar_t__ tx_excess_deferral; scalar_t__ tx_mac_internal_errs; scalar_t__ tx_len_errs; scalar_t__ tx_underrun; scalar_t__ tx_excess_collisions; scalar_t__ tx_frames; scalar_t__ rx_fcs_errs; scalar_t__ rx_short; scalar_t__ rx_mac_internal_errs; scalar_t__ rx_too_long; scalar_t__ rx_runt; scalar_t__ rx_sequence_errs; scalar_t__ rx_data_errs; scalar_t__ rx_jabber; scalar_t__ rx_frames; } ;
struct cmac {struct mac_stats stats; } ;
struct port_info {int first_qset; int nqsets; struct cmac mac; struct adapter* adapter; } ;
struct ifnet {struct port_info* if_softc; } ;
struct TYPE_8__ {TYPE_3__* qs; } ;
struct adapter {int flags; TYPE_4__ sge; } ;
typedef int ift_counter ;
struct TYPE_7__ {TYPE_2__* txq; } ;
struct TYPE_6__ {TYPE_1__* txq_mr; } ;
struct TYPE_5__ {scalar_t__ br_drops; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct port_info*) ;
 scalar_t__ FUNC_1 (struct ifnet*,int) ;

__attribute__((used)) static uint64_t
FUNC_2(struct ifnet *VAR_2, ift_counter VAR_3)
{
 struct port_info *VAR_4 = VAR_2->if_softc;
 struct adapter *VAR_5 = VAR_4->adapter;
 struct cmac *VAR_6 = &VAR_4->mac;
 struct mac_stats *VAR_7 = &VAR_6->stats;

 FUNC_0(VAR_4);

 switch (VAR_3) {
 case 134:
  return (VAR_7->rx_frames);

 case 136:
  return (VAR_7->rx_jabber + VAR_7->rx_data_errs +
      VAR_7->rx_sequence_errs + VAR_7->rx_runt +
      VAR_7->rx_too_long + VAR_7->rx_mac_internal_errs +
      VAR_7->rx_short + VAR_7->rx_fcs_errs);

 case 129:
  return (VAR_7->tx_frames);

 case 131:
  return (VAR_7->tx_excess_collisions + VAR_7->tx_underrun +
      VAR_7->tx_len_errs + VAR_7->tx_mac_internal_errs +
      VAR_7->tx_excess_deferral + VAR_7->tx_fcs_errs);

 case 138:
  return (VAR_7->tx_total_collisions);

 case 137:
  return (VAR_7->rx_octets);

 case 132:
  return (VAR_7->tx_octets);

 case 135:
  return (VAR_7->rx_mcast_frames);

 case 130:
  return (VAR_7->tx_mcast_frames);

 case 133:
  return (VAR_7->rx_cong_drops);

 case 128: {
  int VAR_8;
  uint64_t VAR_9;

  VAR_9 = 0;
  if (VAR_5->flags & VAR_0) {
   for (VAR_8 = VAR_4->first_qset; VAR_8 < VAR_4->first_qset + VAR_4->nqsets; VAR_8++)
    VAR_9 += VAR_5->sge.qs[VAR_8].txq[VAR_1].txq_mr->br_drops;
  }

  return (VAR_9);

 }

 default:
  return (FUNC_1(VAR_2, VAR_3));
 }
}
