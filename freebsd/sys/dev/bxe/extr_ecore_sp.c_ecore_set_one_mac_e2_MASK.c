
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* inner_mac; int mac_lsb; int mac_mid; int mac_msb; int header; } ;
union eth_classify_rule_cmd {TYPE_1__ mac; } ;
typedef int uint8_t ;
struct eth_classify_rules_ramrod_data {int header; union eth_classify_rule_cmd* rules; } ;
struct ecore_raw_obj {int state; int cid; int cl_id; scalar_t__ rdata; } ;
struct ecore_vlan_mac_obj {struct ecore_raw_obj raw; } ;
struct TYPE_7__ {int is_inner_mac; int * mac; } ;
struct TYPE_8__ {TYPE_2__ mac; } ;
struct TYPE_9__ {int cmd; unsigned long vlan_mac_flags; TYPE_3__ u; struct ecore_vlan_mac_obj* target_obj; } ;
struct TYPE_10__ {TYPE_4__ vlan_mac; } ;
struct ecore_exeq_elem {TYPE_5__ cmd_data; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct eth_classify_rules_ramrod_data*,int ,int) ;
 int FUNC_2 (struct bxe_softc*,char*,char*,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,unsigned long*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (struct bxe_softc*,int,int *,int ) ;
 int FUNC_6 (struct bxe_softc*,struct ecore_vlan_mac_obj*,int,int ,int *) ;
 int FUNC_7 (int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_8(struct bxe_softc *VAR_9,
     struct ecore_vlan_mac_obj *VAR_10,
     struct ecore_exeq_elem *VAR_11, int VAR_12,
     int VAR_13)
{
 struct ecore_raw_obj *VAR_14 = &VAR_10->raw;
 struct eth_classify_rules_ramrod_data *VAR_15 =
  (struct eth_classify_rules_ramrod_data *)(VAR_14->rdata);
 int VAR_16 = VAR_12 + 1, VAR_17 = VAR_11->cmd_data.vlan_mac.cmd;
 union eth_classify_rule_cmd *VAR_18 = &VAR_15->rules[VAR_12];
 bool VAR_19 = (VAR_17 == VAR_5) ? VAR_8 : VAR_7;
 unsigned long *VAR_20 = &VAR_11->cmd_data.vlan_mac.vlan_mac_flags;
 uint8_t *VAR_21 = VAR_11->cmd_data.vlan_mac.u.mac.mac;
 if (VAR_17 != VAR_6) {
  if (FUNC_3(VAR_2, VAR_20))
   FUNC_5(VAR_9, VAR_19, VAR_21,
          VAR_4);
  else if (FUNC_3(VAR_1, VAR_20))
   FUNC_5(VAR_9, VAR_19, VAR_21,
          VAR_3);
 }


 if (VAR_12 == 0)
  FUNC_1(VAR_15, 0, sizeof(*VAR_15));


 FUNC_6(VAR_9, VAR_10, VAR_19, VAR_0,
          &VAR_18->mac.header);

 FUNC_2(VAR_9, "About to %s MAC %02x:%02x:%02x:%02x:%02x:%02x for Queue %d\n",
    (VAR_19 ? "add" : "delete"), VAR_21[0], VAR_21[1], VAR_21[2], VAR_21[3], VAR_21[4], VAR_21[5], VAR_14->cl_id);


 FUNC_4(&VAR_18->mac.mac_msb,
         &VAR_18->mac.mac_mid,
         &VAR_18->mac.mac_lsb, VAR_21);
 VAR_18->mac.inner_mac =
  FUNC_0(VAR_11->cmd_data.vlan_mac.u.mac.is_inner_mac);


 if (VAR_17 == VAR_6) {
  VAR_18++;
  VAR_16++;


  FUNC_6(VAR_9,
     VAR_11->cmd_data.vlan_mac.target_obj,
           VAR_8, VAR_0,
           &VAR_18->mac.header);


  FUNC_4(&VAR_18->mac.mac_msb,
          &VAR_18->mac.mac_mid,
          &VAR_18->mac.mac_lsb, VAR_21);
  VAR_18->mac.inner_mac =
   FUNC_0(VAR_11->cmd_data.vlan_mac.
           u.mac.is_inner_mac);
 }




 FUNC_7(VAR_14->cid, VAR_14->state, &VAR_15->header,
     VAR_16);
}
