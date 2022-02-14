
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_adapter {int if_transmit; } ;
struct ifnet {int if_capenable; int if_transmit; } ;


 int VAR_0 ;
 struct netmap_adapter* FUNC_0 (struct ifnet*) ;
 int VAR_1 ;

void
FUNC_1(struct ifnet *VAR_2)
{
 struct netmap_adapter *VAR_3 = FUNC_0(VAR_2);

 VAR_3->if_transmit = VAR_2->if_transmit;
 VAR_2->if_transmit = VAR_1;
 VAR_2->if_capenable |= VAR_0;
}
