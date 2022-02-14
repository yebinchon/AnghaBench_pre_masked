
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int txdesc ;
struct ti_txdesc {struct mbuf* tx_m; int tx_dmamap; } ;
struct ti_tx_desc {int ti_flags; scalar_t__ ti_vlan_tag; int ti_len; int ti_addr; } ;
struct TYPE_8__ {int ti_txbusyq; int ti_txfreeq; int ti_tx_tag; } ;
struct TYPE_7__ {struct ti_tx_desc* ti_tx_ring; } ;
struct ti_softc {int ti_txcnt; int ti_tx_saved_prodidx; scalar_t__ ti_hwrev; TYPE_3__ ti_cdata; TYPE_2__ ti_rdata; } ;
struct TYPE_6__ {int csum_flags; scalar_t__ ether_vtag; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct TYPE_9__ {int ds_len; int ds_addr; } ;
typedef TYPE_4__ bus_dma_segment_t ;


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
 struct ti_txdesc* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ti_txdesc*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ,int ,struct mbuf*,TYPE_4__*,int*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ti_tx_desc*,int) ;
 struct mbuf* FUNC_8 (struct mbuf*,int ) ;
 int FUNC_9 (struct mbuf*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct ti_softc*,scalar_t__,int,struct ti_tx_desc*) ;
 int VAR_18 ;

__attribute__((used)) static int
FUNC_12(struct ti_softc *VAR_19, struct mbuf **VAR_20)
{
 struct ti_txdesc *VAR_21;
 struct ti_tx_desc *VAR_22;
 struct ti_tx_desc VAR_23;
 struct mbuf *VAR_24;
 bus_dma_segment_t VAR_25[VAR_15];
 uint16_t VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;

 if ((VAR_21 = FUNC_0(&VAR_19->ti_cdata.ti_txfreeq)) == ((void*)0))
  return (VAR_6);

 VAR_27 = FUNC_4(VAR_19->ti_cdata.ti_tx_tag, VAR_21->tx_dmamap,
     *VAR_20, VAR_25, &VAR_30, 0);
 if (VAR_27 == VAR_4) {
  VAR_24 = FUNC_8(*VAR_20, VAR_8);
  if (VAR_24 == ((void*)0)) {
   FUNC_9(*VAR_20);
   *VAR_20 = ((void*)0);
   return (VAR_7);
  }
  *VAR_20 = VAR_24;
  VAR_27 = FUNC_4(VAR_19->ti_cdata.ti_tx_tag,
      VAR_21->tx_dmamap, *VAR_20, VAR_25, &VAR_30, 0);
  if (VAR_27) {
   FUNC_9(*VAR_20);
   *VAR_20 = ((void*)0);
   return (VAR_27);
  }
 } else if (VAR_27 != 0)
  return (VAR_27);
 if (VAR_30 == 0) {
  FUNC_9(*VAR_20);
  *VAR_20 = ((void*)0);
  return (VAR_5);
 }

 if (VAR_19->ti_txcnt + VAR_30 >= VAR_17) {
  FUNC_6(VAR_19->ti_cdata.ti_tx_tag, VAR_21->tx_dmamap);
  return (VAR_6);
 }
 FUNC_5(VAR_19->ti_cdata.ti_tx_tag, VAR_21->tx_dmamap,
     VAR_0);

 VAR_24 = *VAR_20;
 VAR_26 = 0;
 if (VAR_24->m_pkthdr.csum_flags & VAR_1)
  VAR_26 |= VAR_11;
 if (VAR_24->m_pkthdr.csum_flags & (VAR_2 | VAR_3))
  VAR_26 |= VAR_12;

 VAR_28 = VAR_19->ti_tx_saved_prodidx;
 for (VAR_29 = 0; VAR_29 < VAR_30; VAR_29++) {
  if (VAR_19->ti_hwrev == VAR_14) {
   FUNC_7(&VAR_23, sizeof(VAR_23));
   VAR_22 = &VAR_23;
  } else
   VAR_22 = &VAR_19->ti_rdata.ti_tx_ring[VAR_28];
  FUNC_10(&VAR_22->ti_addr, VAR_25[VAR_29].ds_addr);
  VAR_22->ti_len = VAR_25[VAR_29].ds_len;
  VAR_22->ti_flags = VAR_26;
  if (VAR_24->m_flags & VAR_9) {
   VAR_22->ti_flags |= VAR_13;
   VAR_22->ti_vlan_tag = VAR_24->m_pkthdr.ether_vtag;
  } else {
   VAR_22->ti_vlan_tag = 0;
  }

  if (VAR_19->ti_hwrev == VAR_14)
   FUNC_11(VAR_19, VAR_16 + VAR_28 *
       sizeof(VAR_23), sizeof(VAR_23), &VAR_23);
  FUNC_3(VAR_28, VAR_17);
 }

 VAR_19->ti_tx_saved_prodidx = VAR_28;

 VAR_28 = (VAR_28 + VAR_17 - 1) % VAR_17;
 if (VAR_19->ti_hwrev == VAR_14) {
  VAR_23.ti_flags |= VAR_10;
  FUNC_11(VAR_19, VAR_16 + VAR_28 * sizeof(VAR_23),
      sizeof(VAR_23), &VAR_23);
 } else
  VAR_19->ti_rdata.ti_tx_ring[VAR_28].ti_flags |= VAR_10;

 FUNC_2(&VAR_19->ti_cdata.ti_txfreeq, VAR_18);
 FUNC_1(&VAR_19->ti_cdata.ti_txbusyq, VAR_21, VAR_18);
 VAR_21->tx_m = VAR_24;
 VAR_19->ti_txcnt += VAR_30;

 return (0);
}
