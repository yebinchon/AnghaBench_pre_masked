
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int flow_ctrl_supported; } ;
struct al_eth_adapter {TYPE_1__ link_config; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(struct al_eth_adapter *VAR_2)
{
 uint8_t VAR_3;

 VAR_3 = VAR_1;
 VAR_3 |= VAR_0;

 VAR_2->link_config.flow_ctrl_supported = VAR_3;
}
