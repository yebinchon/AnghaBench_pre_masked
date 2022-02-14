
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sis_softc {int sis_rx_cons; scalar_t__ rxcycles; int sis_rx_list_map; int sis_rx_list_tag; struct sis_rxdesc* sis_rxdesc; struct sis_desc* sis_rx_list; struct ifnet* sis_ifp; } ;
struct sis_rxdesc {struct mbuf* rx_m; } ;
struct sis_desc {int sis_cmdsts; } ;
struct TYPE_2__ {int len; struct ifnet* rcvif; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; } ;
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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct sis_softc*) ;
 int FUNC_2 (struct sis_softc*) ;
 int VAR_16 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (struct sis_softc*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sis_rxdesc*) ;
 int FUNC_9 (struct mbuf*) ;
 scalar_t__ FUNC_10 (struct sis_softc*,struct sis_rxdesc*) ;
 int FUNC_11 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_12(struct sis_softc *VAR_19)
{
 struct mbuf *VAR_20;
 struct ifnet *VAR_21;
 struct sis_rxdesc *VAR_22;
 struct sis_desc *VAR_23;
 int VAR_24, VAR_25, VAR_26 = 0, VAR_27;
 uint32_t VAR_28;

 FUNC_2(VAR_19);

 FUNC_5(VAR_19->sis_rx_list_tag, VAR_19->sis_rx_list_map,
     VAR_0 | VAR_1);

 VAR_25 = VAR_19->sis_rx_cons;
 VAR_21 = VAR_19->sis_ifp;

 for (VAR_24 = 0; (VAR_21->if_drv_flags & VAR_13) != 0;
     FUNC_0(VAR_25, VAR_18), VAR_24++) {







  VAR_23 = &VAR_19->sis_rx_list[VAR_25];
  VAR_28 = FUNC_7(VAR_23->sis_cmdsts);
  if ((VAR_28 & VAR_15) == 0)
   break;
  VAR_22 = &VAR_19->sis_rxdesc[VAR_25];

  VAR_27 = (VAR_28 & VAR_14) - VAR_4;
  if ((VAR_21->if_capenable & VAR_8) != 0 &&
      VAR_27 <= (VAR_5 + VAR_6 -
      VAR_4))
   VAR_28 &= ~VAR_17;
  if (FUNC_3(VAR_28) != 0) {
   FUNC_6(VAR_21, VAR_10, 1);
   if (VAR_28 & VAR_16)
    FUNC_6(VAR_21, VAR_9, 1);
   FUNC_8(VAR_22);
   continue;
  }


  VAR_20 = VAR_22->rx_m;
  if (FUNC_10(VAR_19, VAR_22) != 0) {
   FUNC_6(VAR_21, VAR_12, 1);
   FUNC_8(VAR_22);
   continue;
  }


  VAR_20->m_pkthdr.len = VAR_20->m_len = VAR_27;







  FUNC_9(VAR_20);

  FUNC_6(VAR_21, VAR_11, 1);
  VAR_20->m_pkthdr.rcvif = VAR_21;

  FUNC_4(VAR_19);
  (*VAR_21->if_input)(VAR_21, VAR_20);
  FUNC_1(VAR_19);
  VAR_26++;
 }

 if (VAR_24 > 0) {
  VAR_19->sis_rx_cons = VAR_25;
  FUNC_5(VAR_19->sis_rx_list_tag, VAR_19->sis_rx_list_map,
      VAR_2 | VAR_3);
 }

 return (VAR_26);
}
