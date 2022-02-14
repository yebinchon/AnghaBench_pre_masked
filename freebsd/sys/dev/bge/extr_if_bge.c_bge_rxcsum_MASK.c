
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csum_flags; scalar_t__ len; int csum_data; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct bge_softc {int dummy; } ;
struct bge_rx_bd {int bge_flags; int bge_error_flag; int bge_ip_csum; int bge_tcp_udp_csum; } ;


 scalar_t__ FUNC_0 (struct bge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_1(struct bge_softc *VAR_9, struct bge_rx_bd *VAR_10, struct mbuf *VAR_11)
{

 if (FUNC_0(VAR_9)) {
  if ((VAR_10->bge_flags & VAR_0) == 0) {
   if (VAR_10->bge_flags & VAR_1) {
    VAR_11->m_pkthdr.csum_flags |= VAR_5;
    if ((VAR_10->bge_error_flag &
        VAR_3) == 0)
     VAR_11->m_pkthdr.csum_flags |= VAR_6;
   }
   if (VAR_10->bge_flags & VAR_2) {
    VAR_11->m_pkthdr.csum_data =
        VAR_10->bge_tcp_udp_csum;
    VAR_11->m_pkthdr.csum_flags |= VAR_4 |
        VAR_7;
   }
  }
 } else {
  if (VAR_10->bge_flags & VAR_1) {
   VAR_11->m_pkthdr.csum_flags |= VAR_5;
   if ((VAR_10->bge_ip_csum ^ 0xFFFF) == 0)
    VAR_11->m_pkthdr.csum_flags |= VAR_6;
  }
  if (VAR_10->bge_flags & VAR_2 &&
      VAR_11->m_pkthdr.len >= VAR_8) {
   VAR_11->m_pkthdr.csum_data =
       VAR_10->bge_tcp_udp_csum;
   VAR_11->m_pkthdr.csum_flags |= VAR_4 |
       VAR_7;
  }
 }
}
