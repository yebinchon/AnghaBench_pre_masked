
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_tx_ring {int (* hn_txeof ) (struct hn_tx_ring*) ;scalar_t__ hn_has_txeof; } ;


 int FUNC_0 (struct hn_tx_ring*) ;

__attribute__((used)) static __inline void
FUNC_1(struct hn_tx_ring *VAR_0)
{
 VAR_0->hn_has_txeof = 0;
 VAR_0->hn_txeof(VAR_0);
}
