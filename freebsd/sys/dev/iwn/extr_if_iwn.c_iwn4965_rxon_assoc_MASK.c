
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_softc {struct iwn_rxon* rxon; } ;
struct iwn_rxon {int rxchain; int ht_dual_mask; int ht_single_mask; int cck_mask; int ofdm_mask; int filter; int flags; } ;
struct iwn4965_rxon_assoc {scalar_t__ reserved; int rxchain; int ht_dual_mask; int ht_single_mask; int cck_mask; int ofdm_mask; int filter; int flags; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct iwn_softc*,int ,struct iwn4965_rxon_assoc*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct iwn_softc *VAR_1, int VAR_2)
{
 struct iwn4965_rxon_assoc VAR_3;
 struct iwn_rxon *VAR_4 = VAR_1->rxon;

 VAR_3.flags = VAR_4->flags;
 VAR_3.filter = VAR_4->filter;
 VAR_3.ofdm_mask = VAR_4->ofdm_mask;
 VAR_3.cck_mask = VAR_4->cck_mask;
 VAR_3.ht_single_mask = VAR_4->ht_single_mask;
 VAR_3.ht_dual_mask = VAR_4->ht_dual_mask;
 VAR_3.rxchain = VAR_4->rxchain;
 VAR_3.reserved = 0;

 return (FUNC_0(VAR_1, VAR_0, &VAR_3, sizeof(VAR_3), VAR_2));
}
