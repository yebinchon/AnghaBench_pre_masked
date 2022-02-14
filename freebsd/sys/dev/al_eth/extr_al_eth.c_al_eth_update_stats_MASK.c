
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_mac_stats {int dummy; } ;
struct al_eth_adapter {scalar_t__ up; int hal_adapter; struct al_eth_mac_stats mac_stats; } ;


 int FUNC_0 (int *,struct al_eth_mac_stats*) ;

__attribute__((used)) static void*
FUNC_1(struct al_eth_adapter *VAR_0)
{
 struct al_eth_mac_stats *VAR_1 = &VAR_0->mac_stats;

 if (VAR_0->up == 0)
  return (((void*)0));

 FUNC_0(&VAR_0->hal_adapter, VAR_1);

 return (((void*)0));
}
