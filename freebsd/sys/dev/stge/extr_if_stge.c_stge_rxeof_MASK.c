
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {int stge_rx_cons; scalar_t__ stge_rxcycles; scalar_t__ stge_rxlen; int stge_rx_ring_map; int stge_rx_ring_tag; struct mbuf* stge_rxhead; struct mbuf* stge_rxtail; struct stge_rxdesc* stge_rxdesc; } ;
struct TYPE_6__ {TYPE_1__* stge_rx_ring; } ;
struct stge_softc {scalar_t__ sc_if_framesize; TYPE_4__ sc_cdata; TYPE_2__ sc_rdata; struct ifnet* sc_ifp; } ;
struct stge_rxdesc {struct mbuf* rx_m; } ;
struct TYPE_7__ {scalar_t__ len; int csum_flags; int csum_data; int ether_vtag; struct ifnet* rcvif; } ;
struct mbuf {scalar_t__ m_len; int m_flags; TYPE_3__ m_pkthdr; struct mbuf* m_next; } ;
struct ifnet {int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_5__ {int rfd_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (struct stge_softc*) ;
 int FUNC_4 (struct stge_softc*) ;
 int FUNC_5 (struct stge_softc*) ;
 int VAR_29 ;
 int FUNC_6 (struct stge_softc*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct ifnet*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mbuf*) ;
 int FUNC_11 (struct stge_softc*,int) ;
 struct mbuf* FUNC_12 (struct stge_softc*,struct mbuf*) ;
 scalar_t__ FUNC_13 (struct stge_softc*,int) ;
 int FUNC_14 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_15(struct stge_softc *VAR_30)
{
 struct ifnet *VAR_31;
 struct stge_rxdesc *VAR_32;
 struct mbuf *VAR_33, *VAR_34;
 uint64_t VAR_35;
 uint32_t VAR_36;
 int VAR_37, VAR_38, VAR_39;

 FUNC_4(VAR_30);

 VAR_39 = 0;
 VAR_31 = VAR_30->sc_ifp;

 FUNC_7(VAR_30->sc_cdata.stge_rx_ring_tag,
     VAR_30->sc_cdata.stge_rx_ring_map, VAR_0);

 VAR_38 = 0;
 for (VAR_37 = VAR_30->sc_cdata.stge_rx_cons; VAR_38 < VAR_29;
     VAR_38++, VAR_37 = (VAR_37 + 1) % VAR_29) {
  VAR_35 = FUNC_9(VAR_30->sc_rdata.stge_rx_ring[VAR_37].rfd_status);
  VAR_36 = FUNC_1(VAR_35);
  if ((VAR_36 & VAR_18) == 0)
   break;







  VAR_38++;
  VAR_32 = &VAR_30->sc_cdata.stge_rxdesc[VAR_37];
  VAR_33 = VAR_32->rx_m;





  if ((VAR_36 & VAR_15) != 0 && (VAR_36 &
      (VAR_21 | VAR_23 |
      VAR_19 | VAR_20 |
      VAR_22)) != 0) {
   FUNC_11(VAR_30, VAR_37);
   if (VAR_30->sc_cdata.stge_rxhead != ((void*)0)) {
    FUNC_10(VAR_30->sc_cdata.stge_rxhead);
    FUNC_5(VAR_30);
   }
   continue;
  }



  if (FUNC_13(VAR_30, VAR_37) != 0) {
   FUNC_8(VAR_31, VAR_11, 1);
   FUNC_11(VAR_30, VAR_37);
   if (VAR_30->sc_cdata.stge_rxhead != ((void*)0)) {
    FUNC_10(VAR_30->sc_cdata.stge_rxhead);
    FUNC_5(VAR_30);
   }
   continue;
  }

  if ((VAR_36 & VAR_15) != 0)
   VAR_33->m_len = FUNC_0(VAR_36) -
       VAR_30->sc_cdata.stge_rxlen;
  VAR_30->sc_cdata.stge_rxlen += VAR_33->m_len;


  if (VAR_30->sc_cdata.stge_rxhead == ((void*)0)) {
   VAR_30->sc_cdata.stge_rxhead = VAR_33;
   VAR_30->sc_cdata.stge_rxtail = VAR_33;
  } else {
   VAR_33->m_flags &= ~VAR_13;
   VAR_30->sc_cdata.stge_rxtail->m_next = VAR_33;
   VAR_30->sc_cdata.stge_rxtail = VAR_33;
  }

  if ((VAR_36 & VAR_15) != 0) {
   VAR_34 = VAR_30->sc_cdata.stge_rxhead;
   VAR_34->m_pkthdr.rcvif = VAR_31;
   VAR_34->m_pkthdr.len = VAR_30->sc_cdata.stge_rxlen;

   if (VAR_34->m_pkthdr.len > VAR_30->sc_if_framesize) {
    FUNC_10(VAR_34);
    FUNC_5(VAR_30);
    continue;
   }




   if ((VAR_31->if_capenable & VAR_9) != 0) {
    if ((VAR_36 & VAR_16) != 0) {
     VAR_34->m_pkthdr.csum_flags |=
      VAR_4;
     if ((VAR_36 & VAR_17) == 0)
      VAR_34->m_pkthdr.csum_flags |=
          VAR_5;
    }
    if (((VAR_36 & VAR_24) != 0 &&
        (VAR_36 & VAR_25) == 0) ||
        ((VAR_36 & VAR_26) != 0 &&
        (VAR_36 & VAR_27) == 0)) {
     VAR_34->m_pkthdr.csum_flags |=
         (VAR_3 | VAR_6);
     VAR_34->m_pkthdr.csum_data = 0xffff;
    }
   }


   if (VAR_30->sc_if_framesize > (VAR_12 - VAR_7)) {
    if ((VAR_34 = FUNC_12(VAR_30, VAR_34)) == ((void*)0)) {
     FUNC_5(VAR_30);
     continue;
    }
   }


   if ((VAR_36 & VAR_28) != 0 &&
       (VAR_31->if_capenable & VAR_10) != 0) {
    VAR_34->m_pkthdr.ether_vtag = FUNC_2(VAR_35);
    VAR_34->m_flags |= VAR_14;
   }

   FUNC_6(VAR_30);

   (*VAR_31->if_input)(VAR_31, VAR_34);
   FUNC_3(VAR_30);
   VAR_39++;

   FUNC_5(VAR_30);
  }
 }

 if (VAR_38 > 0) {

  VAR_30->sc_cdata.stge_rx_cons = VAR_37;
  FUNC_7(VAR_30->sc_cdata.stge_rx_ring_tag,
      VAR_30->sc_cdata.stge_rx_ring_map,
      VAR_1 | VAR_2);
 }
 return (VAR_39);
}
