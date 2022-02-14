
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int rx_bytes; int rx_frags; int rx_ucast_pkts; int rx_pkts; } ;
struct TYPE_7__ {int frag_size; } ;
struct oce_rq {TYPE_3__ rx_stats; scalar_t__ queue_index; TYPE_1__ cfg; int parent; } ;
struct oce_common_cqe_info {int pkt_size; int vtag; int num_frags; scalar_t__ qnq; scalar_t__ vtp; int ipv6_frame; int ip_cksum_pass; int l4_cksum_pass; } ;
struct nic_hwlro_singleton_cqe {int pkt_size; int vlan_tag; scalar_t__ qnq; scalar_t__ vtp; int ipv6_frame; int ip_cksum_pass; int l4_cksum_pass; } ;
struct nic_hwlro_cqe_part2 {int coalesced_size; int vlan_tag; scalar_t__ vtp; int ipv6_frame; int ip_cksum_pass; int l4_cksum_pass; } ;
struct nic_hwlro_cqe_part1 {scalar_t__ qnq; } ;
struct TYPE_8__ {int ether_vtag; scalar_t__ flowid; TYPE_5__* rcvif; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;
struct TYPE_11__ {int (* if_input ) (TYPE_5__*,struct mbuf*) ;} ;
struct TYPE_10__ {int function_mode; int pvid; TYPE_5__* ifp; } ;
typedef TYPE_4__* POCE_SOFTC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mbuf*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 int FUNC_3 (struct mbuf*,struct nic_hwlro_cqe_part1*,struct nic_hwlro_cqe_part2*) ;
 int FUNC_4 (struct oce_rq*,struct oce_common_cqe_info*,struct mbuf**) ;
 int FUNC_5 (TYPE_5__*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_6(struct oce_rq *VAR_5, struct nic_hwlro_singleton_cqe *VAR_6, struct nic_hwlro_cqe_part2 *VAR_7)
{
        POCE_SOFTC VAR_8 = (POCE_SOFTC) VAR_5->parent;
        struct nic_hwlro_cqe_part1 *VAR_9 = ((void*)0);
        struct mbuf *VAR_10 = ((void*)0);
 struct oce_common_cqe_info VAR_11;


        if(VAR_7 == ((void*)0)) {
                VAR_11.pkt_size = VAR_6->pkt_size;
                VAR_11.vtag = VAR_6->vlan_tag;
                VAR_11.l4_cksum_pass = VAR_6->l4_cksum_pass;
                VAR_11.ip_cksum_pass = VAR_6->ip_cksum_pass;
                VAR_11.ipv6_frame = VAR_6->ipv6_frame;
                VAR_11.vtp = VAR_6->vtp;
                VAR_11.qnq = VAR_6->qnq;
        }else {
                VAR_9 = (struct nic_hwlro_cqe_part1 *)VAR_6;
                VAR_11.pkt_size = VAR_7->coalesced_size;
                VAR_11.vtag = VAR_7->vlan_tag;
                VAR_11.l4_cksum_pass = VAR_7->l4_cksum_pass;
                VAR_11.ip_cksum_pass = VAR_7->ip_cksum_pass;
                VAR_11.ipv6_frame = VAR_7->ipv6_frame;
                VAR_11.vtp = VAR_7->vtp;
                VAR_11.qnq = VAR_9->qnq;
        }

 VAR_11.vtag = FUNC_0(VAR_11.vtag);

        VAR_11.num_frags = VAR_11.pkt_size / VAR_5->cfg.frag_size;
        if(VAR_11.pkt_size % VAR_5->cfg.frag_size)
                VAR_11.num_frags++;

 FUNC_4(VAR_5, &VAR_11, &VAR_10);

 if (VAR_10) {
  if(VAR_7) {



   FUNC_3(VAR_10, VAR_9, VAR_7);
  }

  VAR_10->m_pkthdr.rcvif = VAR_8->ifp;
  if (VAR_11.vtp) {
   if (VAR_8->function_mode & VAR_0) {

    if (VAR_11.qnq) {
     VAR_10->m_pkthdr.ether_vtag = VAR_11.vtag;
     VAR_10->m_flags |= VAR_3;
    }
   } else if (VAR_8->pvid != (VAR_11.vtag & VAR_4)) {




    VAR_10->m_pkthdr.ether_vtag = VAR_11.vtag;
    VAR_10->m_flags |= VAR_3;
   }
  }
  FUNC_2(VAR_8->ifp, VAR_1, 1);

  (*VAR_8->ifp->if_input) (VAR_8->ifp, VAR_10);


  VAR_5->rx_stats.rx_pkts++;
  VAR_5->rx_stats.rx_bytes += VAR_11.pkt_size;
  VAR_5->rx_stats.rx_frags += VAR_11.num_frags;
  VAR_5->rx_stats.rx_ucast_pkts++;
 }
        return;
}
