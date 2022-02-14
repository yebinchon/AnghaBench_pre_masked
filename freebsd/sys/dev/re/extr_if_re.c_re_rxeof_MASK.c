
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_8__ {int rl_rx_prodidx; int rl_rx_list_map; int rl_rx_list_tag; TYPE_3__* rl_rx_desc; TYPE_2__* rl_jrx_desc; struct rl_desc* rl_rx_list; } ;
struct rl_softc {int rl_flags; int rl_rxlenmask; scalar_t__ rl_type; TYPE_4__ rl_ldata; struct mbuf* rl_tail; struct mbuf* rl_head; struct ifnet* rl_ifp; } ;
struct rl_desc {int rl_vlanctl; int rl_cmdstat; } ;
struct TYPE_5__ {int len; int csum_flags; int csum_data; int ether_vtag; struct ifnet* rcvif; } ;
struct mbuf {int m_len; int m_flags; TYPE_1__ m_pkthdr; struct mbuf* m_next; } ;
struct ifnet {scalar_t__ if_mtu; int if_drv_flags; int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_7__ {struct mbuf* rx_m; } ;
struct TYPE_6__ {struct mbuf* rx_m; } ;


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
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct rl_softc*) ;
 int FUNC_1 (struct rl_softc*) ;
 scalar_t__ VAR_21 ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_2 (struct rl_softc*,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct rl_softc*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct ifnet*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mbuf*) ;
 scalar_t__ FUNC_11 (struct ifnet*,int ,int*) ;
 int FUNC_12 (struct rl_softc*,int) ;
 int FUNC_13 (struct mbuf*) ;
 int FUNC_14 (struct rl_softc*,int) ;
 int FUNC_15 (struct rl_softc*,int) ;
 int FUNC_16 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_17(struct rl_softc *VAR_37, int *VAR_38)
{
 struct mbuf *VAR_39;
 struct ifnet *VAR_40;
 int VAR_41, VAR_42, VAR_43;
 struct rl_desc *VAR_44;
 u_int32_t VAR_45, VAR_46;
 int VAR_47, VAR_48 = 16, VAR_49 = 0;

 FUNC_1(VAR_37);

 VAR_40 = VAR_37->rl_ifp;




 if (VAR_40->if_mtu > VAR_21 && (VAR_37->rl_flags & VAR_20) != 0)
  VAR_47 = 1;
 else
  VAR_47 = 0;



 FUNC_7(VAR_37->rl_ldata.rl_rx_list_tag,
     VAR_37->rl_ldata.rl_rx_list_map,
     VAR_0 | VAR_1);

 for (VAR_41 = VAR_37->rl_ldata.rl_rx_prodidx; VAR_48 > 0;
     VAR_41 = FUNC_2(VAR_37, VAR_41)) {
  if ((VAR_40->if_drv_flags & VAR_14) == 0)
   break;
  VAR_44 = &VAR_37->rl_ldata.rl_rx_list[VAR_41];
  VAR_45 = FUNC_9(VAR_44->rl_cmdstat);
  if ((VAR_45 & VAR_27) != 0)
   break;
  VAR_43 = VAR_45 & VAR_37->rl_rxlenmask;
  VAR_46 = FUNC_9(VAR_44->rl_vlanctl);
  if (VAR_47 != 0)
   VAR_39 = VAR_37->rl_ldata.rl_jrx_desc[VAR_41].rx_m;
  else
   VAR_39 = VAR_37->rl_ldata.rl_rx_desc[VAR_41].rx_m;

  if ((VAR_37->rl_flags & VAR_20) != 0 &&
      (VAR_45 & (VAR_30 | VAR_23)) !=
      (VAR_30 | VAR_23)) {




   FUNC_12(VAR_37, VAR_41);
   continue;
  } else if ((VAR_45 & VAR_23) == 0) {
   if (FUNC_15(VAR_37, VAR_41) != 0) {




    if (VAR_37->rl_head != ((void*)0)) {
     FUNC_10(VAR_37->rl_head);
     VAR_37->rl_head = VAR_37->rl_tail = ((void*)0);
    }
    FUNC_12(VAR_37, VAR_41);
    continue;
   }
   VAR_39->m_len = VAR_17;
   if (VAR_37->rl_head == ((void*)0))
    VAR_37->rl_head = VAR_37->rl_tail = VAR_39;
   else {
    VAR_39->m_flags &= ~VAR_15;
    VAR_37->rl_tail->m_next = VAR_39;
    VAR_37->rl_tail = VAR_39;
   }
   continue;
  }
  if (VAR_37->rl_type == VAR_18)
   VAR_45 >>= 1;





  if ((VAR_45 & VAR_29) != 0) {
   VAR_42 = 1;
   if ((VAR_37->rl_flags & VAR_20) == 0 &&
       VAR_43 > 8191 &&
       (VAR_45 & VAR_24) == VAR_25)
    VAR_42 = 0;
   if (VAR_42 != 0) {
    FUNC_8(VAR_40, VAR_11, 1);




    if (VAR_37->rl_head != ((void*)0)) {
     FUNC_10(VAR_37->rl_head);
     VAR_37->rl_head = VAR_37->rl_tail = ((void*)0);
    }
    FUNC_12(VAR_37, VAR_41);
    continue;
   }
  }





  if (VAR_47 != 0)
   VAR_42 = FUNC_14(VAR_37, VAR_41);
  else
   VAR_42 = FUNC_15(VAR_37, VAR_41);
  if (VAR_42 != 0) {
   FUNC_8(VAR_40, VAR_13, 1);
   if (VAR_37->rl_head != ((void*)0)) {
    FUNC_10(VAR_37->rl_head);
    VAR_37->rl_head = VAR_37->rl_tail = ((void*)0);
   }
   FUNC_12(VAR_37, VAR_41);
   continue;
  }

  if (VAR_37->rl_head != ((void*)0)) {
   if (VAR_47 != 0)
    VAR_39->m_len = VAR_43;
   else {
    VAR_39->m_len = VAR_43 % VAR_17;
    if (VAR_39->m_len == 0)
     VAR_39->m_len = VAR_17;
   }






   if (VAR_39->m_len <= VAR_9) {
    VAR_37->rl_tail->m_len -=
        (VAR_9 - VAR_39->m_len);
    FUNC_10(VAR_39);
   } else {
    VAR_39->m_len -= VAR_9;
    VAR_39->m_flags &= ~VAR_15;
    VAR_37->rl_tail->m_next = VAR_39;
   }
   VAR_39 = VAR_37->rl_head;
   VAR_37->rl_head = VAR_37->rl_tail = ((void*)0);
   VAR_39->m_pkthdr.len = VAR_43 - VAR_9;
  } else
   VAR_39->m_pkthdr.len = VAR_39->m_len =
       (VAR_43 - VAR_9);




  FUNC_8(VAR_40, VAR_12, 1);
  VAR_39->m_pkthdr.rcvif = VAR_40;



  if (VAR_40->if_capenable & VAR_10) {
   if ((VAR_37->rl_flags & VAR_19) == 0) {

    if (VAR_45 & VAR_28)
     VAR_39->m_pkthdr.csum_flags |=
         VAR_5;
    if (!(VAR_45 & VAR_26))
     VAR_39->m_pkthdr.csum_flags |=
         VAR_6;


    if ((FUNC_3(VAR_45) &&
        !(VAR_45 & VAR_32)) ||
        (FUNC_4(VAR_45) &&
         !(VAR_45 & VAR_34))) {
     VAR_39->m_pkthdr.csum_flags |=
      VAR_4|VAR_7;
     VAR_39->m_pkthdr.csum_data = 0xffff;
    }
   } else {



    if ((VAR_45 & VAR_28) &&
        (VAR_46 & VAR_22))
     VAR_39->m_pkthdr.csum_flags |=
         VAR_5;
    if (!(VAR_45 & VAR_26) &&
        (VAR_46 & VAR_22))
     VAR_39->m_pkthdr.csum_flags |=
         VAR_6;
    if (((VAR_45 & VAR_31) &&
        !(VAR_45 & VAR_32)) ||
        ((VAR_45 & VAR_33) &&
        !(VAR_45 & VAR_34))) {
     VAR_39->m_pkthdr.csum_flags |=
      VAR_4|VAR_7;
     VAR_39->m_pkthdr.csum_data = 0xffff;
    }
   }
  }
  VAR_48--;
  if (VAR_46 & VAR_36) {
   VAR_39->m_pkthdr.ether_vtag =
       FUNC_6((VAR_46 & VAR_35));
   VAR_39->m_flags |= VAR_16;
  }
  FUNC_5(VAR_37);
  (*VAR_40->if_input)(VAR_40, VAR_39);
  FUNC_0(VAR_37);
  VAR_49++;
 }



 FUNC_7(VAR_37->rl_ldata.rl_rx_list_tag,
     VAR_37->rl_ldata.rl_rx_list_map,
     VAR_3|VAR_2);

 VAR_37->rl_ldata.rl_rx_prodidx = VAR_41;

 if (VAR_38 != ((void*)0))
  *VAR_38 = VAR_49;
 if (VAR_48)
  return (VAR_8);

 return (0);
}
