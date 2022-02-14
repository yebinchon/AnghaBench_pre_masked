
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_data {int dummy; } ;
struct xgbe_ring {unsigned int rdesc_count; } ;
struct xgbe_desc_if {int (* unmap_rdata ) (struct xgbe_prv_data*,struct xgbe_ring_data*) ;} ;
struct xgbe_prv_data {unsigned int channel_count; struct xgbe_channel* channel; struct xgbe_desc_if desc_if; } ;
struct xgbe_channel {struct xgbe_ring* tx_ring; } ;


 int FUNC_0 (char*) ;
 struct xgbe_ring_data* FUNC_1 (struct xgbe_ring*,unsigned int) ;
 int FUNC_2 (struct xgbe_prv_data*,struct xgbe_ring_data*) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_desc_if *VAR_1 = &VAR_0->desc_if;
 struct xgbe_channel *VAR_2;
 struct xgbe_ring *VAR_3;
 struct xgbe_ring_data *VAR_4;
 unsigned int VAR_5, VAR_6;

 FUNC_0("-->xgbe_free_tx_data\n");

 VAR_2 = VAR_0->channel;
 for (VAR_5 = 0; VAR_5 < VAR_0->channel_count; VAR_5++, VAR_2++) {
  VAR_3 = VAR_2->tx_ring;
  if (!VAR_3)
   break;

  for (VAR_6 = 0; VAR_6 < VAR_3->rdesc_count; VAR_6++) {
   VAR_4 = FUNC_1(VAR_3, VAR_6);
   VAR_1->unmap_rdata(VAR_0, VAR_4);
  }
 }

 FUNC_0("<--xgbe_free_tx_data\n");
}
