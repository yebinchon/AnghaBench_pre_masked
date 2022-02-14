
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; struct ifnet* rcvif; } ;
struct mbuf {scalar_t__ m_len; TYPE_2__ m_pkthdr; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_6__ {int arge_rx_cons; int arge_rx_ring_map; int arge_rx_ring_tag; int arge_rx_tag; struct arge_rxdesc* arge_rxdesc; } ;
struct TYPE_4__ {struct arge_desc* arge_rx_ring; } ;
struct arge_softc {int arge_hw_flags; TYPE_3__ arge_cdata; int arge_dev; TYPE_1__ arge_rdata; struct ifnet* arge_ifp; } ;
struct arge_rxdesc {struct mbuf* rx_m; int rx_dmamap; } ;
struct arge_desc {int packet_ctrl; scalar_t__ packet_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct arge_softc*) ;
 int FUNC_3 (struct arge_softc*) ;
 int VAR_3 ;
 int FUNC_4 (struct arge_softc*) ;
 int FUNC_5 (struct arge_softc*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct mbuf*) ;
 scalar_t__ FUNC_7 (struct arge_softc*,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct ifnet*,int ,int) ;
 int FUNC_11 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_12(struct arge_softc *VAR_10)
{
 struct arge_rxdesc *VAR_11;
 struct ifnet *VAR_12 = VAR_10->arge_ifp;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 struct arge_desc *VAR_17;
 struct mbuf *VAR_18;
 int VAR_19 = 0;

 FUNC_3(VAR_10);

 VAR_13 = VAR_10->arge_cdata.arge_rx_cons;

 FUNC_8(VAR_10->arge_cdata.arge_rx_ring_tag,
     VAR_10->arge_cdata.arge_rx_ring_map,
     VAR_4 | VAR_5);

 for (VAR_14 = 0; VAR_14 < VAR_3;
     FUNC_1(VAR_13, VAR_3)) {
  VAR_17 = &VAR_10->arge_rdata.arge_rx_ring[VAR_13];
  VAR_11 = &VAR_10->arge_cdata.arge_rxdesc[VAR_13];
  VAR_18 = VAR_11->rx_m;

  if ((VAR_17->packet_ctrl & VAR_1) != 0)
         break;

  FUNC_5(VAR_10, VAR_0, VAR_7);

  VAR_14++;

  VAR_15 = FUNC_0(VAR_17->packet_ctrl);
  FUNC_8(VAR_10->arge_cdata.arge_rx_tag, VAR_11->rx_dmamap,
      VAR_4);
  VAR_18 = VAR_11->rx_m;





  if (VAR_10->arge_hw_flags & VAR_2)
   FUNC_6(VAR_18);

  VAR_18->m_pkthdr.rcvif = VAR_12;

  VAR_18->m_pkthdr.len = VAR_18->m_len = VAR_15 - VAR_8;
  FUNC_10(VAR_12, VAR_9, 1);
  VAR_19++;

  FUNC_4(VAR_10);
  (*VAR_12->if_input)(VAR_12, VAR_18);
  FUNC_2(VAR_10);
  VAR_17->packet_addr = 0;
 }

 if (VAR_14 > 0) {

  VAR_16 = VAR_10->arge_cdata.arge_rx_cons;
  for (; VAR_14 > 0 ; VAR_14--) {
   if (FUNC_7(VAR_10, VAR_16) != 0) {
    FUNC_9(VAR_10->arge_dev,
        "Failed to allocate buffer\n");
    break;
   }
   FUNC_1(VAR_16, VAR_3);
  }

  FUNC_8(VAR_10->arge_cdata.arge_rx_ring_tag,
      VAR_10->arge_cdata.arge_rx_ring_map,
      VAR_6);

  VAR_10->arge_cdata.arge_rx_cons = VAR_13;
 }

 return (VAR_19);
}
