
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mac_configuration_cmd {int dummy; } ;
struct ecore_raw_obj {scalar_t__ rdata; } ;
struct ecore_vlan_mac_obj {struct ecore_raw_obj raw; } ;
struct TYPE_5__ {int vlan; int mac; } ;
struct TYPE_6__ {TYPE_1__ vlan_mac; } ;
struct TYPE_7__ {scalar_t__ cmd; TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ vlan_mac; } ;
struct ecore_exeq_elem {TYPE_4__ cmd_data; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mac_configuration_cmd*,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bxe_softc*,struct ecore_vlan_mac_obj*,int ,int,int,int ,int ,int ,struct mac_configuration_cmd*) ;

__attribute__((used)) static void FUNC_2(struct bxe_softc *VAR_5,
           struct ecore_vlan_mac_obj *VAR_6,
           struct ecore_exeq_elem *VAR_7,
           int VAR_8, int VAR_9)
{
 struct ecore_raw_obj *VAR_10 = &VAR_6->raw;
 struct mac_configuration_cmd *VAR_11 =
  (struct mac_configuration_cmd *)(VAR_10->rdata);



 bool VAR_12 = (VAR_7->cmd_data.vlan_mac.cmd == VAR_1) ?
  VAR_4 : VAR_3;


 FUNC_0(VAR_11, 0, sizeof(*VAR_11));

 FUNC_1(VAR_5, VAR_6, VAR_0,
         VAR_9, VAR_12,
         VAR_7->cmd_data.vlan_mac.u.vlan_mac.mac,
         VAR_7->cmd_data.vlan_mac.u.vlan_mac.vlan,
         VAR_2, VAR_11);
}
