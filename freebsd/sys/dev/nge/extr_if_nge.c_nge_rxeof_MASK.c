
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int nge_rx_cons; int nge_rx_ring_map; int nge_rx_ring_tag; struct nge_rxdesc* nge_rxdesc; } ;
struct TYPE_4__ {struct nge_desc* nge_rx_ring; } ;
struct nge_softc {scalar_t__ rxcycles; TYPE_2__ nge_cdata; struct mbuf* nge_tail; struct mbuf* nge_head; TYPE_1__ nge_rdata; struct ifnet* nge_ifp; } ;
struct nge_rxdesc {struct mbuf* rx_m; } ;
struct nge_desc {int nge_extsts; int nge_cmdsts; } ;
struct TYPE_6__ {int len; int csum_flags; int csum_data; int ether_vtag; struct ifnet* rcvif; } ;
struct mbuf {int m_len; int m_flags; TYPE_3__ m_pkthdr; struct mbuf* m_next; } ;
struct ifnet {int if_drv_flags; int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;


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
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nge_softc*) ;
 int FUNC_2 (struct nge_softc*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_3 (struct nge_softc*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (struct nge_softc*,int) ;
 int FUNC_10 (struct mbuf*) ;
 scalar_t__ FUNC_11 (struct nge_softc*,int) ;
 int FUNC_12 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_13(struct nge_softc *VAR_32)
{
 struct mbuf *VAR_33;
 struct ifnet *VAR_34;
 struct nge_desc *VAR_35;
 struct nge_rxdesc *VAR_36;
 int VAR_37, VAR_38, VAR_39, VAR_40;
 uint32_t VAR_41, VAR_42;

 FUNC_2(VAR_32);

 VAR_34 = VAR_32->nge_ifp;
 VAR_37 = VAR_32->nge_cdata.nge_rx_cons;
 VAR_39 = 0;

 FUNC_5(VAR_32->nge_cdata.nge_rx_ring_tag,
     VAR_32->nge_cdata.nge_rx_ring_map,
     VAR_0 | VAR_1);

 for (VAR_38 = 0; VAR_38 < VAR_31 &&
     (VAR_34->if_drv_flags & VAR_15) != 0;
     FUNC_0(VAR_37, VAR_31)) {







  VAR_35 = &VAR_32->nge_rdata.nge_rx_ring[VAR_37];
  VAR_41 = FUNC_7(VAR_35->nge_cmdsts);
  VAR_42 = FUNC_7(VAR_35->nge_extsts);
  if ((VAR_41 & VAR_20) == 0)
   break;
  VAR_38++;
  VAR_36 = &VAR_32->nge_cdata.nge_rxdesc[VAR_37];
  VAR_33 = VAR_36->rx_m;
  VAR_40 = VAR_41 & VAR_18;

  if ((VAR_41 & VAR_19) != 0) {
   if (FUNC_11(VAR_32, VAR_37) != 0) {
    FUNC_6(VAR_34, VAR_14, 1);
    if (VAR_32->nge_head != ((void*)0)) {
     FUNC_8(VAR_32->nge_head);
     VAR_32->nge_head = VAR_32->nge_tail = ((void*)0);
    }
    FUNC_9(VAR_32, VAR_37);
    continue;
   }
   VAR_33->m_len = VAR_40;
   if (VAR_32->nge_head == ((void*)0)) {
    VAR_33->m_pkthdr.len = VAR_40;
    VAR_32->nge_head = VAR_32->nge_tail = VAR_33;
   } else {
    VAR_33->m_flags &= ~VAR_16;
    VAR_32->nge_head->m_pkthdr.len += VAR_40;
    VAR_32->nge_tail->m_next = VAR_33;
    VAR_32->nge_tail = VAR_33;
   }
   continue;
  }







  if ((VAR_41 & VAR_21) == 0) {
   if ((VAR_41 & VAR_30) &&
       VAR_40 >= (VAR_9 - VAR_8 - 4)) {




   } else {



    if (VAR_32->nge_head != ((void*)0)) {
     FUNC_8(VAR_32->nge_head);
     VAR_32->nge_head = VAR_32->nge_tail = ((void*)0);
    }
    FUNC_9(VAR_32, VAR_37);
    continue;
   }
  }



  if (FUNC_11(VAR_32, VAR_37) != 0) {
   FUNC_6(VAR_34, VAR_14, 1);
   if (VAR_32->nge_head != ((void*)0)) {
    FUNC_8(VAR_32->nge_head);
    VAR_32->nge_head = VAR_32->nge_tail = ((void*)0);
   }
   FUNC_9(VAR_32, VAR_37);
   continue;
  }


  if (VAR_32->nge_head != ((void*)0)) {
   VAR_33->m_len = VAR_40;
   VAR_33->m_flags &= ~VAR_16;
   VAR_32->nge_tail->m_next = VAR_33;
   VAR_33 = VAR_32->nge_head;
   VAR_33->m_pkthdr.len += VAR_40;
   VAR_32->nge_head = VAR_32->nge_tail = ((void*)0);
  } else
   VAR_33->m_pkthdr.len = VAR_33->m_len = VAR_40;
  FUNC_10(VAR_33);

  VAR_33->m_pkthdr.rcvif = VAR_34;
  FUNC_6(VAR_34, VAR_13, 1);

  if ((VAR_34->if_capenable & VAR_11) != 0) {

   if ((VAR_42 & VAR_23) != 0)
    VAR_33->m_pkthdr.csum_flags |= VAR_5;
   if ((VAR_42 & VAR_22) == 0)
    VAR_33->m_pkthdr.csum_flags |= VAR_6;
   if ((VAR_42 & VAR_25 &&
       !(VAR_42 & VAR_24)) ||
       (VAR_42 & VAR_27 &&
       !(VAR_42 & VAR_26))) {
    VAR_33->m_pkthdr.csum_flags |=
        VAR_4 | VAR_7;
    VAR_33->m_pkthdr.csum_data = 0xffff;
   }
  }





  if ((VAR_42 & VAR_28) != 0 &&
      (VAR_34->if_capenable & VAR_12) != 0) {
   VAR_33->m_pkthdr.ether_vtag =
       FUNC_4(VAR_42 & VAR_29);
   VAR_33->m_flags |= VAR_17;
  }
  FUNC_3(VAR_32);
  (*VAR_34->if_input)(VAR_34, VAR_33);
  FUNC_1(VAR_32);
  VAR_39++;
 }

 if (VAR_38 > 0) {
  VAR_32->nge_cdata.nge_rx_cons = VAR_37;
  FUNC_5(VAR_32->nge_cdata.nge_rx_ring_tag,
      VAR_32->nge_cdata.nge_rx_ring_map,
      VAR_2 | VAR_3);
 }
 return (VAR_39);
}
