
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct al_eth_adapter {scalar_t__ board_type; int hal_adapter; int stats_mtx; int stats_callout; scalar_t__ internal_pcie_base; TYPE_1__* netdev; } ;
struct TYPE_2__ {int if_mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct al_eth_adapter*,int ) ;
 int FUNC_1 (struct al_eth_adapter*) ;
 int FUNC_2 (struct al_eth_adapter*) ;
 int FUNC_3 (struct al_eth_adapter*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct al_eth_adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct al_eth_adapter*) ;
 int FUNC_8 (struct al_eth_adapter*) ;
 int VAR_4 ;
 int FUNC_9 (int *,int ,int ,void*) ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct al_eth_adapter *VAR_6)
{

 FUNC_2(VAR_6);
 FUNC_1(VAR_6);
 FUNC_0(VAR_6, VAR_6->netdev->if_mtu);
 FUNC_8(VAR_6);
 FUNC_7(VAR_6);
 FUNC_5(VAR_6);


 if ((VAR_6->board_type == VAR_0) ||
     (VAR_6->board_type == VAR_1)) {
  FUNC_4((uint32_t*)VAR_6->internal_pcie_base +
      VAR_3, VAR_2);
 }

 FUNC_3(VAR_6);

 FUNC_10(&VAR_6->stats_mtx);
 FUNC_9(&VAR_6->stats_callout, VAR_5, VAR_4, (void*)VAR_6);
 FUNC_11(&VAR_6->stats_mtx);

 FUNC_6(&VAR_6->hal_adapter);
}
