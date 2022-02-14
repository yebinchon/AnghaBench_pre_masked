
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_desc_if {int (* alloc_ring_resources ) (struct xgbe_prv_data*) ;int (* free_ring_resources ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int rx_buf_size; int dev_state; int restart_work; int service_work; struct xgbe_desc_if desc_if; } ;
struct ifnet {struct xgbe_prv_data* if_softc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ,struct xgbe_prv_data*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct ifnet*,int ) ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (struct xgbe_prv_data*) ;
 int FUNC_11 (struct xgbe_prv_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (struct xgbe_prv_data*) ;

int FUNC_13(struct ifnet *VAR_3)
{
 struct xgbe_prv_data *VAR_4 = VAR_3->if_softc;
 struct xgbe_desc_if *VAR_5 = &VAR_4->desc_if;
 int VAR_6;

 FUNC_0("-->xgbe_open\n");


 VAR_6 = FUNC_11(VAR_4);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_8(VAR_3, FUNC_3(VAR_3));
 if (VAR_6 < 0) {
  goto err_ptpclk;
 }
 VAR_4->rx_buf_size = VAR_6;


 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6) {
  FUNC_4("xgbe_alloc_channels failed\n");
  goto err_ptpclk;
 }


 VAR_6 = VAR_5->alloc_ring_resources(VAR_4);
 if (VAR_6) {
  FUNC_4("desc_if->alloc_ring_resources failed\n");
  goto err_channels;
 }

 FUNC_1(&VAR_4->service_work, 0, VAR_2, VAR_4);
 FUNC_1(&VAR_4->restart_work, 0, VAR_1, VAR_4);
 FUNC_10(VAR_4);

 VAR_6 = FUNC_12(VAR_4);
 if (VAR_6)
  goto err_rings;

 FUNC_2(VAR_0, &VAR_4->dev_state);

 FUNC_0("<--xgbe_open\n");

 return 0;

err_rings:
 VAR_5->free_ring_resources(VAR_4);

err_channels:
 FUNC_9(VAR_4);

err_ptpclk:

 return VAR_6;
}
