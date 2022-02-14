
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ena_eth_io_tx_meta_desc {int len_ctrl; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ena_eth_io_tx_meta_desc *VAR_1, uint32_t VAR_2)
{
 VAR_1->len_ctrl |= VAR_2 & VAR_0;
}
