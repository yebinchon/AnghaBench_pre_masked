
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_adapter {int udma_res; int mac_res; int ec_res; int irq_res; int wd_mtx; int stats_mtx; int netdev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct al_eth_adapter*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct al_eth_adapter* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct al_eth_adapter *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 FUNC_3(VAR_3->netdev);

 FUNC_4(&VAR_3->stats_mtx);
 FUNC_4(&VAR_3->wd_mtx);

 FUNC_0(VAR_3);

 FUNC_1(VAR_2, VAR_0, 0, VAR_3->irq_res);
 FUNC_1(VAR_2, VAR_1, 0, VAR_3->ec_res);
 FUNC_1(VAR_2, VAR_1, 0, VAR_3->mac_res);
 FUNC_1(VAR_2, VAR_1, 0, VAR_3->udma_res);

 return (0);
}
