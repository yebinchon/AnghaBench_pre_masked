
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct msk_rxdesc {struct mbuf* rx_m; } ;
struct TYPE_4__ {int msk_rx_cons; int msk_rx_prod; struct msk_rxdesc* msk_jumbo_rxdesc; } ;
struct msk_if_softc {int msk_framesize; int msk_flags; TYPE_2__ msk_cdata; int msk_vtag; struct ifnet* msk_ifp; } ;
struct TYPE_3__ {int len; int ether_vtag; struct ifnet* rcvif; } ;
struct mbuf {int m_len; int m_flags; TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (struct msk_if_softc*) ;
 int FUNC_1 (struct msk_if_softc*) ;
 int FUNC_2 (struct msk_if_softc*) ;
 int VAR_11 ;
 int FUNC_3 (int,int) ;
 int VAR_12 ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct msk_if_softc*,int) ;
 int FUNC_6 (struct mbuf*) ;
 scalar_t__ FUNC_7 (struct msk_if_softc*,int) ;
 int FUNC_8 (struct msk_if_softc*,int,struct mbuf*) ;
 int FUNC_9 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_10(struct msk_if_softc *VAR_13, uint32_t VAR_14, uint32_t VAR_15,
    int VAR_16)
{
 struct mbuf *VAR_17;
 struct ifnet *VAR_18;
 struct msk_rxdesc *VAR_19;
 int VAR_20, VAR_21;

 VAR_18 = VAR_13->msk_ifp;

 FUNC_1(VAR_13);

 VAR_20 = VAR_13->msk_cdata.msk_rx_cons;
 do {
  VAR_21 = VAR_14 >> 16;
  if ((VAR_14 & VAR_4) != 0 &&
      (VAR_18->if_capenable & VAR_6) != 0)
   VAR_21 -= VAR_0;
  if (VAR_16 > VAR_13->msk_framesize ||
      ((VAR_14 & VAR_1) != 0) ||
      ((VAR_14 & VAR_3) == 0) || (VAR_21 != VAR_16)) {

   if ((VAR_14 & VAR_2) == 0)
    FUNC_4(VAR_18, VAR_7, 1);
   FUNC_5(VAR_13, VAR_20);
   break;
  }




  VAR_19 = &VAR_13->msk_cdata.msk_jumbo_rxdesc[VAR_20];

  VAR_17 = VAR_19->rx_m;
  if (FUNC_7(VAR_13, VAR_20) != 0) {
   FUNC_4(VAR_18, VAR_9, 1);

   FUNC_5(VAR_13, VAR_20);
   break;
  }
  VAR_17->m_pkthdr.rcvif = VAR_18;
  VAR_17->m_pkthdr.len = VAR_17->m_len = VAR_16;

  if ((VAR_13->msk_flags & VAR_10) != 0)
   FUNC_6(VAR_17);

  FUNC_4(VAR_18, VAR_8, 1);
  if ((VAR_18->if_capenable & VAR_5) != 0)
   FUNC_8(VAR_13, VAR_15, VAR_17);

  if ((VAR_14 & VAR_4) != 0 &&
      (VAR_18->if_capenable & VAR_6) != 0) {
   VAR_17->m_pkthdr.ether_vtag = VAR_13->msk_vtag;
   VAR_17->m_flags |= VAR_12;
  }
  FUNC_2(VAR_13);
  (*VAR_18->if_input)(VAR_18, VAR_17);
  FUNC_0(VAR_13);
 } while (0);

 FUNC_3(VAR_13->msk_cdata.msk_rx_cons, VAR_11);
 FUNC_3(VAR_13->msk_cdata.msk_rx_prod, VAR_11);
}
