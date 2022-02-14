
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mac_configuration_cmd {int dummy; } ;
struct ecore_raw_obj {int state; scalar_t__ rdata; } ;
struct ecore_vlan_mac_obj {struct ecore_raw_obj raw; } ;
struct TYPE_5__ {int mac; } ;
struct TYPE_6__ {TYPE_1__ mac; } ;
struct TYPE_7__ {scalar_t__ cmd; TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ vlan_mac; } ;
struct ecore_exeq_elem {TYPE_4__ cmd_data; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct mac_configuration_cmd*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bxe_softc*,struct ecore_vlan_mac_obj*,int ,int,int,int ,int ,int ,struct mac_configuration_cmd*) ;

__attribute__((used)) static void FUNC_2(struct bxe_softc *VAR_4,
      struct ecore_vlan_mac_obj *VAR_5,
      struct ecore_exeq_elem *VAR_6, int VAR_7,
      int VAR_8)
{
 struct ecore_raw_obj *VAR_9 = &VAR_5->raw;
 struct mac_configuration_cmd *VAR_10 =
  (struct mac_configuration_cmd *)(VAR_9->rdata);



 bool VAR_11 = (VAR_6->cmd_data.vlan_mac.cmd == VAR_0) ?
  VAR_3 : VAR_2;


 FUNC_0(VAR_10, 0, sizeof(*VAR_10));

 FUNC_1(VAR_4, VAR_5, VAR_9->state,
         VAR_8, VAR_11,
         VAR_6->cmd_data.vlan_mac.u.mac.mac, 0,
         VAR_1, VAR_10);
}
