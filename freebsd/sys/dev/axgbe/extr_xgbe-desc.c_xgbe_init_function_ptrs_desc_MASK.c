
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_desc_if {int wrapper_rx_desc_init; int wrapper_tx_desc_init; int unmap_rdata; int map_rx_buffer; int map_tx_skb; int free_ring_resources; int alloc_ring_resources; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_1(struct xgbe_desc_if *VAR_7)
{
 FUNC_0("-->xgbe_init_function_ptrs_desc\n");

 VAR_7->alloc_ring_resources = VAR_0;
 VAR_7->free_ring_resources = VAR_1;
 VAR_7->map_tx_skb = VAR_3;
 VAR_7->map_rx_buffer = VAR_2;
 VAR_7->unmap_rdata = VAR_4;
 VAR_7->wrapper_tx_desc_init = VAR_6;
 VAR_7->wrapper_rx_desc_init = VAR_5;

 FUNC_0("<--xgbe_init_function_ptrs_desc\n");
}
