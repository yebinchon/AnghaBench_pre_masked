
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct rx_rdesc {int vtag; int rdinfo; int status; } ;
struct TYPE_4__ {scalar_t__ len; int ether_vtag; struct ifnet* rcvif; } ;
struct mbuf {int m_len; int m_flags; TYPE_2__ m_pkthdr; struct mbuf* m_next; } ;
struct ifnet {int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_3__ {scalar_t__ alc_rxlen; struct mbuf* alc_rxtail; struct mbuf* alc_rxprev_tail; struct mbuf* alc_rxhead; struct alc_rxdesc* alc_rxdesc; } ;
struct alc_softc {int alc_buf_size; TYPE_1__ alc_cdata; struct ifnet* alc_ifp; } ;
struct alc_rxdesc {struct mbuf* rx_m; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct alc_softc*) ;
 int FUNC_2 (struct alc_softc*) ;
 int VAR_0 ;
 int FUNC_3 (struct alc_softc*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_13 ;
 int FUNC_7 (int) ;
 int VAR_14 ;
 struct mbuf* FUNC_8 (struct ifnet*,struct mbuf*) ;
 scalar_t__ FUNC_9 (struct alc_softc*,struct alc_rxdesc*) ;
 int FUNC_10 (struct ifnet*,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct mbuf*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_15(struct alc_softc *VAR_15, struct rx_rdesc *VAR_16)
{
 struct alc_rxdesc *VAR_17;
 struct ifnet *VAR_18;
 struct mbuf *VAR_19, *VAR_20;
 uint32_t VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26;

 VAR_18 = VAR_15->alc_ifp;
 VAR_22 = FUNC_11(VAR_16->status);
 VAR_21 = FUNC_11(VAR_16->rdinfo);
 VAR_26 = FUNC_6(VAR_21);
 VAR_25 = FUNC_5(VAR_21);

 VAR_15->alc_cdata.alc_rxlen = FUNC_4(VAR_22);
 if ((VAR_22 & (VAR_10 | VAR_8)) != 0) {
  VAR_22 |= VAR_13 | VAR_12;
  if ((VAR_22 & (VAR_7 | VAR_6 |
      VAR_11 | VAR_9)) != 0)
   return;
 }

 for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++,
     FUNC_0(VAR_26, VAR_0)) {
  VAR_17 = &VAR_15->alc_cdata.alc_rxdesc[VAR_26];
  VAR_19 = VAR_17->rx_m;

  if (FUNC_9(VAR_15, VAR_17) != 0) {
   FUNC_10(VAR_18, VAR_3, 1);

   if (VAR_15->alc_cdata.alc_rxhead != ((void*)0))
    FUNC_12(VAR_15->alc_cdata.alc_rxhead);
   break;
  }






  VAR_19->m_len = VAR_15->alc_buf_size;


  if (VAR_15->alc_cdata.alc_rxhead == ((void*)0)) {
   VAR_15->alc_cdata.alc_rxhead = VAR_19;
   VAR_15->alc_cdata.alc_rxtail = VAR_19;
  } else {
   VAR_19->m_flags &= ~VAR_4;
   VAR_15->alc_cdata.alc_rxprev_tail =
       VAR_15->alc_cdata.alc_rxtail;
   VAR_15->alc_cdata.alc_rxtail->m_next = VAR_19;
   VAR_15->alc_cdata.alc_rxtail = VAR_19;
  }

  if (VAR_24 == VAR_25 - 1) {

   VAR_20 = VAR_15->alc_cdata.alc_rxhead;
   VAR_20->m_flags |= VAR_4;




   VAR_20->m_pkthdr.len =
       VAR_15->alc_cdata.alc_rxlen - VAR_1;
   if (VAR_25 > 1) {

    VAR_19->m_len = VAR_15->alc_cdata.alc_rxlen -
        (VAR_25 - 1) * VAR_15->alc_buf_size;

    if (VAR_19->m_len <= VAR_1) {
     VAR_15->alc_cdata.alc_rxtail =
         VAR_15->alc_cdata.alc_rxprev_tail;
     VAR_15->alc_cdata.alc_rxtail->m_len -=
         (VAR_1 - VAR_19->m_len);
     VAR_15->alc_cdata.alc_rxtail->m_next = ((void*)0);
     FUNC_12(VAR_19);
    } else {
     VAR_19->m_len -= VAR_1;
    }
   } else
    VAR_20->m_len = VAR_20->m_pkthdr.len;
   VAR_20->m_pkthdr.rcvif = VAR_18;




   if ((VAR_18->if_capenable & VAR_2) != 0 &&
       (VAR_22 & VAR_14) != 0) {
    VAR_23 = FUNC_7(FUNC_11(VAR_16->vtag));
    VAR_20->m_pkthdr.ether_vtag = FUNC_13(VAR_23);
    VAR_20->m_flags |= VAR_5;
   }

   VAR_20 = FUNC_8(VAR_18, VAR_20);
   if (VAR_20 != ((void*)0))

   {

   FUNC_3(VAR_15);
   (*VAR_18->if_input)(VAR_18, VAR_20);
   FUNC_1(VAR_15);
   }
  }
 }

 FUNC_2(VAR_15);
}
