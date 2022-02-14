
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_eth_fwd_ctrl_table_index {scalar_t__ vlan_table_out; scalar_t__ tunnel_exist; scalar_t__ vlan_exist; scalar_t__ mac_table_match; scalar_t__ protocol_id; scalar_t__ mac_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct al_eth_fwd_ctrl_table_index *VAR_6, uint32_t VAR_7) {
 if ((VAR_6->vlan_table_out != VAR_4)
  && (VAR_6->vlan_table_out != FUNC_1(VAR_7, 0)))
  return 0;
 if ((VAR_6->tunnel_exist != VAR_2)
  && (VAR_6->tunnel_exist != FUNC_1(VAR_7, 1)))
  return 0;
 if ((VAR_6->vlan_exist != VAR_3)
  && (VAR_6->vlan_exist != FUNC_1(VAR_7, 2)))
  return 0;
 if ((VAR_6->mac_table_match != VAR_1)
  && (VAR_6->mac_table_match != FUNC_1(VAR_7, 3)))
  return 0;
 if ((VAR_6->protocol_id != VAR_5)
  && (VAR_6->protocol_id != FUNC_2(VAR_7, FUNC_0(8,4),4)))
  return 0;
 if ((VAR_6->mac_type != VAR_0)
  && (VAR_6->mac_type != FUNC_2(VAR_7, FUNC_0(10,9),9)))
  return 0;
 return 1;
}
