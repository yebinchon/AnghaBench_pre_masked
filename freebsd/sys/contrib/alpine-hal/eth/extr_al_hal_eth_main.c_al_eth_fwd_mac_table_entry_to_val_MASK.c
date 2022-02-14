
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_eth_fwd_mac_table_entry {scalar_t__ filter; int udma_mask; int qid; scalar_t__ rx_valid; int tx_target; scalar_t__ tx_valid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static uint32_t FUNC_0(struct al_eth_fwd_mac_table_entry *VAR_10)
{
 uint32_t VAR_11 = 0;

 VAR_11 |= (VAR_10->filter == VAR_0) ? VAR_2 : 0;
 VAR_11 |= ((VAR_10->udma_mask << VAR_6) &
     VAR_5);

 VAR_11 |= ((VAR_10->qid << VAR_4) &
     VAR_3);

 VAR_11 |= (VAR_10->rx_valid == VAR_0) ? VAR_1 : 0;

 VAR_11 |= ((VAR_10->tx_target << VAR_9) &
     VAR_8);

 VAR_11 |= (VAR_10->tx_valid == VAR_0) ? VAR_7 : 0;

 return VAR_11;
}
