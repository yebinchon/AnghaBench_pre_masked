
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int ti_rx_jumbo_ring_map; int ti_rx_jumbo_ring_tag; int ti_rx_mini_ring_map; int ti_rx_mini_ring_tag; int ti_rx_std_ring_map; int ti_rx_std_ring_tag; int ti_rx_return_ring_map; int ti_rx_return_ring_tag; struct mbuf** ti_rx_std_chain; struct mbuf** ti_rx_mini_chain; int ti_rx_jumbo_tag; int * ti_rx_jumbo_maps; struct mbuf** ti_rx_jumbo_chain; } ;
struct TYPE_6__ {struct ti_rx_desc* ti_rx_return_ring; int * ti_rx_mini_ring; } ;
struct TYPE_5__ {scalar_t__ ti_idx; } ;
struct ti_softc {scalar_t__ ti_rx_saved_considx; size_t ti_jumbo; size_t ti_mini; size_t ti_std; scalar_t__ ti_hwrev; TYPE_4__ ti_cdata; scalar_t__ ti_hdrsplit; TYPE_2__ ti_rdata; TYPE_1__ ti_return_prodidx; struct ifnet* ti_ifp; } ;
struct ti_rx_desc {size_t ti_idx; int ti_len; int ti_flags; int ti_ip_cksum; int ti_tcp_udp_cksum; int ti_addr; int ti_vlan_tag; } ;
struct ti_cmd_desc {int dummy; } ;
struct TYPE_7__ {int len; int ether_vtag; int csum_flags; int csum_data; struct ifnet* rcvif; } ;
struct mbuf {int m_len; int m_flags; TYPE_3__ m_pkthdr; } ;
struct ifnet {scalar_t__ if_mtu; int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
typedef int bus_dmamap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ti_softc*,int ,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_23 ;
 int FUNC_2 (size_t,int ) ;
 int VAR_24 ;
 int FUNC_3 (struct ti_softc*) ;
 int FUNC_4 (struct ti_softc*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_5 (struct ti_softc*) ;
 int FUNC_6 (struct ti_softc*,size_t) ;
 int FUNC_7 (struct ti_softc*,size_t) ;
 int FUNC_8 (struct ti_softc*,size_t) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct ifnet*,int ,int) ;
 int FUNC_12 (struct mbuf*,int) ;
 int FUNC_13 (struct ifnet*,struct mbuf*) ;
 int FUNC_14 (struct ti_softc*,size_t) ;
 int FUNC_15 (struct ti_softc*,size_t) ;
 int FUNC_16 (struct ti_softc*,size_t) ;
 int FUNC_17 (struct mbuf*,int ,int,size_t) ;
 scalar_t__ FUNC_18 (struct ti_softc*,size_t,struct mbuf*) ;
 scalar_t__ FUNC_19 (struct ti_softc*,size_t) ;
 scalar_t__ FUNC_20 (struct ti_softc*,size_t) ;

__attribute__((used)) static void
FUNC_21(struct ti_softc *VAR_28)
{
 struct ifnet *VAR_29;



 struct ti_cmd_desc VAR_30;
 int VAR_31, VAR_32, VAR_33, VAR_34;

 FUNC_4(VAR_28);

 VAR_29 = VAR_28->ti_ifp;

 FUNC_9(VAR_28->ti_cdata.ti_rx_std_ring_tag,
     VAR_28->ti_cdata.ti_rx_std_ring_map, VAR_1);
 if (VAR_29->if_mtu > VAR_8 + VAR_9 + VAR_10)
  FUNC_9(VAR_28->ti_cdata.ti_rx_jumbo_ring_tag,
      VAR_28->ti_cdata.ti_rx_jumbo_ring_map, VAR_1);
 if (VAR_28->ti_rdata.ti_rx_mini_ring != ((void*)0))
  FUNC_9(VAR_28->ti_cdata.ti_rx_mini_ring_tag,
      VAR_28->ti_cdata.ti_rx_mini_ring_map, VAR_1);
 FUNC_9(VAR_28->ti_cdata.ti_rx_return_ring_tag,
     VAR_28->ti_cdata.ti_rx_return_ring_map, VAR_0);

 VAR_31 = VAR_32 = VAR_33 = 0;
 while (VAR_28->ti_rx_saved_considx != VAR_28->ti_return_prodidx.ti_idx) {
  struct ti_rx_desc *VAR_35;
  uint32_t VAR_36;
  struct mbuf *VAR_37 = ((void*)0);
  uint16_t VAR_38 = 0;
  int VAR_39 = 0;

  VAR_35 =
      &VAR_28->ti_rdata.ti_rx_return_ring[VAR_28->ti_rx_saved_considx];
  VAR_36 = VAR_35->ti_idx;
  VAR_34 = VAR_35->ti_len;
  FUNC_2(VAR_28->ti_rx_saved_considx, VAR_26);

  if (VAR_35->ti_flags & VAR_21) {
   VAR_39 = 1;
   VAR_38 = VAR_35->ti_vlan_tag;
  }

  if (VAR_35->ti_flags & VAR_18) {
   VAR_31++;
   FUNC_2(VAR_28->ti_jumbo, VAR_24);
   VAR_37 = VAR_28->ti_cdata.ti_rx_jumbo_chain[VAR_36];

   if (VAR_35->ti_flags & VAR_16) {
    FUNC_11(VAR_29, VAR_12, 1);
    FUNC_14(VAR_28, VAR_36);
    continue;
   }
   if (FUNC_18(VAR_28, VAR_36, ((void*)0)) != 0) {
    FUNC_11(VAR_29, VAR_14, 1);
    FUNC_14(VAR_28, VAR_36);
    continue;
   }
   VAR_37->m_len = VAR_34;
  } else if (VAR_35->ti_flags & VAR_19) {
   VAR_32++;
   FUNC_2(VAR_28->ti_mini, VAR_25);
   VAR_37 = VAR_28->ti_cdata.ti_rx_mini_chain[VAR_36];
   if (VAR_35->ti_flags & VAR_16) {
    FUNC_11(VAR_29, VAR_12, 1);
    FUNC_15(VAR_28, VAR_36);
    continue;
   }
   if (FUNC_19(VAR_28, VAR_36) != 0) {
    FUNC_11(VAR_29, VAR_14, 1);
    FUNC_15(VAR_28, VAR_36);
    continue;
   }
   VAR_37->m_len = VAR_34;
  } else {
   VAR_33++;
   FUNC_2(VAR_28->ti_std, VAR_27);
   VAR_37 = VAR_28->ti_cdata.ti_rx_std_chain[VAR_36];
   if (VAR_35->ti_flags & VAR_16) {
    FUNC_11(VAR_29, VAR_12, 1);
    FUNC_16(VAR_28, VAR_36);
    continue;
   }
   if (FUNC_20(VAR_28, VAR_36) != 0) {
    FUNC_11(VAR_29, VAR_14, 1);
    FUNC_16(VAR_28, VAR_36);
    continue;
   }
   VAR_37->m_len = VAR_34;
  }

  VAR_37->m_pkthdr.len = VAR_34;
  FUNC_11(VAR_29, VAR_13, 1);
  VAR_37->m_pkthdr.rcvif = VAR_29;

  if (VAR_29->if_capenable & VAR_11) {
   if (VAR_35->ti_flags & VAR_17) {
    VAR_37->m_pkthdr.csum_flags |= VAR_5;
    if ((VAR_35->ti_ip_cksum ^ 0xffff) == 0)
     VAR_37->m_pkthdr.csum_flags |= VAR_6;
   }
   if (VAR_35->ti_flags & VAR_20) {
    VAR_37->m_pkthdr.csum_data =
        VAR_35->ti_tcp_udp_cksum;
    VAR_37->m_pkthdr.csum_flags |= VAR_4;
   }
  }





  if (VAR_39) {
   VAR_37->m_pkthdr.ether_vtag = VAR_38;
   VAR_37->m_flags |= VAR_15;
  }
  FUNC_5(VAR_28);
  (*VAR_29->if_input)(VAR_29, VAR_37);
  FUNC_3(VAR_28);
 }

 FUNC_9(VAR_28->ti_cdata.ti_rx_return_ring_tag,
     VAR_28->ti_cdata.ti_rx_return_ring_map, VAR_2);

 if (VAR_28->ti_hwrev == VAR_23)
  FUNC_0(VAR_28, VAR_22,
      VAR_28->ti_rx_saved_considx);

 if (VAR_33 > 0) {
  FUNC_9(VAR_28->ti_cdata.ti_rx_std_ring_tag,
      VAR_28->ti_cdata.ti_rx_std_ring_map, VAR_3);
  FUNC_8(VAR_28, VAR_28->ti_std);
 }
 if (VAR_32 > 0) {
  FUNC_9(VAR_28->ti_cdata.ti_rx_mini_ring_tag,
      VAR_28->ti_cdata.ti_rx_mini_ring_map, VAR_3);
  FUNC_7(VAR_28, VAR_28->ti_mini);
 }
 if (VAR_31 > 0) {
  FUNC_9(VAR_28->ti_cdata.ti_rx_jumbo_ring_tag,
      VAR_28->ti_cdata.ti_rx_jumbo_ring_map, VAR_3);
  FUNC_6(VAR_28, VAR_28->ti_jumbo);
 }
}
