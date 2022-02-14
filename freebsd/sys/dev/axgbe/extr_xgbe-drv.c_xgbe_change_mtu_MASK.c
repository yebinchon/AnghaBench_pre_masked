
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int rx_buf_size; } ;
struct ifnet {int if_mtu; struct xgbe_prv_data* if_softc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ifnet*,int) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

int FUNC_3(struct ifnet *VAR_0, int VAR_1)
{
 struct xgbe_prv_data *VAR_2 = VAR_0->if_softc;
 int VAR_3;

 FUNC_0("-->xgbe_change_mtu\n");

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return -VAR_3;

 VAR_2->rx_buf_size = VAR_3;
 VAR_0->if_mtu = VAR_1;

 FUNC_2(VAR_2);

 FUNC_0("<--xgbe_change_mtu\n");

 return 0;
}
