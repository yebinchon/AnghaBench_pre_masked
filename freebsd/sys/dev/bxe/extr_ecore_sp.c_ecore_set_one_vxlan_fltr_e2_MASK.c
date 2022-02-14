
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int imac_lsb; int imac_mid; int imac_msb; void* vni; int header; } ;
union eth_classify_rule_cmd {TYPE_5__ imac_vni; } ;
typedef int uint8_t ;
typedef void* uint32_t ;
struct eth_classify_rules_ramrod_data {int header; union eth_classify_rule_cmd* rules; } ;
struct ecore_raw_obj {int state; int cid; scalar_t__ rdata; } ;
struct ecore_vlan_mac_obj {struct ecore_raw_obj raw; } ;
struct TYPE_6__ {int * innermac; void* vni; } ;
struct TYPE_7__ {TYPE_1__ vxlan_fltr; } ;
struct TYPE_8__ {int cmd; struct ecore_vlan_mac_obj* target_obj; TYPE_2__ u; } ;
struct TYPE_9__ {TYPE_3__ vlan_mac; } ;
struct ecore_exeq_elem {TYPE_4__ cmd_data; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_vlan_mac_cmd { ____Placeholder_ecore_vlan_mac_cmd } ecore_vlan_mac_cmd ;


 int VAR_0 ;
 int FUNC_0 (struct eth_classify_rules_ramrod_data*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_vlan_mac_obj*,int,int ,int *) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_4(struct bxe_softc *VAR_5,
      struct ecore_vlan_mac_obj *VAR_6,
      struct ecore_exeq_elem *VAR_7,
      int VAR_8, int VAR_9)
{
 struct ecore_raw_obj *VAR_10 = &VAR_6->raw;
 struct eth_classify_rules_ramrod_data *VAR_11 =
  (struct eth_classify_rules_ramrod_data *)(VAR_10->rdata);
 int VAR_12 = VAR_8 + 1;
 union eth_classify_rule_cmd *VAR_13 = &VAR_11->rules[VAR_8];
 enum ecore_vlan_mac_cmd VAR_14 = VAR_7->cmd_data.vlan_mac.cmd;
 bool VAR_15 = (VAR_14 == VAR_1) ? VAR_4 : VAR_3;
 uint32_t VAR_16 = VAR_7->cmd_data.vlan_mac.u.vxlan_fltr.vni;
 uint8_t *VAR_17 = VAR_7->cmd_data.vlan_mac.u.vxlan_fltr.innermac;


 if (VAR_8 == 0)
  FUNC_0(VAR_11, 0, sizeof(*VAR_11));


 FUNC_2(VAR_5, VAR_6, VAR_15,
          VAR_0,
          &VAR_13->imac_vni.header);


 VAR_13->imac_vni.vni = VAR_16;
 FUNC_1(&VAR_13->imac_vni.imac_msb,
         &VAR_13->imac_vni.imac_mid,
         &VAR_13->imac_vni.imac_lsb, VAR_17);


 if (VAR_14 == VAR_2) {
  VAR_13++;
  VAR_12++;


  FUNC_2(VAR_5,
           VAR_7->cmd_data.vlan_mac.target_obj,
           VAR_4, VAR_0,
           &VAR_13->imac_vni.header);


  VAR_13->imac_vni.vni = VAR_16;
  FUNC_1(&VAR_13->imac_vni.imac_msb,
          &VAR_13->imac_vni.imac_mid,
          &VAR_13->imac_vni.imac_lsb, VAR_17);
 }





 FUNC_3(VAR_10->cid, VAR_10->state,
     &VAR_11->header, VAR_12);
}
