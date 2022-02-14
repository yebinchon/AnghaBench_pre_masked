
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_tx_ring {scalar_t__ hn_txdone_cnt; int hn_has_txeof; } ;
struct hn_rx_ring {int hn_lro; } ;


 int FUNC_0 (struct hn_tx_ring*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct hn_rx_ring *VAR_0, struct hn_tx_ring *VAR_1)
{
 if (VAR_1 == ((void*)0) || !VAR_1->hn_has_txeof)
  return;

 VAR_1->hn_txdone_cnt = 0;
 FUNC_0(VAR_1);
}
