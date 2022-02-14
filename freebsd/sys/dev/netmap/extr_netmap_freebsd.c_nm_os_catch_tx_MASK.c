
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_adapter {int if_transmit; } ;
struct TYPE_2__ {struct netmap_adapter up; } ;
struct netmap_generic_adapter {TYPE_1__ up; } ;
struct ifnet {int if_transmit; } ;


 struct ifnet* FUNC_0 (struct netmap_generic_adapter*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int
FUNC_3(struct netmap_generic_adapter *VAR_1, int VAR_2)
{
 struct netmap_adapter *VAR_3 = &VAR_1->up.up;
 struct ifnet *VAR_4 = FUNC_0(VAR_1);

 FUNC_1();
 if (VAR_2) {
  VAR_3->if_transmit = VAR_4->if_transmit;
  VAR_4->if_transmit = VAR_0;
 } else {
  VAR_4->if_transmit = VAR_3->if_transmit;
 }
 FUNC_2();

 return 0;
}
