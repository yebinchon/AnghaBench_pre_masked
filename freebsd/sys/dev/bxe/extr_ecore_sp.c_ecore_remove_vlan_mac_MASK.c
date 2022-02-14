
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* put_credit ) (TYPE_3__*) ;int (* get_credit ) (TYPE_3__*) ;} ;
union ecore_qable_obj {TYPE_3__ vlan_mac; } ;
struct TYPE_5__ {int cmd; int vlan_mac_flags; } ;
struct TYPE_6__ {TYPE_1__ vlan_mac; } ;
struct ecore_exeq_elem {TYPE_2__ cmd_data; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;



 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct bxe_softc *VAR_4,
      union ecore_qable_obj *VAR_5,
      struct ecore_exeq_elem *VAR_6)
{
 int VAR_7 = 0;


 if (FUNC_0(VAR_0,
      &VAR_6->cmd_data.vlan_mac.vlan_mac_flags))
  return VAR_2;

 switch (VAR_6->cmd_data.vlan_mac.cmd) {
 case 130:
 case 128:
  VAR_7 = VAR_5->vlan_mac.put_credit(&VAR_5->vlan_mac);
  break;
 case 129:
  VAR_7 = VAR_5->vlan_mac.get_credit(&VAR_5->vlan_mac);
  break;
 default:
  return VAR_1;
 }

 if (VAR_7 != VAR_3)
  return VAR_1;

 return VAR_2;
}
