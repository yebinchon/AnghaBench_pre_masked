
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int csum_flags; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct TYPE_3__ {int bad_csum; } ;
struct ena_ring {TYPE_1__ rx_stats; } ;
struct ena_com_rx_ctx {scalar_t__ l3_proto; scalar_t__ l4_proto; scalar_t__ l4_csum_err; scalar_t__ l3_csum_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void
FUNC_3(struct ena_ring *VAR_6, struct ena_com_rx_ctx *VAR_7,
    struct mbuf *VAR_8)
{


 if (FUNC_2((VAR_7->l3_proto == VAR_3) &&
     VAR_7->l3_csum_err)) {

  VAR_8->m_pkthdr.csum_flags = 0;
  FUNC_0(VAR_6->rx_stats.bad_csum, 1);
  FUNC_1(VAR_2, "RX IPv4 header checksum error\n");
  return;
 }


 if ((VAR_7->l4_proto == VAR_4) ||
     (VAR_7->l4_proto == VAR_5)) {
  if (VAR_7->l4_csum_err) {

   VAR_8->m_pkthdr.csum_flags = 0;
   FUNC_0(VAR_6->rx_stats.bad_csum, 1);
   FUNC_1(VAR_2, "RX L4 checksum error\n");
  } else {
   VAR_8->m_pkthdr.csum_flags = VAR_0;
   VAR_8->m_pkthdr.csum_flags |= VAR_1;
  }
 }
}
