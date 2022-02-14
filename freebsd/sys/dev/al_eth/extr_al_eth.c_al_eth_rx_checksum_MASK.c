
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int csum_flags; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct al_eth_pkt {scalar_t__ l3_proto_idx; int flags; scalar_t__ l4_proto_idx; } ;
struct al_eth_adapter {int dev; TYPE_1__* netdev; } ;
struct TYPE_3__ {int if_capenable; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline void
FUNC_4(struct al_eth_adapter *VAR_10,
    struct al_eth_pkt *VAR_11, struct mbuf *VAR_12)
{


 if (FUNC_3((VAR_10->netdev->if_capenable & VAR_8) &&
     (VAR_11->l3_proto_idx == VAR_0) &&
     (VAR_11->flags & VAR_4))) {
  FUNC_0(VAR_10->dev,"rx ipv4 header checksum error\n");
  return;
 }


 if (FUNC_3((VAR_10->netdev->if_capenable & VAR_9) &&
     (VAR_11->l3_proto_idx == VAR_1) &&
     (VAR_11->flags & VAR_4))) {
  FUNC_0(VAR_10->dev,"rx ipv6 header checksum error\n");
  return;
 }


 if (FUNC_2((VAR_11->l4_proto_idx == VAR_2) ||
    (VAR_11->l4_proto_idx == VAR_3))) {
  if (FUNC_3(VAR_11->flags & VAR_5)) {
   FUNC_1(VAR_10->dev, "rx L4 checksum error\n");


   VAR_12->m_pkthdr.csum_flags = 0;
  } else {
   FUNC_1(VAR_10->dev, "rx checksum correct\n");


   VAR_12->m_pkthdr.csum_flags = VAR_6;
   VAR_12->m_pkthdr.csum_flags |= VAR_7;
  }
 }
}
