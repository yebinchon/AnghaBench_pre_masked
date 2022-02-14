
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ena_eth_io_rx_desc {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct ena_eth_io_rx_desc *VAR_2, uint8_t VAR_3)
{
 VAR_2->ctrl |= (VAR_3 << VAR_1) & VAR_0;
}
