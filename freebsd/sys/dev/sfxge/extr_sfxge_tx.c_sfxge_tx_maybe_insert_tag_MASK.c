
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct sfxge_txq {scalar_t__ hw_vlan_tci; size_t n_pend_desc; int common; int * pend_desc; } ;
struct sfxge_tx_mapping {int dummy; } ;
struct TYPE_2__ {scalar_t__ ether_vtag; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
typedef int efx_desc_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct sfxge_txq*,struct sfxge_tx_mapping**) ;

__attribute__((used)) static int
FUNC_3(struct sfxge_txq *VAR_1, struct mbuf *VAR_2,
     struct sfxge_tx_mapping **VAR_3)
{
 uint16_t VAR_4 = ((VAR_2->m_flags & VAR_0) ?
        VAR_2->m_pkthdr.ether_vtag :
        0);
 efx_desc_t *VAR_5;

 if (VAR_4 == VAR_1->hw_vlan_tci)
  return (0);

 VAR_5 = &VAR_1->pend_desc[VAR_1->n_pend_desc];
 FUNC_1(VAR_1->common, FUNC_0(VAR_4), VAR_5);
 VAR_1->hw_vlan_tci = VAR_4;
 VAR_1->n_pend_desc++;

 FUNC_2(VAR_1, VAR_3);

 return (1);
}
