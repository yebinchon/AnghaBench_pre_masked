
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_exe_queue_obj {scalar_t__ (* get ) (struct ecore_exe_queue_obj*,struct ecore_exeq_elem*) ;} ;
struct ecore_vlan_mac_obj {scalar_t__ (* put_credit ) (struct ecore_vlan_mac_obj*) ;struct ecore_vlan_mac_registry_elem* (* check_del ) (struct bxe_softc*,struct ecore_vlan_mac_obj*,int *) ;struct ecore_exe_queue_obj exe_queue; } ;
union ecore_qable_obj {struct ecore_vlan_mac_obj vlan_mac; } ;
struct ecore_vlan_mac_registry_elem {int dummy; } ;
struct TYPE_3__ {int vlan_mac_flags; int cmd; int u; } ;
struct TYPE_4__ {TYPE_1__ vlan_mac; } ;
struct ecore_exeq_elem {TYPE_2__ cmd_data; } ;
struct bxe_softc {int dummy; } ;
typedef int query_elem ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ecore_exeq_elem*,struct ecore_exeq_elem*,int) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_4 ;
 struct ecore_vlan_mac_registry_elem* FUNC_4 (struct bxe_softc*,struct ecore_vlan_mac_obj*,int *) ;
 scalar_t__ FUNC_5 (struct ecore_exe_queue_obj*,struct ecore_exeq_elem*) ;
 scalar_t__ FUNC_6 (struct ecore_exe_queue_obj*,struct ecore_exeq_elem*) ;
 scalar_t__ FUNC_7 (struct ecore_vlan_mac_obj*) ;

__attribute__((used)) static inline int FUNC_8(struct bxe_softc *VAR_5,
           union ecore_qable_obj *VAR_6,
           struct ecore_exeq_elem *VAR_7)
{
 struct ecore_vlan_mac_obj *VAR_8 = &VAR_6->vlan_mac;
 struct ecore_vlan_mac_registry_elem *VAR_9;
 struct ecore_exe_queue_obj *VAR_10 = &VAR_8->exe_queue;
 struct ecore_exeq_elem VAR_11;




 VAR_9 = VAR_8->check_del(VAR_5, VAR_8, &VAR_7->cmd_data.vlan_mac.u);
 if (!VAR_9) {
  FUNC_2(VAR_5, "DEL command is not allowed considering current registry state\n");
  return VAR_1;
 }




 FUNC_1(&VAR_11, VAR_7, sizeof(VAR_11));


 VAR_11.cmd_data.vlan_mac.cmd = VAR_4;
 if (VAR_10->get(VAR_10, &VAR_11)) {
  FUNC_0("There is a pending MOVE command already\n");
  return VAR_2;
 }


 if (VAR_10->get(VAR_10, VAR_7)) {
  FUNC_2(VAR_5, "There is a pending DEL command already\n");
  return VAR_1;
 }


 if (!(FUNC_3(VAR_0,
        &VAR_7->cmd_data.vlan_mac.vlan_mac_flags) ||
     VAR_8->put_credit(VAR_8))) {
  FUNC_0("Failed to return a credit\n");
  return VAR_2;
 }

 return VAR_3;
}
