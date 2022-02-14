
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_tx_ring {scalar_t__ hn_txdesc_avail; scalar_t__ hn_txdesc_cnt; int hn_txdesc_br; int hn_txlist_spin; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(struct hn_tx_ring *VAR_0)
{
 bool VAR_1 = 0;


 FUNC_1(&VAR_0->hn_txlist_spin);
 if (VAR_0->hn_txdesc_avail != VAR_0->hn_txdesc_cnt)
  VAR_1 = 1;
 FUNC_2(&VAR_0->hn_txlist_spin);




 return (VAR_1);
}
