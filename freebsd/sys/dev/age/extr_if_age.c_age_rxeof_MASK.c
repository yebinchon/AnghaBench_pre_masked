
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct rx_rdesc {int vtags; int len; int index; int flags; } ;
struct TYPE_4__ {scalar_t__ len; int csum_flags; int csum_data; int ether_vtag; struct ifnet* rcvif; } ;
struct mbuf {int m_len; int m_flags; TYPE_2__ m_pkthdr; struct mbuf* m_next; } ;
struct ifnet {int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_3__ {scalar_t__ age_rxlen; struct mbuf* age_rxtail; struct mbuf* age_rxprev_tail; struct mbuf* age_rxhead; struct age_rxdesc* age_rxdesc; } ;
struct age_softc {TYPE_1__ age_cdata; struct ifnet* age_ifp; } ;
struct age_rxdesc {struct mbuf* rx_m; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct age_softc*) ;
 int FUNC_2 (struct age_softc*) ;
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
 int FUNC_3 (struct age_softc*) ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_15 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct age_softc*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct mbuf* FUNC_10 (struct ifnet*,struct mbuf*) ;
 scalar_t__ FUNC_11 (struct age_softc*,struct age_rxdesc*) ;
 int FUNC_12 (struct ifnet*,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct mbuf*) ;
 int FUNC_15 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_16(struct age_softc *VAR_26, struct rx_rdesc *VAR_27)
{
 struct age_rxdesc *VAR_28;
 struct ifnet *VAR_29;
 struct mbuf *VAR_30, *VAR_31;
 uint32_t VAR_32, VAR_33, VAR_34;
 int VAR_35, VAR_36;
 int VAR_37;

 FUNC_2(VAR_26);

 VAR_29 = VAR_26->age_ifp;
 VAR_32 = FUNC_13(VAR_27->flags);
 VAR_33 = FUNC_13(VAR_27->index);
 VAR_37 = FUNC_5(VAR_33);
 VAR_36 = FUNC_6(VAR_33);

 VAR_26->age_cdata.age_rxlen = FUNC_4(FUNC_13(VAR_27->len));
 if ((VAR_32 & (VAR_3 | VAR_6)) != 0) {
  VAR_32 |= VAR_4 | VAR_10;
  if ((VAR_32 & (VAR_1 | VAR_0 | VAR_2 |
      VAR_8 | VAR_7 | VAR_11)) != 0)
   return;
 }

 for (VAR_35 = 0; VAR_35 < VAR_36; VAR_35++,
     FUNC_0(VAR_37, VAR_15)) {
  VAR_28 = &VAR_26->age_cdata.age_rxdesc[VAR_37];
  VAR_30 = VAR_28->rx_m;

  if (FUNC_11(VAR_26, VAR_28) != 0) {
   FUNC_12(VAR_29, VAR_23, 1);

   if (VAR_26->age_cdata.age_rxhead != ((void*)0))
    FUNC_14(VAR_26->age_cdata.age_rxhead);
   break;
  }






  VAR_30->m_len = VAR_14;


  if (VAR_26->age_cdata.age_rxhead == ((void*)0)) {
   VAR_26->age_cdata.age_rxhead = VAR_30;
   VAR_26->age_cdata.age_rxtail = VAR_30;
  } else {
   VAR_30->m_flags &= ~VAR_24;
   VAR_26->age_cdata.age_rxprev_tail =
       VAR_26->age_cdata.age_rxtail;
   VAR_26->age_cdata.age_rxtail->m_next = VAR_30;
   VAR_26->age_cdata.age_rxtail = VAR_30;
  }

  if (VAR_35 == VAR_36 - 1) {

   VAR_31 = VAR_26->age_cdata.age_rxhead;
   VAR_31->m_flags |= VAR_24;




   VAR_31->m_pkthdr.len = VAR_26->age_cdata.age_rxlen -
       VAR_20;
   if (VAR_36 > 1) {

    VAR_30->m_len = VAR_26->age_cdata.age_rxlen -
        ((VAR_36 - 1) * VAR_14);

    if (VAR_30->m_len <= VAR_20) {
     VAR_26->age_cdata.age_rxtail =
         VAR_26->age_cdata.age_rxprev_tail;
     VAR_26->age_cdata.age_rxtail->m_len -=
         (VAR_20 - VAR_30->m_len);
     VAR_26->age_cdata.age_rxtail->m_next = ((void*)0);
     FUNC_14(VAR_30);
    } else {
     VAR_30->m_len -= VAR_20;
    }
   } else
    VAR_31->m_len = VAR_31->m_pkthdr.len;
   VAR_31->m_pkthdr.rcvif = VAR_29;
   if ((VAR_29->if_capenable & VAR_21) != 0 &&
       (VAR_32 & VAR_5) != 0) {
    if ((VAR_32 & VAR_4) == 0)
     VAR_31->m_pkthdr.csum_flags |=
         VAR_17 | VAR_18;
    if ((VAR_32 & (VAR_9 | VAR_12)) &&
        (VAR_32 & VAR_10) == 0) {
     VAR_31->m_pkthdr.csum_flags |=
         VAR_16 | VAR_19;
     VAR_31->m_pkthdr.csum_data = 0xffff;
    }





   }


   if ((VAR_29->if_capenable & VAR_22) != 0 &&
       (VAR_32 & VAR_13) != 0) {
    VAR_34 = FUNC_7(FUNC_13(VAR_27->vtags));
    VAR_31->m_pkthdr.ether_vtag = FUNC_8(VAR_34);
    VAR_31->m_flags |= VAR_25;
   }

   VAR_31 = FUNC_10(VAR_29, VAR_31);
   if (VAR_31 != ((void*)0))

   {

   FUNC_9(VAR_26);
   (*VAR_29->if_input)(VAR_29, VAR_31);
   FUNC_1(VAR_26);
   }
  }
 }


 FUNC_3(VAR_26);
}
