
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_vlan_mac_registry_elem {int vlan_mac_flags; int u; int cam_offset; } ;
struct ecore_vlan_mac_obj {struct ecore_vlan_mac_registry_elem* (* check_del ) (struct bxe_softc*,struct ecore_vlan_mac_obj*,int *) ;int (* get_cam_offset ) (struct ecore_vlan_mac_obj*,int *) ;} ;
struct TYPE_3__ {int cmd; int u; int vlan_mac_flags; } ;
struct TYPE_4__ {TYPE_1__ vlan_mac; } ;
struct ecore_exeq_elem {TYPE_2__ cmd_data; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_vlan_mac_cmd { ____Placeholder_ecore_vlan_mac_cmd } ecore_vlan_mac_cmd ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,struct ecore_vlan_mac_registry_elem*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct bxe_softc*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ecore_vlan_mac_registry_elem* FUNC_4 (int,int ,struct bxe_softc*) ;
 int VAR_5 ;
 int FUNC_5 (struct ecore_vlan_mac_obj*,int *) ;
 struct ecore_vlan_mac_registry_elem* FUNC_6 (struct bxe_softc*,struct ecore_vlan_mac_obj*,int *) ;

__attribute__((used)) static inline int FUNC_7(
 struct bxe_softc *VAR_6,
 struct ecore_vlan_mac_obj *VAR_7,
 struct ecore_exeq_elem *VAR_8,
 bool VAR_9,
 struct ecore_vlan_mac_registry_elem **VAR_10)
{
 enum ecore_vlan_mac_cmd VAR_11 = VAR_8->cmd_data.vlan_mac.cmd;
 struct ecore_vlan_mac_registry_elem *VAR_12;


 if (!VAR_9 &&
     ((VAR_11 == VAR_3) || (VAR_11 == VAR_4))) {
  VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_5, VAR_6);
  if (!VAR_12)
   return VAR_1;


  if (!VAR_7->get_cam_offset(VAR_7, &VAR_12->cam_offset)) {



   FUNC_0(1);
   FUNC_1(VAR_6, VAR_12, sizeof(*VAR_12));
   return VAR_0;
  }

  FUNC_3(VAR_6, "Got cam offset %d\n", VAR_12->cam_offset);


  FUNC_2(&VAR_12->u, &VAR_8->cmd_data.vlan_mac.u,
     sizeof(VAR_12->u));


  VAR_12->vlan_mac_flags =
   VAR_8->cmd_data.vlan_mac.vlan_mac_flags;
 } else
  VAR_12 = VAR_7->check_del(VAR_6, VAR_7, &VAR_8->cmd_data.vlan_mac.u);

 *VAR_10 = VAR_12;
 return VAR_2;
}
