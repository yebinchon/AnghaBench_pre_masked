
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_adapter {int max_rx_buff_alloc_size; int rx_mbuf_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct al_eth_adapter *VAR_4, int VAR_5)
{






 VAR_4->rx_mbuf_sz = VAR_0;
 if (VAR_5 > 2048) {
  if (VAR_4->max_rx_buff_alloc_size > 2048)
   VAR_4->rx_mbuf_sz = VAR_3;
  else
   return;
 }
 if (VAR_5 > 4096) {
  if (VAR_4->max_rx_buff_alloc_size > 4096)
   VAR_4->rx_mbuf_sz = VAR_2;
  else
   return;
 }
 if (VAR_5 > 9216) {
  if (VAR_4->max_rx_buff_alloc_size > 9216)
   VAR_4->rx_mbuf_sz = VAR_1;
  else
   return;
 }
}
