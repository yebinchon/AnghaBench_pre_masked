
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int vte_rx_cons; int vte_rx_ring_map; int vte_rx_ring_tag; struct vte_rxdesc* vte_rxdesc; } ;
struct vte_softc {TYPE_3__ vte_cdata; struct ifnet* vte_ifp; } ;
struct vte_rxdesc {TYPE_1__* rx_desc; struct mbuf* rx_m; } ;
struct TYPE_5__ {int len; struct ifnet* rcvif; } ;
struct mbuf {int m_len; TYPE_2__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_4__ {void* drst; void* drlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vte_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct vte_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int VAR_12 ;
 int FUNC_4 (struct vte_softc*) ;
 int FUNC_5 (int ,int ,int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct ifnet*,int ,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct ifnet*,struct mbuf*) ;
 int FUNC_10 (struct ifnet*,struct mbuf*) ;
 scalar_t__ FUNC_11 (struct vte_softc*,struct vte_rxdesc*) ;

__attribute__((used)) static void
FUNC_12(struct vte_softc *VAR_13)
{
 struct ifnet *VAR_14;
 struct vte_rxdesc *VAR_15;
 struct mbuf *VAR_16;
 uint16_t VAR_17, VAR_18;
 int VAR_19, VAR_20;

 FUNC_5(VAR_13->vte_cdata.vte_rx_ring_tag,
     VAR_13->vte_cdata.vte_rx_ring_map, VAR_0 |
     VAR_1);
 VAR_19 = VAR_13->vte_cdata.vte_rx_cons;
 VAR_14 = VAR_13->vte_ifp;
 for (VAR_20 = 0; (VAR_14->if_drv_flags & VAR_6) != 0; VAR_20++,
     FUNC_1(VAR_19, VAR_12)) {
  VAR_15 = &VAR_13->vte_cdata.vte_rxdesc[VAR_19];
  VAR_17 = FUNC_8(VAR_15->rx_desc->drst);
  if ((VAR_17 & VAR_9) != 0)
   break;
  VAR_18 = FUNC_3(FUNC_8(VAR_15->rx_desc->drlen));
  VAR_16 = VAR_15->rx_m;
  if ((VAR_17 & VAR_8) == 0) {

   VAR_15->rx_desc->drlen =
       FUNC_6(VAR_7 - sizeof(uint32_t));
   VAR_15->rx_desc->drst = FUNC_6(VAR_9);
   continue;
  }
  if (FUNC_11(VAR_13, VAR_15) != 0) {
   FUNC_7(VAR_14, VAR_5, 1);
   VAR_15->rx_desc->drlen =
       FUNC_6(VAR_7 - sizeof(uint32_t));
   VAR_15->rx_desc->drst = FUNC_6(VAR_9);
   continue;
  }




  VAR_16->m_pkthdr.len = VAR_16->m_len = VAR_18 - VAR_4;
  VAR_16->m_pkthdr.rcvif = VAR_14;

  FUNC_10(VAR_14, VAR_16);

  FUNC_4(VAR_13);
  (*VAR_14->if_input)(VAR_14, VAR_16);
  FUNC_2(VAR_13);
 }

 if (VAR_20 > 0) {

  VAR_13->vte_cdata.vte_rx_cons = VAR_19;




  FUNC_5(VAR_13->vte_cdata.vte_rx_ring_tag,
      VAR_13->vte_cdata.vte_rx_ring_map,
      VAR_2 | VAR_3);
 }
}
