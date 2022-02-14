
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int if_capenable; int (* if_input ) (struct net_device*,struct mbuf*) ;} ;
struct TYPE_13__ {scalar_t__ lro_cnt; } ;
struct mlx4_en_rx_ring {int size_mask; unsigned int bytes; int cons; int prod; TYPE_6__ lro; int packets; int errors; scalar_t__ fcs_del; scalar_t__ buf; struct mlx4_en_rx_mbuf* mbuf; } ;
struct mlx4_en_rx_mbuf {int dummy; } ;
struct mlx4_en_rx_desc {int dummy; } ;
struct TYPE_12__ {int rx_coal_avg; int lro_misses; } ;
struct TYPE_11__ {int rx_chksum_none; int rx_chksum_good; } ;
struct mlx4_en_priv {int cqe_factor; int validate_loopback; TYPE_5__ pstats; TYPE_4__ port_stats; int port_up; TYPE_2__* mdev; struct mlx4_en_rx_ring** rx_ring; } ;
struct mlx4_cq {int cons_index; } ;
struct mlx4_en_cq {size_t ring; int size; struct mlx4_cqe* buf; struct mlx4_cq mcq; } ;
struct mlx4_cqe {int owner_sr_opcode; int status; int checksum; int sl_vid; int vlan_my_qpn; int immed_rss_invalid; int byte_cnt; } ;
struct TYPE_10__ {int flowid; int csum_flags; int csum_data; int ether_vtag; struct net_device* rcvif; } ;
struct mbuf {TYPE_3__ m_pkthdr; int m_flags; } ;
struct TYPE_8__ {int udp_rss; } ;
struct TYPE_9__ {TYPE_1__ profile; } ;


 int FUNC_0 (int ,int) ;
 size_t FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct mbuf*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct mlx4_en_priv*,struct mlx4_cqe*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct mlx4_cq*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int,int const) ;
 struct mbuf* FUNC_14 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*,struct mlx4_en_rx_desc*,struct mlx4_en_rx_mbuf*,unsigned int) ;
 int FUNC_15 (struct mlx4_en_rx_ring*) ;
 struct mlx4_en_priv* FUNC_16 (struct net_device*) ;
 int FUNC_17 () ;
 int FUNC_18 (struct net_device*,struct mbuf*) ;
 int FUNC_19 (TYPE_6__*) ;
 scalar_t__ FUNC_20 (TYPE_6__*,struct mbuf*,int ) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (struct mlx4_en_priv*,struct mbuf*) ;
 int FUNC_23 () ;

int FUNC_24(struct net_device *VAR_11, struct mlx4_en_cq *VAR_12, int VAR_13)
{
 struct mlx4_en_priv *VAR_14 = FUNC_16(VAR_11);
 struct mlx4_cqe *VAR_15;
 struct mlx4_en_rx_ring *VAR_16 = VAR_14->rx_ring[VAR_12->ring];
 struct mlx4_en_rx_mbuf *VAR_17;
 struct mlx4_en_rx_desc *VAR_18;
 struct mbuf *VAR_19;
 struct mlx4_cq *VAR_20 = &VAR_12->mcq;
 struct mlx4_cqe *VAR_21 = VAR_12->buf;
 int VAR_22;
 unsigned int VAR_23;
 int VAR_24 = 0;
 u32 VAR_25 = VAR_20->cons_index;
 u32 VAR_26 = VAR_16->size_mask;
 int VAR_27 = VAR_12->size;
 int VAR_28 = VAR_14->cqe_factor;
 const int VAR_29 = VAR_14->mdev->profile.udp_rss;

 if (!VAR_14->port_up)
  return 0;




 VAR_22 = VAR_25 & VAR_26;
 VAR_15 = &VAR_21[FUNC_1(VAR_22, VAR_28)];


 while (FUNC_4(VAR_15->owner_sr_opcode & VAR_8,
      VAR_25 & VAR_27)) {
  VAR_17 = VAR_16->mbuf + VAR_22;
  VAR_18 = ((struct mlx4_en_rx_desc *)VAR_16->buf) + VAR_22;




  FUNC_17();

  if (FUNC_9(VAR_14, VAR_15)) {
   goto next;
  }



  VAR_23 = FUNC_6(VAR_15->byte_cnt);
  VAR_23 -= VAR_16->fcs_del;

  VAR_19 = FUNC_14(VAR_14, VAR_16, VAR_18, VAR_17, VAR_23);
  if (FUNC_21(!VAR_19)) {
   VAR_16->errors++;
   goto next;
  }

  VAR_16->bytes += VAR_23;
  VAR_16->packets++;

  if (FUNC_21(VAR_14->validate_loopback)) {
   FUNC_22(VAR_14, VAR_19);
   goto next;
  }


  VAR_19->m_pkthdr.flowid = FUNC_6(VAR_15->immed_rss_invalid);
  FUNC_3(VAR_19, FUNC_13(VAR_15->status, VAR_29));
  VAR_19->m_pkthdr.rcvif = VAR_11;
  if (FUNC_6(VAR_15->vlan_my_qpn) &
      VAR_7) {
   VAR_19->m_pkthdr.ether_vtag = FUNC_5(VAR_15->sl_vid);
   VAR_19->m_flags |= VAR_10;
  }
  if (FUNC_10(VAR_11->if_capenable &
      (VAR_5 | VAR_6)) &&
      (VAR_15->status & FUNC_7(VAR_9)) &&
      (VAR_15->checksum == FUNC_7(0xffff))) {
   VAR_14->port_stats.rx_chksum_good++;
   VAR_19->m_pkthdr.csum_flags =
       VAR_1 | VAR_2 |
       VAR_0 | VAR_3;
   VAR_19->m_pkthdr.csum_data = FUNC_8(0xffff);
   FUNC_2(VAR_14->pstats.lro_misses);
  } else {
   VAR_19->m_pkthdr.csum_flags = 0;
   VAR_14->port_stats.rx_chksum_none++;
  }


  VAR_11->if_input(VAR_11, VAR_19);

next:
  ++VAR_25;
  VAR_22 = VAR_25 & VAR_26;
  VAR_15 = &VAR_21[FUNC_1(VAR_22, VAR_28)];
  if (++VAR_24 == VAR_13)
   goto out;
 }

out:



 FUNC_0(VAR_14->pstats.rx_coal_avg, VAR_24);
 VAR_20->cons_index = VAR_25;
 FUNC_11(VAR_20);
 FUNC_23();
 VAR_16->cons = VAR_20->cons_index;
 VAR_16->prod += VAR_24;
 FUNC_15(VAR_16);
 return VAR_24;

}
