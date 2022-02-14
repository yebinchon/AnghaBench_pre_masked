
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int vge_rx_prodidx; scalar_t__ vge_rx_commit; int vge_rx_ring_map; int vge_rx_ring_tag; struct mbuf* vge_tail; struct mbuf* vge_head; struct vge_rxdesc* vge_rxdesc; } ;
struct TYPE_4__ {struct vge_rx_desc* vge_rx_ring; } ;
struct vge_softc {TYPE_3__ vge_cdata; TYPE_1__ vge_rdata; struct ifnet* vge_ifp; } ;
struct vge_rxdesc {struct mbuf* rx_m; } ;
struct vge_rx_desc {int vge_ctl; int vge_sts; } ;
struct TYPE_5__ {int len; int csum_flags; int csum_data; int ether_vtag; struct ifnet* rcvif; } ;
struct mbuf {int m_len; int m_flags; TYPE_2__ m_pkthdr; struct mbuf* m_next; } ;
struct ifnet {int if_drv_flags; int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vge_softc*,int ,scalar_t__) ;
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
 int FUNC_1 (struct vge_softc*) ;
 int FUNC_2 (struct vge_softc*) ;
 int FUNC_3 (struct vge_softc*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct vge_softc*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct ifnet*,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct mbuf*) ;
 int FUNC_12 (struct ifnet*,struct mbuf*) ;
 int FUNC_13 (struct vge_softc*,int) ;
 int FUNC_14 (struct mbuf*) ;
 scalar_t__ FUNC_15 (struct vge_softc*,int) ;

__attribute__((used)) static int
FUNC_16(struct vge_softc *VAR_32, int VAR_33)
{
 struct mbuf *VAR_34;
 struct ifnet *VAR_35;
 int VAR_36, VAR_37, VAR_38;
 struct vge_rxdesc *VAR_39;
 struct vge_rx_desc *VAR_40;
 uint32_t VAR_41, VAR_42;

 FUNC_3(VAR_32);

 VAR_35 = VAR_32->vge_ifp;

 FUNC_8(VAR_32->vge_cdata.vge_rx_ring_tag,
     VAR_32->vge_cdata.vge_rx_ring_map,
     VAR_0 | VAR_1);

 VAR_36 = VAR_32->vge_cdata.vge_rx_prodidx;
 for (VAR_37 = 0; VAR_33 > 0 &&
     (VAR_35->if_drv_flags & VAR_12) != 0;
     FUNC_5(VAR_36)) {
  VAR_40 = &VAR_32->vge_rdata.vge_rx_ring[VAR_36];
  VAR_41 = FUNC_10(VAR_40->vge_sts);
  if ((VAR_41 & VAR_24) != 0)
   break;
  VAR_33--;
  VAR_37++;
  VAR_42 = FUNC_10(VAR_40->vge_ctl);
  VAR_38 = FUNC_4(VAR_41);
  VAR_39 = &VAR_32->vge_cdata.vge_rxdesc[VAR_36];
  VAR_34 = VAR_39->rx_m;







  if ((VAR_41 & VAR_30) != 0) {
   if (FUNC_15(VAR_32, VAR_36) != 0) {
    FUNC_9(VAR_35, VAR_11, 1);
    FUNC_1(VAR_32);
    FUNC_13(VAR_32, VAR_36);
    continue;
   }
   VAR_34->m_len = VAR_13 - VAR_31;
   if (VAR_32->vge_cdata.vge_head == ((void*)0)) {
    VAR_32->vge_cdata.vge_head = VAR_34;
    VAR_32->vge_cdata.vge_tail = VAR_34;
   } else {
    VAR_34->m_flags &= ~VAR_14;
    VAR_32->vge_cdata.vge_tail->m_next = VAR_34;
    VAR_32->vge_cdata.vge_tail = VAR_34;
   }
   continue;
  }
  if ((VAR_41 & VAR_26) == 0 &&
      (VAR_41 & (VAR_27 | VAR_25 |
      VAR_23)) == 0) {
   FUNC_9(VAR_35, VAR_10, 1);




   FUNC_1(VAR_32);
   FUNC_13(VAR_32, VAR_36);
   continue;
  }

  if (FUNC_15(VAR_32, VAR_36) != 0) {
   FUNC_9(VAR_35, VAR_11, 1);
   FUNC_1(VAR_32);
   FUNC_13(VAR_32, VAR_36);
   continue;
  }


  if (VAR_32->vge_cdata.vge_head != ((void*)0)) {
   VAR_34->m_len = VAR_38 % (VAR_13 - VAR_31);






   if (VAR_34->m_len <= VAR_8) {
    VAR_32->vge_cdata.vge_tail->m_len -=
        (VAR_8 - VAR_34->m_len);
    FUNC_11(VAR_34);
   } else {
    VAR_34->m_len -= VAR_8;
    VAR_34->m_flags &= ~VAR_14;
    VAR_32->vge_cdata.vge_tail->m_next = VAR_34;
   }
   VAR_34 = VAR_32->vge_cdata.vge_head;
   VAR_34->m_flags |= VAR_14;
   VAR_34->m_pkthdr.len = VAR_38 - VAR_8;
  } else {
   VAR_34->m_flags |= VAR_14;
   VAR_34->m_pkthdr.len = VAR_34->m_len =
       (VAR_38 - VAR_8);
  }


  FUNC_14(VAR_34);

  VAR_34->m_pkthdr.rcvif = VAR_35;


  if ((VAR_35->if_capenable & VAR_9) != 0 &&
      (VAR_42 & VAR_16) == 0) {

   if ((VAR_42 & VAR_18) != 0)
    VAR_34->m_pkthdr.csum_flags |= VAR_5;
   if ((VAR_42 & VAR_17) != 0)
    VAR_34->m_pkthdr.csum_flags |= VAR_6;


   if (VAR_42 & (VAR_20 | VAR_21) &&
       VAR_42 & VAR_19) {
    VAR_34->m_pkthdr.csum_flags |=
        VAR_4 | VAR_7;
    VAR_34->m_pkthdr.csum_data = 0xffff;
   }
  }

  if ((VAR_41 & VAR_28) != 0) {





   VAR_34->m_pkthdr.ether_vtag =
       FUNC_7(VAR_42 & VAR_22);
   VAR_34->m_flags |= VAR_15;
  }

  FUNC_6(VAR_32);
  (*VAR_35->if_input)(VAR_35, VAR_34);
  FUNC_2(VAR_32);
  VAR_32->vge_cdata.vge_head = ((void*)0);
  VAR_32->vge_cdata.vge_tail = ((void*)0);
 }

 if (VAR_37 > 0) {
  VAR_32->vge_cdata.vge_rx_prodidx = VAR_36;
  FUNC_8(VAR_32->vge_cdata.vge_rx_ring_tag,
      VAR_32->vge_cdata.vge_rx_ring_map,
      VAR_2 | VAR_3);

  if (VAR_32->vge_cdata.vge_rx_commit != 0) {
   FUNC_0(VAR_32, VAR_29,
       VAR_32->vge_cdata.vge_rx_commit);
   VAR_32->vge_cdata.vge_rx_commit = 0;
  }
 }
 return (VAR_37);
}
