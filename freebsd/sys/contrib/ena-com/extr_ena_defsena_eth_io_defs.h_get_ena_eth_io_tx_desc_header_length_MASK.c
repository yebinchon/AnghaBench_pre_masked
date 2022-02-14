
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ena_eth_io_tx_desc {int buff_addr_hi_hdr_sz; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline uint32_t FUNC_0(const struct ena_eth_io_tx_desc *VAR_2)
{
 return (VAR_2->buff_addr_hi_hdr_sz & VAR_0) >> VAR_1;
}
