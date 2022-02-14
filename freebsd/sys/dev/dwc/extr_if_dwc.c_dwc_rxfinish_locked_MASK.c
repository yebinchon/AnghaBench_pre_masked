
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int len; struct ifnet* rcvif; } ;
struct mbuf {int m_len; TYPE_3__ m_pkthdr; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct dwc_softc {int rx_idx; struct ifnet* ifp; TYPE_2__* rxbuf_map; int rxbuf_tag; TYPE_1__* rxdesc_ring; } ;
struct TYPE_5__ {struct mbuf* mbuf; int map; } ;
struct TYPE_4__ {int tdes0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dwc_softc*) ;
 int FUNC_1 (struct dwc_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct mbuf* FUNC_4 (struct dwc_softc*) ;
 int FUNC_5 (struct dwc_softc*,int,struct mbuf*) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (struct mbuf*,int ) ;
 int FUNC_8 (struct dwc_softc*,int) ;
 int FUNC_9 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_10(struct dwc_softc *VAR_7)
{
 struct ifnet *VAR_8;
 struct mbuf *VAR_9;
 struct mbuf *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14;

 VAR_8 = VAR_7->ifp;

 for (;;) {
  VAR_12 = VAR_7->rx_idx;

  VAR_14 = VAR_7->rxdesc_ring[VAR_12].tdes0;
  if ((VAR_14 & VAR_3) != 0)
   break;

  FUNC_2(VAR_7->rxbuf_tag, VAR_7->rxbuf_map[VAR_12].map,
      VAR_0);
  FUNC_3(VAR_7->rxbuf_tag, VAR_7->rxbuf_map[VAR_12].map);

  VAR_13 = (VAR_14 >> VAR_2) & VAR_1;
  if (VAR_13 != 0) {
   VAR_10 = VAR_7->rxbuf_map[VAR_12].mbuf;
   VAR_10->m_pkthdr.rcvif = VAR_8;
   VAR_10->m_pkthdr.len = VAR_13;
   VAR_10->m_len = VAR_13;
   FUNC_6(VAR_8, VAR_5, 1);


   FUNC_7(VAR_10, -VAR_4);

   FUNC_1(VAR_7);
   (*VAR_8->if_input)(VAR_8, VAR_10);
   FUNC_0(VAR_7);
  } else {

  }

  if ((VAR_9 = FUNC_4(VAR_7)) != ((void*)0)) {
   if ((VAR_11 = FUNC_5(VAR_7, VAR_12, VAR_9)) != 0) {




   }
  } else
   FUNC_6(VAR_7->ifp, VAR_6, 1);

  VAR_7->rx_idx = FUNC_8(VAR_7, VAR_7->rx_idx);
 }
}
