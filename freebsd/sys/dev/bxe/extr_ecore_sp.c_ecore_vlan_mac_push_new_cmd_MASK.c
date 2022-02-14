
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmd; } ;
struct ecore_vlan_mac_ramrod_params {TYPE_2__ user_req; int ramrod_flags; struct ecore_vlan_mac_obj* vlan_mac_obj; } ;
struct ecore_vlan_mac_obj {int exe_queue; } ;
struct TYPE_3__ {int vlan_mac; } ;
struct ecore_exeq_elem {int cmd_len; TYPE_1__ cmd_data; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int *,TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

 int VAR_1 ;
 int FUNC_2 (struct bxe_softc*,int *,struct ecore_exeq_elem*,int) ;
 struct ecore_exeq_elem* FUNC_3 (struct bxe_softc*) ;

__attribute__((used)) static inline int FUNC_4(
 struct bxe_softc *VAR_2,
 struct ecore_vlan_mac_ramrod_params *VAR_3)
{
 struct ecore_exeq_elem *VAR_4;
 struct ecore_vlan_mac_obj *VAR_5 = VAR_3->vlan_mac_obj;
 bool VAR_6 = FUNC_1(VAR_1, &VAR_3->ramrod_flags);


 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4)
  return VAR_0;


 switch (VAR_3->user_req.cmd) {
 case 128:
  VAR_4->cmd_len = 2;
  break;
 default:
  VAR_4->cmd_len = 1;
 }


 FUNC_0(&VAR_4->cmd_data.vlan_mac, &VAR_3->user_req, sizeof(VAR_3->user_req));


 return FUNC_2(VAR_2, &VAR_5->exe_queue, VAR_4, VAR_6);
}
