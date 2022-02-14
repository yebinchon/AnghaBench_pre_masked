
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_exe_queue_obj {int exe_queue; struct ecore_exeq_elem* (* get ) (struct ecore_exe_queue_obj*,struct ecore_exeq_elem*) ;} ;
struct ecore_vlan_mac_obj {int (* get_credit ) (struct ecore_vlan_mac_obj*) ;int (* put_credit ) (struct ecore_vlan_mac_obj*) ;struct ecore_exe_queue_obj exe_queue; } ;
union ecore_qable_obj {struct ecore_vlan_mac_obj vlan_mac; } ;
struct TYPE_3__ {int cmd; int vlan_mac_flags; } ;
struct TYPE_4__ {TYPE_1__ vlan_mac; } ;
struct ecore_exeq_elem {int link; TYPE_2__ cmd_data; } ;
struct bxe_softc {int dummy; } ;
typedef int query ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ecore_exeq_elem*,struct ecore_exeq_elem*,int) ;
 int FUNC_3 (struct bxe_softc*,char*,char*) ;
 int FUNC_4 (int ,int *) ;


 int FUNC_5 (struct bxe_softc*,struct ecore_exeq_elem*) ;
 struct ecore_exeq_elem* FUNC_6 (struct ecore_exe_queue_obj*,struct ecore_exeq_elem*) ;
 int FUNC_7 (struct ecore_vlan_mac_obj*) ;
 int FUNC_8 (struct ecore_vlan_mac_obj*) ;

__attribute__((used)) static int FUNC_9(struct bxe_softc *VAR_2,
       union ecore_qable_obj *VAR_3,
       struct ecore_exeq_elem *VAR_4)
{
 struct ecore_exeq_elem VAR_5, *VAR_6;
 struct ecore_vlan_mac_obj *VAR_7 = &VAR_3->vlan_mac;
 struct ecore_exe_queue_obj *VAR_8 = &VAR_7->exe_queue;

 FUNC_2(&VAR_5, VAR_4, sizeof(VAR_5));

 switch (VAR_4->cmd_data.vlan_mac.cmd) {
 case 129:
  VAR_5.cmd_data.vlan_mac.cmd = 128;
  break;
 case 128:
  VAR_5.cmd_data.vlan_mac.cmd = 129;
  break;
 default:

  return 0;
 }


 VAR_6 = VAR_8->get(VAR_8, &VAR_5);
 if (VAR_6) {


  if (!FUNC_4(VAR_0,
         &VAR_6->cmd_data.vlan_mac.vlan_mac_flags)) {
   if ((VAR_5.cmd_data.vlan_mac.cmd ==
        129) && !VAR_7->put_credit(VAR_7)) {
    FUNC_0("Failed to return the credit for the optimized ADD command\n");
    return VAR_1;
   } else if (!VAR_7->get_credit(VAR_7)) {
    FUNC_0("Failed to recover the credit from the optimized DEL command\n");
    return VAR_1;
   }
  }

  FUNC_3(VAR_2, "Optimizing %s command\n",
     (VAR_4->cmd_data.vlan_mac.cmd == 129) ?
     "ADD" : "DEL");

  FUNC_1(&VAR_6->link, &VAR_8->exe_queue);
  FUNC_5(VAR_2, VAR_6);
  return 1;
 }

 return 0;
}
