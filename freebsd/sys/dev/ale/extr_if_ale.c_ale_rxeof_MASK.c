
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct rx_rs {int vtags; int flags; int length; int seqno; } ;
struct TYPE_4__ {int ether_vtag; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;
struct ifnet {int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_3__ {size_t ale_rx_curp; int ale_rx_seqno; struct ale_rx_page* ale_rx_page; } ;
struct ale_softc {TYPE_1__ ale_cdata; int ale_dev; struct ifnet* ale_ifp; } ;
struct ale_rx_page {int* cmb_addr; int cons; int page_addr; int page_map; int page_tag; int cmb_map; int cmb_tag; } ;


 int FUNC_0 (struct ale_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ale_softc*) ;
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
 int FUNC_6 (struct ale_softc*,struct ale_rx_page**,int,int*) ;
 int FUNC_7 (struct ale_softc*,struct mbuf*,int) ;
 scalar_t__ VAR_19 ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,char*,int,int) ;
 int FUNC_10 (struct ifnet*,int ,int) ;
 int FUNC_11 (int ) ;
 struct mbuf* FUNC_12 (char*,int,int ,struct ifnet*,int *) ;
 int FUNC_13 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_14(struct ale_softc *VAR_20, int VAR_21)
{
 struct ale_rx_page *VAR_22;
 struct rx_rs *VAR_23;
 struct ifnet *VAR_24;
 struct mbuf *VAR_25;
 uint32_t VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31;

 VAR_24 = VAR_20->ale_ifp;
 VAR_22 = &VAR_20->ale_cdata.ale_rx_page[VAR_20->ale_cdata.ale_rx_curp];
 FUNC_8(VAR_22->cmb_tag, VAR_22->cmb_map,
     VAR_9 | VAR_10);
 FUNC_8(VAR_22->page_tag, VAR_22->page_map,
     VAR_9 | VAR_10);
 VAR_27 = *VAR_22->cmb_addr;
 for (VAR_31 = 0; VAR_31 < VAR_21; VAR_31++) {
  if (VAR_22->cons >= VAR_27)
   break;
  VAR_23 = (struct rx_rs *)(VAR_22->page_addr + VAR_22->cons);
  VAR_28 = FUNC_2(FUNC_11(VAR_23->seqno));
  if (VAR_20->ale_cdata.ale_rx_seqno != VAR_28) {
   if (VAR_19)
    FUNC_9(VAR_20->ale_dev,
        "garbled seq: %u, expected: %u -- "
        "resetting!\n", VAR_28,
        VAR_20->ale_cdata.ale_rx_seqno);
   return (VAR_12);
  }

  VAR_20->ale_cdata.ale_rx_seqno++;
  VAR_26 = FUNC_1(FUNC_11(VAR_23->length));
  VAR_29 = FUNC_11(VAR_23->flags);
  if ((VAR_29 & VAR_3) != 0) {
   if ((VAR_29 & (VAR_1 | VAR_0 |
       VAR_2 | VAR_6 | VAR_5 |
       VAR_7)) != 0) {
    FUNC_6(VAR_20, &VAR_22, VAR_26, &VAR_27);
    continue;
   }
  }
  VAR_25 = FUNC_12((char *)(VAR_23 + 1), VAR_26 - VAR_14,
      VAR_13, VAR_24, ((void*)0));
  if (VAR_25 == ((void*)0)) {
   FUNC_10(VAR_24, VAR_17, 1);
   FUNC_6(VAR_20, &VAR_22, VAR_26, &VAR_27);
   continue;
  }
  if ((VAR_24->if_capenable & VAR_15) != 0 &&
      (VAR_29 & VAR_4) != 0)
   FUNC_7(VAR_20, VAR_25, VAR_29);
  if ((VAR_24->if_capenable & VAR_16) != 0 &&
      (VAR_29 & VAR_8) != 0) {
   VAR_30 = FUNC_3(FUNC_11(VAR_23->vtags));
   VAR_25->m_pkthdr.ether_vtag = FUNC_4(VAR_30);
   VAR_25->m_flags |= VAR_18;
  }


  FUNC_5(VAR_20);
  (*VAR_24->if_input)(VAR_24, VAR_25);
  FUNC_0(VAR_20);

  FUNC_6(VAR_20, &VAR_22, VAR_26, &VAR_27);
 }

 return (VAR_21 > 0 ? 0 : VAR_11);
}
