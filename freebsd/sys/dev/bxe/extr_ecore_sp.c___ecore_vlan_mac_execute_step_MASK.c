
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct ecore_vlan_mac_obj {TYPE_1__ exe_queue; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct bxe_softc*,struct ecore_vlan_mac_obj*,unsigned long) ;
 int FUNC_4 (struct bxe_softc*,struct ecore_vlan_mac_obj*) ;
 int FUNC_5 (struct bxe_softc*,TYPE_1__*,unsigned long*) ;

__attribute__((used)) static int FUNC_6(struct bxe_softc *VAR_2,
      struct ecore_vlan_mac_obj *VAR_3,
      unsigned long *VAR_4)
{
 int VAR_5 = VAR_1;

 FUNC_1(&VAR_3->exe_queue.lock);

 FUNC_0(VAR_2, "vlan_mac_execute_step - trying to take writer lock\n");
 VAR_5 = FUNC_4(VAR_2, VAR_3);

 if (VAR_5 != VAR_1) {
  FUNC_3(VAR_2, VAR_3, *VAR_4);




  VAR_5 = VAR_0;
 } else {
  VAR_5 = FUNC_5(VAR_2, &VAR_3->exe_queue, VAR_4);
 }
 FUNC_2(&VAR_3->exe_queue.lock);

 return VAR_5;
}
