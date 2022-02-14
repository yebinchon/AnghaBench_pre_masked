
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flow_ctrl_supported; int flow_ctrl_active; } ;
struct al_eth_adapter {TYPE_1__ link_config; } ;


 int FUNC_0 (struct al_eth_adapter*) ;

__attribute__((used)) static void
FUNC_1(struct al_eth_adapter *VAR_0)
{





 VAR_0->link_config.flow_ctrl_active =
     VAR_0->link_config.flow_ctrl_supported;

 FUNC_0(VAR_0);
}
