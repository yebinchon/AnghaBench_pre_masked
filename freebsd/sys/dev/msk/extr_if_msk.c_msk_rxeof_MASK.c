
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct msk_rxdesc {struct mbuf* rx_m; } ;
struct TYPE_4__ {int msk_rx_cons; int msk_rx_prod; struct msk_rxdesc* msk_rxdesc; } ;
struct msk_if_softc {int msk_flags; int msk_framesize; TYPE_2__ msk_cdata; int msk_vtag; struct ifnet* msk_ifp; } ;
struct TYPE_3__ {int len; int ether_vtag; struct ifnet* rcvif; } ;
struct mbuf {int m_len; int m_flags; TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct msk_if_softc*) ;
 int FUNC_1 (struct msk_if_softc*) ;
 int FUNC_2 (struct msk_if_softc*) ;
 int VAR_13 ;
 int FUNC_3 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct msk_if_softc*,int) ;
 int FUNC_6 (struct mbuf*) ;
 scalar_t__ FUNC_7 (struct msk_if_softc*,int) ;
 int FUNC_8 (struct msk_if_softc*,int,struct mbuf*) ;
 int FUNC_9 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_10(struct msk_if_softc *VAR_16, uint32_t VAR_17, uint32_t VAR_18,
    int VAR_19)
{
 struct mbuf *VAR_20;
 struct ifnet *VAR_21;
 struct msk_rxdesc *VAR_22;
 int VAR_23, VAR_24;

 VAR_21 = VAR_16->msk_ifp;

 FUNC_1(VAR_16);

 VAR_23 = VAR_16->msk_cdata.msk_rx_cons;
 do {
  VAR_24 = VAR_17 >> 16;
  if ((VAR_17 & VAR_5) != 0 &&
      (VAR_21->if_capenable & VAR_7) != 0)
   VAR_24 -= VAR_1;
  if ((VAR_16->msk_flags & VAR_11) != 0) {





   if (VAR_19 > VAR_13 || VAR_19 < VAR_0) {
    FUNC_4(VAR_21, VAR_8, 1);
    FUNC_5(VAR_16, VAR_23);
    break;
   }
  } else if (VAR_19 > VAR_16->msk_framesize ||
      ((VAR_17 & VAR_2) != 0) ||
      ((VAR_17 & VAR_4) == 0) || (VAR_24 != VAR_19)) {

   if ((VAR_17 & VAR_3) == 0)
    FUNC_4(VAR_21, VAR_8, 1);
   FUNC_5(VAR_16, VAR_23);
   break;
  }




  VAR_22 = &VAR_16->msk_cdata.msk_rxdesc[VAR_23];

  VAR_20 = VAR_22->rx_m;
  if (FUNC_7(VAR_16, VAR_23) != 0) {
   FUNC_4(VAR_21, VAR_10, 1);

   FUNC_5(VAR_16, VAR_23);
   break;
  }
  VAR_20->m_pkthdr.rcvif = VAR_21;
  VAR_20->m_pkthdr.len = VAR_20->m_len = VAR_19;

  if ((VAR_16->msk_flags & VAR_12) != 0)
   FUNC_6(VAR_20);

  FUNC_4(VAR_21, VAR_9, 1);
  if ((VAR_21->if_capenable & VAR_6) != 0)
   FUNC_8(VAR_16, VAR_18, VAR_20);

  if ((VAR_17 & VAR_5) != 0 &&
      (VAR_21->if_capenable & VAR_7) != 0) {
   VAR_20->m_pkthdr.ether_vtag = VAR_16->msk_vtag;
   VAR_20->m_flags |= VAR_15;
  }
  FUNC_2(VAR_16);
  (*VAR_21->if_input)(VAR_21, VAR_20);
  FUNC_0(VAR_16);
 } while (0);

 FUNC_3(VAR_16->msk_cdata.msk_rx_cons, VAR_14);
 FUNC_3(VAR_16->msk_cdata.msk_rx_prod, VAR_14);
}
