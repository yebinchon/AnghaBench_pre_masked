
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_txq {size_t ptr_mask; struct sfxge_tx_mapping* stmp; } ;
struct sfxge_tx_mapping {scalar_t__ flags; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(struct sfxge_txq *VAR_0, struct sfxge_tx_mapping **VAR_1)
{
 FUNC_0((*VAR_1)->flags == 0, ("stmp flags are not 0"));
 if (FUNC_1(*VAR_1 ==
       &VAR_0->stmp[VAR_0->ptr_mask]))
  *VAR_1 = &VAR_0->stmp[0];
 else
  (*VAR_1)++;
}
