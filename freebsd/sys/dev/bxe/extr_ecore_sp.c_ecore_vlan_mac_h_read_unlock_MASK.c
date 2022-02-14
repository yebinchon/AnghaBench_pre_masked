
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct ecore_vlan_mac_obj {TYPE_1__ exe_queue; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_vlan_mac_obj*) ;

void FUNC_3(struct bxe_softc *VAR_0,
      struct ecore_vlan_mac_obj *VAR_1)
{
 FUNC_0(&VAR_1->exe_queue.lock);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_1->exe_queue.lock);
}
