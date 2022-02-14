
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ena_eth_io_tx_cdesc {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ena_eth_io_tx_cdesc *VAR_1, uint8_t VAR_2)
{
 VAR_1->flags |= VAR_2 & VAR_0;
}
