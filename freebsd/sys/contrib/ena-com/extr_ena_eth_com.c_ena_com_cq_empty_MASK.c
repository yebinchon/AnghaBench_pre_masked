
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_eth_io_rx_cdesc_base {int dummy; } ;
struct ena_com_io_cq {int dummy; } ;


 struct ena_eth_io_rx_cdesc_base* FUNC_0 (struct ena_com_io_cq*) ;

bool FUNC_1(struct ena_com_io_cq *VAR_0)
{
 struct ena_eth_io_rx_cdesc_base *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return 0;
 else
  return 1;
}
