
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_desc_if {int (* free_ring_resources ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int dev_state; struct xgbe_desc_if desc_if; } ;
struct ifnet {struct xgbe_prv_data* if_softc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;

int FUNC_5(struct ifnet *VAR_1)
{
 struct xgbe_prv_data *VAR_2 = VAR_1->if_softc;
 struct xgbe_desc_if *VAR_3 = &VAR_2->desc_if;

 FUNC_0("-->xgbe_close\n");


 FUNC_4(VAR_2);


 VAR_3->free_ring_resources(VAR_2);


 FUNC_3(VAR_2);

 FUNC_1(VAR_0, &VAR_2->dev_state);

 FUNC_0("<--xgbe_close\n");

 return 0;
}
