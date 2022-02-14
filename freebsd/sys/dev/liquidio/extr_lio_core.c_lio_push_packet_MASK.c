
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int priority; int vlan; int csum_verified; scalar_t__ has_hwtstamp; scalar_t__ has_hash; } ;
union octeon_rh {TYPE_1__ r_dh; } ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int flowid; int ether_vtag; int csum_flags; int len; struct ifnet* rcvif; int csum_data; } ;
struct mbuf {TYPE_2__ m_pkthdr; int m_flags; scalar_t__ m_data; } ;
struct TYPE_7__ {int rx_dropped; int rx_pkts_received; int rx_bytes_received; } ;
struct TYPE_8__ {scalar_t__ lro_cnt; } ;
struct lio_droq {int q_no; TYPE_3__ stats; TYPE_4__ lro; } ;
struct lio {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;






 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct mbuf*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ifnet*) ;
 struct lio* FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*,struct mbuf*) ;
 scalar_t__ VAR_22 ;
 int FUNC_6 (struct lio*,int ) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbuf*,int) ;
 scalar_t__ FUNC_9 (TYPE_4__*,struct mbuf*,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_23, uint32_t VAR_24, union octeon_rh *VAR_25, void *VAR_26,
  void *VAR_27)
{
 struct mbuf *VAR_28 = VAR_23;
 struct ifnet *VAR_29 = VAR_27;
 struct lio_droq *VAR_30 = VAR_26;

 if (VAR_29 != ((void*)0)) {
  struct lio *VAR_31 = FUNC_4(VAR_29);


  if (!FUNC_6(VAR_31, VAR_9)) {
   FUNC_7(VAR_28);
   VAR_30->stats.rx_dropped++;
   return;
  }

  if (VAR_25->r_dh.has_hash) {
   uint32_t VAR_32, VAR_33;

   if (VAR_25->r_dh.has_hwtstamp) {
    VAR_33 = FUNC_1(*(uint32_t *)
        (((uint8_t *)VAR_28->m_data) +
         ((VAR_25->r_dh.len - 2) *
          VAR_0)));
    VAR_32 =
        FUNC_1(*(((uint32_t *)
            (((uint8_t *)VAR_28->m_data) +
      ((VAR_25->r_dh.len - 2) *
       VAR_0))) + 1));
   } else {
    VAR_33 = FUNC_1(*(uint32_t *)
        (((uint8_t *)VAR_28->m_data) +
         ((VAR_25->r_dh.len - 1) *
          VAR_0)));
    VAR_32 =
        FUNC_1(*(((uint32_t *)
            (((uint8_t *)VAR_28->m_data) +
      ((VAR_25->r_dh.len - 1) *
       VAR_0))) + 1));
   }

   VAR_28->m_pkthdr.flowid = VAR_33;

   switch (VAR_32) {
   case 133:
    FUNC_0(VAR_28, VAR_14);
    break;
   case 130:
    FUNC_0(VAR_28, VAR_17);
    break;
   case 132:
    FUNC_0(VAR_28, VAR_15);
    break;
   case 129:
    FUNC_0(VAR_28, VAR_18);
    break;
   case 131:
    FUNC_0(VAR_28, VAR_16);
    break;
   case 128:
    FUNC_0(VAR_28,
            VAR_19);
    break;
   default:
    FUNC_0(VAR_28, VAR_13);
   }

  } else {




   FUNC_0(VAR_28, VAR_12);
   VAR_28->m_pkthdr.flowid = VAR_30->q_no;
  }

  FUNC_8(VAR_28, VAR_25->r_dh.len * 8);
  VAR_24 -= VAR_25->r_dh.len * 8;
  VAR_28->m_flags |= VAR_20;

  if ((FUNC_3(VAR_29) & VAR_8) &&
      (VAR_25->r_dh.priority || VAR_25->r_dh.vlan)) {
   uint16_t VAR_34 = VAR_25->r_dh.priority;
   uint16_t VAR_35 = VAR_25->r_dh.vlan;
   uint16_t VAR_36;

   VAR_36 = VAR_34 << 13 | VAR_35;
   VAR_28->m_pkthdr.ether_vtag = VAR_36;
   VAR_28->m_flags |= VAR_21;
  }

  if (VAR_25->r_dh.csum_verified & VAR_10)
   VAR_28->m_pkthdr.csum_flags |= (VAR_2 |
            VAR_3);

  if (VAR_25->r_dh.csum_verified & VAR_11) {
   VAR_28->m_pkthdr.csum_flags |= (VAR_4 |
            VAR_5);
   VAR_28->m_pkthdr.csum_flags |= (VAR_1 |
            VAR_6);
   VAR_28->m_pkthdr.csum_data = FUNC_2(0xffff);
  }

  VAR_28->m_pkthdr.rcvif = VAR_29;
  VAR_28->m_pkthdr.len = VAR_24;

  if ((VAR_22 == 0) &&
      (FUNC_3(VAR_29) & VAR_7) &&
      (VAR_28->m_pkthdr.csum_flags &
       (VAR_3 | VAR_5 | VAR_1 |
        VAR_6)) == (VAR_3 | VAR_5 |
         VAR_1 |
         VAR_6)) {
   if (VAR_30->lro.lro_cnt) {
    if (FUNC_9(&VAR_30->lro, VAR_28, 0) == 0) {
     VAR_30->stats.rx_bytes_received += VAR_24;
     VAR_30->stats.rx_pkts_received++;
     return;
    }
   }
  }

  FUNC_5(VAR_29, VAR_28);

  VAR_30->stats.rx_bytes_received += VAR_24;
  VAR_30->stats.rx_pkts_received++;

 } else {
  FUNC_7(VAR_28);
  VAR_30->stats.rx_dropped++;
 }
}
