
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vtxs_tso; } ;
struct vtnet_txq {TYPE_2__ vtntx_stats; struct vtnet_softc* vtntx_sc; } ;
struct vtnet_softc {int vtnet_flags; int vtnet_ifp; } ;
struct virtio_net_hdr {int hdr_len; int gso_type; int gso_size; } ;
struct timeval {int dummy; } ;
struct tcphdr {int th_off; int th_flags; } ;
struct TYPE_3__ {int tso_segsz; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; scalar_t__ m_data; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mbuf*,int,int,int ) ;
 scalar_t__ FUNC_3 (struct timeval*,int*,int) ;

__attribute__((used)) static int
FUNC_4(struct vtnet_txq *VAR_7, struct mbuf *VAR_8, int VAR_9,
    int VAR_10, struct virtio_net_hdr *VAR_11)
{
 static struct timeval VAR_12;
 static int VAR_13;
 struct vtnet_softc *VAR_14;
 struct tcphdr *VAR_15, VAR_16;

 VAR_14 = VAR_7->vtntx_sc;

 if (FUNC_0(VAR_8->m_len < VAR_10 + sizeof(struct tcphdr))) {
  FUNC_2(VAR_8, VAR_10, sizeof(struct tcphdr), (caddr_t) &VAR_16);
  VAR_15 = &VAR_16;
 } else
  VAR_15 = (struct tcphdr *)(VAR_8->m_data + VAR_10);

 VAR_11->hdr_len = VAR_10 + (VAR_15->th_off << 2);
 VAR_11->gso_size = VAR_8->m_pkthdr.tso_segsz;
 VAR_11->gso_type = VAR_9 == VAR_1 ? VAR_4 :
     VAR_5;

 if (VAR_15->th_flags & VAR_2) {





  if ((VAR_14->vtnet_flags & VAR_6) == 0) {
   if (FUNC_3(&VAR_12, &VAR_13, 1))
    FUNC_1(VAR_14->vtnet_ifp,
        "TSO with ECN not negotiated with host\n");
   return (VAR_0);
  }
  VAR_11->gso_type |= VAR_3;
 }

 VAR_7->vtntx_stats.vtxs_tso++;

 return (0);
}
