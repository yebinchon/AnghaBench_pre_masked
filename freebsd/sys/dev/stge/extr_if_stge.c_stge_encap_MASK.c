
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct stge_txdesc {int tx_dmamap; struct mbuf* tx_m; } ;
struct stge_tfd {void* tfd_control; TYPE_2__* tfd_frags; } ;
struct TYPE_10__ {int stge_tx_prod; scalar_t__ stge_tx_cnt; int stge_tx_ring_map; int stge_tx_ring_tag; int stge_tx_tag; int stge_txbusyq; int stge_txfreeq; } ;
struct TYPE_7__ {struct stge_tfd* stge_tx_ring; } ;
struct stge_softc {TYPE_4__ sc_cdata; TYPE_1__ sc_rdata; } ;
struct TYPE_9__ {int csum_flags; int ether_vtag; } ;
struct mbuf {int m_flags; TYPE_3__ m_pkthdr; } ;
struct TYPE_11__ {int ds_len; int ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;
struct TYPE_8__ {void* frag_word0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 struct stge_txdesc* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct stge_txdesc*,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_11 ;
 int FUNC_5 (struct stge_softc*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (int ) ;
 int VAR_19 ;
 int FUNC_9 (int ) ;
 int VAR_20 ;
 int FUNC_10 (int ,int ,struct mbuf*,TYPE_5__*,int*,int ) ;
 int FUNC_11 (int ,int ,int) ;
 void* FUNC_12 (int) ;
 struct mbuf* FUNC_13 (struct mbuf*,int ,int) ;
 int FUNC_14 (struct mbuf*) ;
 int VAR_21 ;

__attribute__((used)) static int
FUNC_15(struct stge_softc *VAR_22, struct mbuf **VAR_23)
{
 struct stge_txdesc *VAR_24;
 struct stge_tfd *VAR_25;
 struct mbuf *VAR_26;
 bus_dma_segment_t VAR_27[VAR_12];
 int VAR_28, VAR_29, VAR_30, VAR_31;
 uint64_t VAR_32, VAR_33;

 FUNC_5(VAR_22);

 if ((VAR_24 = FUNC_2(&VAR_22->sc_cdata.stge_txfreeq)) == ((void*)0))
  return (VAR_7);

 VAR_28 = FUNC_10(VAR_22->sc_cdata.stge_tx_tag,
     VAR_24->tx_dmamap, *VAR_23, VAR_27, &VAR_30, 0);
 if (VAR_28 == VAR_5) {
  VAR_26 = FUNC_13(*VAR_23, VAR_9, VAR_12);
  if (VAR_26 == ((void*)0)) {
   FUNC_14(*VAR_23);
   *VAR_23 = ((void*)0);
   return (VAR_8);
  }
  *VAR_23 = VAR_26;
  VAR_28 = FUNC_10(VAR_22->sc_cdata.stge_tx_tag,
      VAR_24->tx_dmamap, *VAR_23, VAR_27, &VAR_30, 0);
  if (VAR_28 != 0) {
   FUNC_14(*VAR_23);
   *VAR_23 = ((void*)0);
   return (VAR_28);
  }
 } else if (VAR_28 != 0)
  return (VAR_28);
 if (VAR_30 == 0) {
  FUNC_14(*VAR_23);
  *VAR_23 = ((void*)0);
  return (VAR_6);
 }

 VAR_26 = *VAR_23;
 VAR_32 = 0;
 if ((VAR_26->m_pkthdr.csum_flags & VAR_11) != 0) {
  if (VAR_26->m_pkthdr.csum_flags & VAR_2)
   VAR_32 |= VAR_15;
  if (VAR_26->m_pkthdr.csum_flags & VAR_3)
   VAR_32 |= VAR_16;
  else if (VAR_26->m_pkthdr.csum_flags & VAR_4)
   VAR_32 |= VAR_18;
 }

 VAR_31 = VAR_22->sc_cdata.stge_tx_prod;
 VAR_25 = &VAR_22->sc_rdata.stge_tx_ring[VAR_31];
 for (VAR_29 = 0; VAR_29 < VAR_30; VAR_29++)
  VAR_25->tfd_frags[VAR_29].frag_word0 =
      FUNC_12(FUNC_0(VAR_27[VAR_29].ds_addr) |
      FUNC_1(VAR_27[VAR_29].ds_len));
 VAR_22->sc_cdata.stge_tx_cnt++;

 VAR_33 = FUNC_7(VAR_31) | FUNC_9(VAR_20) |
     FUNC_6(VAR_30) | VAR_32;
 if (VAR_22->sc_cdata.stge_tx_cnt >= VAR_13)
  VAR_33 |= VAR_17;


 VAR_22->sc_cdata.stge_tx_prod = (VAR_31 + 1) % VAR_14;


 if (VAR_26->m_flags & VAR_10)
  VAR_33 |= (VAR_19 | FUNC_8(VAR_26->m_pkthdr.ether_vtag));
 VAR_25->tfd_control = FUNC_12(VAR_33);


 FUNC_4(&VAR_22->sc_cdata.stge_txfreeq, VAR_21);
 FUNC_3(&VAR_22->sc_cdata.stge_txbusyq, VAR_24, VAR_21);
 VAR_24->tx_m = VAR_26;


 FUNC_11(VAR_22->sc_cdata.stge_tx_tag, VAR_24->tx_dmamap,
     VAR_1);
 FUNC_11(VAR_22->sc_cdata.stge_tx_ring_tag,
     VAR_22->sc_cdata.stge_tx_ring_map,
     VAR_0 | VAR_1);

 return (0);
}
