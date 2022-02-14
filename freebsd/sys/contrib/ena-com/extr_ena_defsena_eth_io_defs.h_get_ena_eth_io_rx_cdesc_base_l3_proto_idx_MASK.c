
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ena_eth_io_rx_cdesc_base {int status; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_0(const struct ena_eth_io_rx_cdesc_base *VAR_1)
{
 return VAR_1->status & VAR_0;
}
