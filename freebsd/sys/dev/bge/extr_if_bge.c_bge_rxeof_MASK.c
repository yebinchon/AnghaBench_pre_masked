
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_5__ {size_t ether_vtag; int rcvif; scalar_t__ len; } ;
struct mbuf {scalar_t__ m_data; int m_flags; TYPE_2__ m_pkthdr; scalar_t__ m_len; } ;
struct TYPE_6__ {int bge_rx_jumbo_ring_map; int bge_rx_jumbo_ring_tag; int bge_rx_std_ring_map; int bge_rx_std_ring_tag; int bge_rx_return_ring_map; int bge_rx_return_ring_tag; struct mbuf** bge_rx_std_chain; struct mbuf** bge_rx_jumbo_chain; } ;
struct TYPE_4__ {struct bge_rx_bd* bge_rx_return_ring; } ;
struct bge_softc {size_t bge_rx_saved_considx; scalar_t__ rxcycles; int bge_return_ring_cnt; size_t bge_jumbo; size_t bge_std; int bge_flags; TYPE_3__ bge_cdata; TYPE_1__ bge_ldata; int bge_ifp; } ;
struct bge_rx_bd {size_t bge_idx; int bge_flags; size_t bge_vlan_tag; scalar_t__ bge_len; } ;
typedef int if_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,int) ;
 scalar_t__ FUNC_1 (struct bge_softc*) ;
 scalar_t__ FUNC_2 (struct bge_softc*) ;
 int VAR_1 ;
 int FUNC_3 (struct bge_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct bge_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct bge_softc*,int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct bge_softc*,size_t) ;
 scalar_t__ FUNC_8 (struct bge_softc*,size_t) ;
 int FUNC_9 (struct bge_softc*,struct bge_rx_bd*,struct mbuf*) ;
 int FUNC_10 (struct bge_softc*,size_t) ;
 int FUNC_11 (struct bge_softc*,size_t) ;
 int FUNC_12 (struct bge_softc*,int ,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,struct mbuf*) ;

__attribute__((used)) static int
FUNC_20(struct bge_softc *VAR_26, uint16_t VAR_27, int VAR_28)
{
 if_t VAR_29;
 int VAR_30 = 0, VAR_31 = 0, VAR_32 = 0;
 uint16_t VAR_33;

 VAR_33 = VAR_26->bge_rx_saved_considx;


 if (VAR_33 == VAR_27)
  return (VAR_30);

 VAR_29 = VAR_26->bge_ifp;

 FUNC_13(VAR_26->bge_cdata.bge_rx_return_ring_tag,
     VAR_26->bge_cdata.bge_rx_return_ring_map, VAR_10);
 FUNC_13(VAR_26->bge_cdata.bge_rx_std_ring_tag,
     VAR_26->bge_cdata.bge_rx_std_ring_map, VAR_11);
 if (FUNC_2(VAR_26) &&
     FUNC_16(VAR_29) + VAR_16 + VAR_15 +
     VAR_17 > (VAR_24 - VAR_14))
  FUNC_13(VAR_26->bge_cdata.bge_rx_jumbo_ring_tag,
      VAR_26->bge_cdata.bge_rx_jumbo_ring_map, VAR_11);

 while (VAR_33 != VAR_27) {
  struct bge_rx_bd *VAR_34;
  uint32_t VAR_35;
  struct mbuf *VAR_36 = ((void*)0);
  uint16_t VAR_37 = 0;
  int VAR_38 = 0;
  VAR_34 = &VAR_26->bge_ldata.bge_rx_return_ring[VAR_33];

  VAR_35 = VAR_34->bge_idx;
  FUNC_0(VAR_33, VAR_26->bge_return_ring_cnt);

  if (FUNC_14(VAR_29) & VAR_20 &&
      VAR_34->bge_flags & VAR_7) {
   VAR_38 = 1;
   VAR_37 = VAR_34->bge_vlan_tag;
  }

  if (VAR_34->bge_flags & VAR_6) {
   VAR_32++;
   VAR_36 = VAR_26->bge_cdata.bge_rx_jumbo_chain[VAR_35];
   if (VAR_34->bge_flags & VAR_5) {
    FUNC_10(VAR_26, VAR_35);
    continue;
   }
   if (FUNC_7(VAR_26, VAR_35) != 0) {
    FUNC_10(VAR_26, VAR_35);
    FUNC_17(VAR_29, VAR_22, 1);
    continue;
   }
   FUNC_0(VAR_26->bge_jumbo, VAR_1);
  } else {
   VAR_31++;
   VAR_36 = VAR_26->bge_cdata.bge_rx_std_chain[VAR_35];
   if (VAR_34->bge_flags & VAR_5) {
    FUNC_11(VAR_26, VAR_35);
    continue;
   }
   if (FUNC_8(VAR_26, VAR_35) != 0) {
    FUNC_11(VAR_26, VAR_35);
    FUNC_17(VAR_29, VAR_22, 1);
    continue;
   }
   FUNC_0(VAR_26->bge_std, VAR_9);
  }

  FUNC_17(VAR_29, VAR_21, 1);





  if (VAR_26->bge_flags & VAR_0) {
   FUNC_6(VAR_36->m_data, VAR_36->m_data + VAR_14,
       VAR_34->bge_len);
   VAR_36->m_data += VAR_14;
  }

  VAR_36->m_pkthdr.len = VAR_36->m_len = VAR_34->bge_len - VAR_15;
  VAR_36->m_pkthdr.rcvif = VAR_29;

  if (FUNC_14(VAR_29) & VAR_19)
   FUNC_9(VAR_26, VAR_34, VAR_36);





  if (VAR_38) {
   VAR_36->m_pkthdr.ether_vtag = VAR_37;
   VAR_36->m_flags |= VAR_25;
  }

  if (VAR_28 != 0) {
   FUNC_4(VAR_26);
   FUNC_19(VAR_29, VAR_36);
   FUNC_3(VAR_26);
  } else
   FUNC_19(VAR_29, VAR_36);
  VAR_30++;

  if (!(FUNC_15(VAR_29) & VAR_23))
   return (VAR_30);
 }

 FUNC_13(VAR_26->bge_cdata.bge_rx_return_ring_tag,
     VAR_26->bge_cdata.bge_rx_return_ring_map, VAR_12);
 if (VAR_31 > 0)
  FUNC_13(VAR_26->bge_cdata.bge_rx_std_ring_tag,
      VAR_26->bge_cdata.bge_rx_std_ring_map, VAR_13);

 if (VAR_32 > 0)
  FUNC_13(VAR_26->bge_cdata.bge_rx_jumbo_ring_tag,
      VAR_26->bge_cdata.bge_rx_jumbo_ring_map, VAR_13);

 VAR_26->bge_rx_saved_considx = VAR_33;
 FUNC_12(VAR_26, VAR_2, VAR_26->bge_rx_saved_considx);
 if (VAR_31)
  FUNC_12(VAR_26, VAR_4, (VAR_26->bge_std +
      VAR_9 - 1) % VAR_9);
 if (VAR_32)
  FUNC_12(VAR_26, VAR_3, (VAR_26->bge_jumbo +
      VAR_1 - 1) % VAR_1);
 return (VAR_30);
}
