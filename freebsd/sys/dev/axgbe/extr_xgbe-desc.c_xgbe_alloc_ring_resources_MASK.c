
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; int rx_desc_count; int tx_desc_count; struct xgbe_channel* channel; } ;
struct xgbe_channel {int rx_ring; int tx_ring; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_channel *VAR_1;
 unsigned int VAR_2;
 int VAR_3;

 FUNC_0("-->xgbe_alloc_ring_resources\n");

 VAR_1 = VAR_0->channel;
 for (VAR_2 = 0; VAR_2 < VAR_0->channel_count; VAR_2++, VAR_1++) {
  VAR_3 = FUNC_3(VAR_0, VAR_1->tx_ring,
         VAR_0->tx_desc_count);
  if (VAR_3) {
   FUNC_1("error initializing Tx ring\n");
   goto err_ring;
  }

  VAR_3 = FUNC_3(VAR_0, VAR_1->rx_ring,
         VAR_0->rx_desc_count);
  if (VAR_3) {
   FUNC_1("error initializing Rx ring\n");
   goto err_ring;
  }
 }

 FUNC_0("<--xgbe_alloc_ring_resources\n");

 return 0;

err_ring:
 FUNC_2(VAR_0);

 return VAR_3;
}
