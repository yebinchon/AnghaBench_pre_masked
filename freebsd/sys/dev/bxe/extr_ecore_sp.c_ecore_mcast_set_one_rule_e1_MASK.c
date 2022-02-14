
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ecore_mcast_config_data {int mac; } ;
struct mac_configuration_cmd {TYPE_1__* config_table; } ;
struct ecore_raw_obj {int cl_id; int func_id; scalar_t__ rdata; } ;
struct ecore_mcast_obj {struct ecore_raw_obj raw; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_mcast_cmd { ____Placeholder_ecore_mcast_cmd } ecore_mcast_cmd ;
struct TYPE_2__ {int flags; int clients_bit_vector; int pf_id; scalar_t__ vlan_id; int lsb_mac_addr; int middle_mac_addr; int msb_mac_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct bxe_softc *VAR_4,
     struct ecore_mcast_obj *VAR_5, int VAR_6,
     union ecore_mcast_config_data *VAR_7,
     enum ecore_mcast_cmd VAR_8)
{
 struct ecore_raw_obj *VAR_9 = &VAR_5->raw;
 struct mac_configuration_cmd *VAR_10 =
  (struct mac_configuration_cmd *)(VAR_9->rdata);


 if ((VAR_8 == VAR_0) || (VAR_8 == VAR_1)) {
  FUNC_2(&VAR_10->config_table[VAR_6].msb_mac_addr,
          &VAR_10->config_table[VAR_6].middle_mac_addr,
          &VAR_10->config_table[VAR_6].lsb_mac_addr,
          VAR_7->mac);

  VAR_10->config_table[VAR_6].vlan_id = 0;
  VAR_10->config_table[VAR_6].pf_id = VAR_9->func_id;
  VAR_10->config_table[VAR_6].clients_bit_vector =
   FUNC_0(1 << VAR_9->cl_id);

  FUNC_1(VAR_10->config_table[VAR_6].flags,
          VAR_2,
          VAR_3);
 }
}
