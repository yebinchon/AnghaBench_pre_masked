
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_10__ {int csum_flags; scalar_t__ len; scalar_t__ ether_vtag; } ;
struct mbuf {int m_flags; TYPE_4__ m_pkthdr; int * m_next; } ;
struct TYPE_8__ {scalar_t__ bge_addr_lo; void* bge_addr_hi; } ;
struct bge_tx_bd {scalar_t__ bge_len; scalar_t__ bge_flags; scalar_t__ bge_mss; scalar_t__ bge_vlan_tag; TYPE_2__ bge_addr; } ;
struct TYPE_9__ {struct mbuf** bge_tx_chain; int * bge_tx_dmamap; int bge_tx_mtag; } ;
struct TYPE_7__ {struct bge_tx_bd* bge_tx_ring; } ;
struct bge_softc {int bge_flags; int bge_csum_features; int bge_forced_collapse; scalar_t__ bge_txcnt; scalar_t__ bge_asicrev; TYPE_3__ bge_cdata; TYPE_1__ bge_ldata; } ;
typedef int bus_dmamap_t ;
struct TYPE_11__ {scalar_t__ ds_len; int ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (size_t,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
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
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct mbuf* FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (struct bge_softc*,struct mbuf*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int ,int ,struct mbuf*,TYPE_5__*,int*,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 struct mbuf* FUNC_9 (struct mbuf*,int ,int) ;
 struct mbuf* FUNC_10 (struct mbuf*,int ) ;
 int FUNC_11 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_12(struct bge_softc *VAR_27, struct mbuf **VAR_28, uint32_t *VAR_29)
{
 bus_dma_segment_t VAR_30[VAR_4];
 bus_dmamap_t VAR_31;
 struct bge_tx_bd *VAR_32;
 struct mbuf *VAR_33 = *VAR_28;
 uint32_t VAR_34 = *VAR_29;
 uint16_t VAR_35, VAR_36, VAR_37;
 int VAR_38, VAR_39, VAR_40;

 VAR_35 = 0;
 VAR_36 = 0;
 VAR_37 = 0;
 if ((VAR_27->bge_flags & VAR_3) != 0 &&
     VAR_33->m_next != ((void*)0)) {
  *VAR_28 = FUNC_3(VAR_33);
  if (*VAR_28 == ((void*)0))
   return (VAR_22);
  VAR_33 = *VAR_28;
 }
 if ((VAR_33->m_pkthdr.csum_flags & VAR_18) != 0) {
  *VAR_28 = VAR_33 = FUNC_5(VAR_27, VAR_33, &VAR_36, &VAR_35);
  if (*VAR_28 == ((void*)0))
   return (VAR_22);
  VAR_35 |= VAR_6 |
      VAR_5;
 } else if ((VAR_33->m_pkthdr.csum_flags & VAR_27->bge_csum_features) != 0) {
  if (VAR_33->m_pkthdr.csum_flags & VAR_16)
   VAR_35 |= VAR_8;
  if (VAR_33->m_pkthdr.csum_flags & (VAR_17 | VAR_19)) {
   VAR_35 |= VAR_10;
   if (VAR_33->m_pkthdr.len < VAR_24 &&
       (VAR_40 = FUNC_4(VAR_33)) != 0) {
    FUNC_11(VAR_33);
    *VAR_28 = ((void*)0);
    return (VAR_40);
   }
  }
 }

 if ((VAR_33->m_pkthdr.csum_flags & VAR_18) == 0) {
  if (VAR_27->bge_flags & VAR_1 &&
      VAR_33->m_pkthdr.len > VAR_23)
   VAR_35 |= VAR_9;
  if (VAR_27->bge_forced_collapse > 0 &&
      (VAR_27->bge_flags & VAR_2) != 0 && VAR_33->m_next != ((void*)0)) {





   if (VAR_27->bge_forced_collapse == 1)
    VAR_33 = FUNC_10(VAR_33, VAR_25);
   else
    VAR_33 = FUNC_9(VAR_33, VAR_25,
        VAR_27->bge_forced_collapse);
   if (VAR_33 == ((void*)0))
    VAR_33 = *VAR_28;
   *VAR_28 = VAR_33;
  }
 }

 VAR_31 = VAR_27->bge_cdata.bge_tx_dmamap[VAR_34];
 VAR_40 = FUNC_6(VAR_27->bge_cdata.bge_tx_mtag, VAR_31, VAR_33, VAR_30,
     &VAR_38, VAR_15);
 if (VAR_40 == VAR_20) {
  VAR_33 = FUNC_9(VAR_33, VAR_25, VAR_4);
  if (VAR_33 == ((void*)0)) {
   FUNC_11(*VAR_28);
   *VAR_28 = ((void*)0);
   return (VAR_22);
  }
  *VAR_28 = VAR_33;
  VAR_40 = FUNC_6(VAR_27->bge_cdata.bge_tx_mtag, VAR_31,
      VAR_33, VAR_30, &VAR_38, VAR_15);
  if (VAR_40) {
   FUNC_11(VAR_33);
   *VAR_28 = ((void*)0);
   return (VAR_40);
  }
 } else if (VAR_40 != 0)
  return (VAR_40);


 if (VAR_27->bge_txcnt + VAR_38 >= VAR_12) {
  FUNC_8(VAR_27->bge_cdata.bge_tx_mtag, VAR_31);
  return (VAR_22);
 }

 FUNC_7(VAR_27->bge_cdata.bge_tx_mtag, VAR_31, VAR_14);

 if (VAR_33->m_flags & VAR_26) {
  VAR_35 |= VAR_11;
  VAR_37 = VAR_33->m_pkthdr.ether_vtag;
 }

 if (VAR_27->bge_asicrev == VAR_0 &&
     (VAR_33->m_pkthdr.csum_flags & VAR_18) != 0) {






  for (VAR_39 = 0; ; VAR_39++) {
   VAR_32 = &VAR_27->bge_ldata.bge_tx_ring[VAR_34];
   VAR_32->bge_addr.bge_addr_lo = FUNC_1(VAR_30[VAR_39].ds_addr);
   VAR_32->bge_addr.bge_addr_hi = FUNC_0(VAR_30[VAR_39].ds_addr);
   VAR_32->bge_len = VAR_30[VAR_39].ds_len;
   if (VAR_32->bge_addr.bge_addr_lo + VAR_30[VAR_39].ds_len + VAR_36 <
       VAR_32->bge_addr.bge_addr_lo)
    break;
   VAR_32->bge_flags = VAR_35;
   VAR_32->bge_vlan_tag = VAR_37;
   VAR_32->bge_mss = VAR_36;
   if (VAR_39 == VAR_38 - 1)
    break;
   FUNC_2(VAR_34, VAR_12);
  }
  if (VAR_39 != VAR_38 - 1) {
   FUNC_7(VAR_27->bge_cdata.bge_tx_mtag, VAR_31,
       VAR_13);
   FUNC_8(VAR_27->bge_cdata.bge_tx_mtag, VAR_31);
   FUNC_11(*VAR_28);
   *VAR_28 = ((void*)0);
   return (VAR_21);
  }
 } else {
  for (VAR_39 = 0; ; VAR_39++) {
   VAR_32 = &VAR_27->bge_ldata.bge_tx_ring[VAR_34];
   VAR_32->bge_addr.bge_addr_lo = FUNC_1(VAR_30[VAR_39].ds_addr);
   VAR_32->bge_addr.bge_addr_hi = FUNC_0(VAR_30[VAR_39].ds_addr);
   VAR_32->bge_len = VAR_30[VAR_39].ds_len;
   VAR_32->bge_flags = VAR_35;
   VAR_32->bge_vlan_tag = VAR_37;
   VAR_32->bge_mss = VAR_36;
   if (VAR_39 == VAR_38 - 1)
    break;
   FUNC_2(VAR_34, VAR_12);
  }
 }


 VAR_32->bge_flags |= VAR_7;






 VAR_27->bge_cdata.bge_tx_dmamap[*VAR_29] = VAR_27->bge_cdata.bge_tx_dmamap[VAR_34];
 VAR_27->bge_cdata.bge_tx_dmamap[VAR_34] = VAR_31;
 VAR_27->bge_cdata.bge_tx_chain[VAR_34] = VAR_33;
 VAR_27->bge_txcnt += VAR_38;

 FUNC_2(VAR_34, VAR_12);
 *VAR_29 = VAR_34;

 return (0);
}
