
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sfxge_txq {int dummy; } ;
struct sfxge_softc {int if_flags; int txq_dynamic_cksum_toggle_supported; int txq_count; int* rx_indir_table; struct sfxge_txq** txq; } ;
struct TYPE_2__ {int csum_flags; int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_flags; scalar_t__ if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (struct mbuf*,int*) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct sfxge_txq*,struct mbuf*) ;

int
FUNC_7(struct ifnet *VAR_12, struct mbuf *VAR_13)
{
 struct sfxge_softc *VAR_14;
 struct sfxge_txq *VAR_15;
 int VAR_16;

 VAR_14 = (struct sfxge_softc *)VAR_12->if_softc;
 FUNC_0((VAR_12->if_flags & VAR_6) || (VAR_14->if_flags & VAR_6),
  ("interface not up"));


 if (VAR_14->txq_dynamic_cksum_toggle_supported |
     (VAR_13->m_pkthdr.csum_flags &
      (VAR_1 | VAR_3 | VAR_5 | VAR_4))) {
  int VAR_17 = 0;
  if (FUNC_1(VAR_13) != VAR_7) {
   uint32_t VAR_18 = VAR_13->m_pkthdr.flowid;
   uint32_t VAR_19 = VAR_18 % FUNC_3(VAR_14->rx_indir_table);

   VAR_17 = VAR_14->rx_indir_table[VAR_19];
  }





  VAR_17 += (VAR_14->txq_dynamic_cksum_toggle_supported == VAR_0) ?
    VAR_9 : 0;
  VAR_15 = VAR_14->txq[VAR_17];
 } else if (VAR_13->m_pkthdr.csum_flags & VAR_2) {
  VAR_15 = VAR_14->txq[VAR_8];
 } else {
  VAR_15 = VAR_14->txq[VAR_10];
 }

 VAR_16 = FUNC_6(VAR_15, VAR_13);
 if (VAR_16 != 0)
  FUNC_2(VAR_13);

 return (VAR_16);
}
