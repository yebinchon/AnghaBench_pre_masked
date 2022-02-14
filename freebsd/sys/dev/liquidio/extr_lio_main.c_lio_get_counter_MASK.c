
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


typedef scalar_t__ uint64_t ;
struct TYPE_14__ {scalar_t__ frame_err; scalar_t__ l2_err; scalar_t__ fcs_err; scalar_t__ total_mcst; } ;
struct TYPE_13__ {scalar_t__ total_collisions; scalar_t__ mcast_pkts_sent; } ;
struct TYPE_15__ {TYPE_11__ fromwire; TYPE_10__ fromhost; } ;
struct octeon_device {int num_oqs; int num_iqs; TYPE_12__ link_stats; TYPE_9__** instr_queue; TYPE_4__** droq; } ;
struct TYPE_22__ {TYPE_6__* txpciq; TYPE_2__* rxpciq; } ;
struct lio {TYPE_7__ linfo; struct octeon_device* oct_dev; } ;
typedef int ift_counter ;
typedef int if_t ;
struct TYPE_23__ {scalar_t__ tx_dropped; scalar_t__ tx_tot_bytes; scalar_t__ tx_done; } ;
struct TYPE_24__ {TYPE_8__ stats; } ;
struct TYPE_20__ {int q_no; } ;
struct TYPE_21__ {TYPE_5__ s; } ;
struct TYPE_18__ {scalar_t__ rx_dropped; scalar_t__ rx_bytes_received; scalar_t__ rx_pkts_received; } ;
struct TYPE_19__ {TYPE_3__ stats; } ;
struct TYPE_16__ {int q_no; } ;
struct TYPE_17__ {TYPE_1__ s; } ;
 scalar_t__ FUNC_0 (int ,int) ;
 struct lio* FUNC_1 (int ) ;

__attribute__((used)) static uint64_t
FUNC_2(if_t VAR_0, ift_counter VAR_1)
{
 struct lio *VAR_2 = FUNC_1(VAR_0);
 struct octeon_device *VAR_3 = VAR_2->oct_dev;
 uint64_t VAR_4 = 0;
 int VAR_5, VAR_6;

 switch (VAR_1) {
 case 133:
  for (VAR_5 = 0; VAR_5 < VAR_3->num_oqs; VAR_5++) {
   VAR_6 = VAR_2->linfo.rxpciq[VAR_5].s.q_no;
   VAR_4 += VAR_3->droq[VAR_6]->stats.rx_pkts_received;
  }
  break;
 case 129:
  for (VAR_5 = 0; VAR_5 < VAR_3->num_iqs; VAR_5++) {
   VAR_6 = VAR_2->linfo.txpciq[VAR_5].s.q_no;
   VAR_4 += VAR_3->instr_queue[VAR_6]->stats.tx_done;
  }
  break;
 case 136:
  for (VAR_5 = 0; VAR_5 < VAR_3->num_oqs; VAR_5++) {
   VAR_6 = VAR_2->linfo.rxpciq[VAR_5].s.q_no;
   VAR_4 += VAR_3->droq[VAR_6]->stats.rx_bytes_received;
  }
  break;
 case 131:
  for (VAR_5 = 0; VAR_5 < VAR_3->num_iqs; VAR_5++) {
   VAR_6 = VAR_2->linfo.txpciq[VAR_5].s.q_no;
   VAR_4 += VAR_3->instr_queue[VAR_6]->stats.tx_tot_bytes;
  }
  break;
 case 132:
  for (VAR_5 = 0; VAR_5 < VAR_3->num_oqs; VAR_5++) {
   VAR_6 = VAR_2->linfo.rxpciq[VAR_5].s.q_no;
   VAR_4 += VAR_3->droq[VAR_6]->stats.rx_dropped;
  }
  break;
 case 128:
  for (VAR_5 = 0; VAR_5 < VAR_3->num_iqs; VAR_5++) {
   VAR_6 = VAR_2->linfo.txpciq[VAR_5].s.q_no;
   VAR_4 += VAR_3->instr_queue[VAR_6]->stats.tx_dropped;
  }
  break;
 case 134:
  VAR_4 = VAR_3->link_stats.fromwire.total_mcst;
  break;
 case 130:
  VAR_4 = VAR_3->link_stats.fromhost.mcast_pkts_sent;
  break;
 case 137:
  VAR_4 = VAR_3->link_stats.fromhost.total_collisions;
  break;
 case 135:
  VAR_4 = VAR_3->link_stats.fromwire.fcs_err +
      VAR_3->link_stats.fromwire.l2_err +
      VAR_3->link_stats.fromwire.frame_err;
  break;
 default:
  return (FUNC_0(VAR_0, VAR_1));
 }

 return (VAR_4);
}
