
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct sfxge_txq {int hw_cksum_flags; size_t n_pend_desc; int common; int * pend_desc; } ;
struct sfxge_tx_mapping {int dummy; } ;
struct TYPE_2__ {int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef int efx_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (struct sfxge_txq*,struct sfxge_tx_mapping**) ;

__attribute__((used)) static int
FUNC_2(struct sfxge_txq *VAR_6, struct mbuf *VAR_7,
        struct sfxge_tx_mapping **VAR_8)
{
 uint16_t VAR_9;
 efx_desc_t *VAR_10;

 if (VAR_7->m_pkthdr.csum_flags &
     (VAR_0 | VAR_1 | VAR_3)) {





  VAR_9 = VAR_4 | VAR_5;
 } else if (VAR_7->m_pkthdr.csum_flags & VAR_2) {
  VAR_9 = VAR_4;
 } else {
  VAR_9 = 0;
 }

 if (VAR_9 == VAR_6->hw_cksum_flags)
  return (0);

 VAR_10 = &VAR_6->pend_desc[VAR_6->n_pend_desc];
 FUNC_0(VAR_6->common, VAR_9, VAR_10);
 VAR_6->hw_cksum_flags = VAR_9;
 VAR_6->n_pend_desc++;

 FUNC_1(VAR_6, VAR_8);

 return (1);
}
