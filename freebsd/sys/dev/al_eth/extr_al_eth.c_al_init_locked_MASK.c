
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_eth_adapter {TYPE_1__* netdev; } ;
typedef TYPE_1__* if_t ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct al_eth_adapter*) ;
 int FUNC_1 (struct al_eth_adapter*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct al_eth_adapter *VAR_3 = VAR_2;
 if_t VAR_4 = VAR_3->netdev;
 int VAR_5 = 0;

 FUNC_0(VAR_3);
 VAR_5 = FUNC_1(VAR_3);

 VAR_4->if_drv_flags &= ~VAR_0;
 if (VAR_5 == 0)
  VAR_4->if_drv_flags |= VAR_1;
}
