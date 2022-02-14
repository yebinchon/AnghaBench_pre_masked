
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct vi_info {struct port_info* pi; } ;
struct txpkts {int npkt; } ;
struct sge_eq {size_t pidx; size_t cidx; int sidx; size_t dbidx; size_t equeqidx; int equiq; int * desc; } ;
struct sge_txq {struct ifnet* ifp; struct sge_eq eq; } ;
struct port_info {struct adapter* adapter; } ;
struct mp_ring {int size; struct mbuf** items; struct sge_txq* cookie; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct ifnet {struct vi_info* if_softc; } ;
struct fw_eth_tx_pkts_wr {int equiq_to_len16; } ;
struct adapter {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t,size_t,int) ;
 int FUNC_2 (size_t,size_t,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mbuf*) ;
 size_t VAR_5 ;
 int FUNC_5 (struct sge_txq*) ;
 int FUNC_6 (struct sge_txq*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct mbuf*,struct txpkts*,size_t) ;
 scalar_t__ FUNC_9 (int *,int ,int) ;
 int FUNC_10 (struct sge_eq*) ;
 size_t FUNC_11 (int ,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct mbuf*) ;
 int FUNC_14 (struct mbuf*) ;
 int FUNC_15 (struct mbuf*) ;
 scalar_t__ FUNC_16 (struct sge_txq*,int) ;
 int FUNC_17 (struct adapter*,struct sge_eq*,size_t) ;
 int FUNC_18 (struct sge_eq*) ;
 scalar_t__ FUNC_19 (struct mbuf*,struct mbuf*,struct txpkts*,size_t) ;
 scalar_t__ FUNC_20 (struct fw_eth_tx_pkts_wr*) ;
 size_t FUNC_21 (struct sge_txq*,void*,struct mbuf*,size_t) ;
 size_t FUNC_22 (struct adapter*,struct sge_txq*,void*,struct mbuf*,size_t) ;
 size_t FUNC_23 (struct sge_txq*,void*,struct mbuf*,size_t) ;
 size_t FUNC_24 (struct sge_txq*,struct fw_eth_tx_pkts_wr*,struct mbuf*,struct txpkts*,size_t) ;

__attribute__((used)) static u_int
FUNC_25(struct mp_ring *VAR_6, u_int VAR_7, u_int VAR_8)
{
 struct sge_txq *VAR_9 = VAR_6->cookie;
 struct sge_eq *VAR_10 = &VAR_9->eq;
 struct ifnet *VAR_11 = VAR_9->ifp;
 struct vi_info *VAR_12 = VAR_11->if_softc;
 struct port_info *VAR_13 = VAR_12->pi;
 struct adapter *VAR_14 = VAR_13->adapter;
 u_int VAR_15, VAR_16;
 u_int VAR_17, VAR_18;
 u_int VAR_19, VAR_20;
 struct mbuf *VAR_21, *VAR_22;
 struct txpkts VAR_23;
 struct fw_eth_tx_pkts_wr *VAR_24;

 VAR_16 = FUNC_1(VAR_8, VAR_7, VAR_6->size);
 FUNC_3(VAR_16 > 0);
 VAR_15 = 0;

 FUNC_5(VAR_9);
 if (FUNC_7(FUNC_10(VAR_10))) {
  while (VAR_7 != VAR_8) {
   VAR_21 = VAR_6->items[VAR_7];
   FUNC_13(VAR_21);
   if (++VAR_7 == VAR_6->size)
    VAR_7 = 0;
  }
  FUNC_16(VAR_9, 2048);
  VAR_15 = VAR_16;
  goto done;
 }


 if (VAR_10->pidx == VAR_10->cidx)
  VAR_17 = VAR_10->sidx - 1;
 else
  VAR_17 = FUNC_1(VAR_10->cidx, VAR_10->pidx, VAR_10->sidx) - 1;
 VAR_18 = FUNC_1(VAR_10->pidx, VAR_10->dbidx, VAR_10->sidx);

 while (VAR_16 > 0) {

  VAR_21 = VAR_6->items[VAR_7];
  FUNC_4(VAR_21);
  FUNC_3(VAR_21->m_nextpkt == ((void*)0));

  if (VAR_17 < VAR_5) {
   VAR_17 += FUNC_16(VAR_9, 64);
   if (VAR_17 < FUNC_11(FUNC_15(VAR_21), VAR_0 / 16))
    break;
  }

  VAR_20 = VAR_7 + 1;
  if (FUNC_7(VAR_20 == VAR_6->size))
   VAR_20 = 0;

  VAR_24 = (void *)&VAR_10->desc[VAR_10->pidx];
  if (VAR_14->flags & VAR_3) {
   VAR_15++;
   VAR_16--;
   FUNC_0(VAR_11, VAR_21);
   VAR_19 = FUNC_22(VAR_14, VAR_9, (void *)VAR_24, VAR_21,
       VAR_17);
  } else if (VAR_16 > 1 &&
      FUNC_19(VAR_21, VAR_6->items[VAR_20], &VAR_23, VAR_17) == 0) {


   FUNC_3(VAR_23.npkt == 2);
   VAR_22 = VAR_6->items[VAR_20];
   FUNC_3(VAR_22->m_nextpkt == ((void*)0));
   FUNC_0(VAR_11, VAR_21);
   FUNC_0(VAR_11, VAR_22);
   VAR_21->m_nextpkt = VAR_22;

   if (FUNC_7(++VAR_20 == VAR_6->size))
    VAR_20 = 0;

   while (VAR_20 != VAR_8) {
    if (FUNC_8(VAR_6->items[VAR_20], &VAR_23,
        VAR_17) != 0)
     break;
    VAR_22->m_nextpkt = VAR_6->items[VAR_20];
    VAR_22 = VAR_22->m_nextpkt;
    FUNC_0(VAR_11, VAR_22);
    if (FUNC_7(++VAR_20 == VAR_6->size))
     VAR_20 = 0;
   }

   VAR_19 = FUNC_24(VAR_9, VAR_24, VAR_21, &VAR_23, VAR_17);
   VAR_15 += VAR_23.npkt;
   VAR_16 -= VAR_23.npkt;
  } else if (FUNC_14(VAR_21) & VAR_4) {
   VAR_15++;
   VAR_16--;
   VAR_19 = FUNC_21(VAR_9, (void *)VAR_24, VAR_21, VAR_17);
  } else {
   VAR_15++;
   VAR_16--;
   FUNC_0(VAR_11, VAR_21);
   VAR_19 = FUNC_23(VAR_9, (void *)VAR_24, VAR_21, VAR_17);
  }
  FUNC_3(VAR_19 >= 1 && VAR_19 <= VAR_17 && VAR_19 <= VAR_5);

  VAR_17 -= VAR_19;
  VAR_18 += VAR_19;
  FUNC_2(VAR_10->pidx, VAR_19, VAR_10->sidx);

  if (FUNC_20(VAR_24)) {
   if (FUNC_18(VAR_10) < VAR_10->sidx / 4 &&
       FUNC_9(&VAR_10->equiq, 0, 1)) {
    VAR_24->equiq_to_len16 |= FUNC_12(VAR_2 |
        VAR_1);
    VAR_10->equeqidx = VAR_10->pidx;
   } else if (FUNC_1(VAR_10->pidx, VAR_10->equeqidx, VAR_10->sidx) >=
       32) {
    VAR_24->equiq_to_len16 |= FUNC_12(VAR_1);
    VAR_10->equeqidx = VAR_10->pidx;
   }
  }

  if (VAR_18 >= 16 && VAR_16 >= 4) {
   FUNC_17(VAR_14, VAR_10, VAR_18);
   VAR_17 += FUNC_16(VAR_9, 4 * VAR_18);
   VAR_18 = 0;
  }

  VAR_7 = VAR_20;
 }
 if (VAR_18 != 0) {
  FUNC_17(VAR_14, VAR_10, VAR_18);
  FUNC_16(VAR_9, 32);
 }
done:
 FUNC_6(VAR_9);

 return (VAR_15);
}
