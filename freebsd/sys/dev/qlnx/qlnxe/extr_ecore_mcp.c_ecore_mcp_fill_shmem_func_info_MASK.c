
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef void* u16 ;
struct public_func {int config; int mac_upper; int mac_lower; int ovlan_stag; scalar_t__ mtu_size; scalar_t__ fcoe_wwn_node_name_upper; scalar_t__ fcoe_wwn_node_name_lower; scalar_t__ fcoe_wwn_port_name_upper; scalar_t__ fcoe_wwn_port_name_lower; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_function_info {int pause_on_host; int wwn_port; int wwn_node; void* ovlan; void** mac; int bandwidth_max; int bandwidth_min; int protocol; void* mtu; } ;
struct TYPE_6__ {scalar_t__ b_wol_support; } ;
struct ecore_hwfn {TYPE_3__ hw_info; TYPE_2__* p_dev; TYPE_1__* mcp_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_5__ {void* wol_config; int wol_mac; } ;
struct TYPE_4__ {struct ecore_mcp_function_info func_info; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,int,int ,int ,int ,void*,void*,void*,void*,void*,void*,unsigned long long,unsigned long long,void*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (int *,void**,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,struct public_func*,int ) ;
 scalar_t__ FUNC_7 (struct ecore_hwfn*,struct public_func*,struct ecore_ptt*,int *) ;
 scalar_t__ FUNC_8 (struct ecore_hwfn*) ;
 int FUNC_9 (struct ecore_hwfn*,struct public_func*) ;

enum _ecore_status_t FUNC_10(struct ecore_hwfn *VAR_13,
          struct ecore_ptt *VAR_14)
{
 struct ecore_mcp_function_info *VAR_15;
 struct public_func VAR_16;

 FUNC_6(VAR_13, VAR_14, &VAR_16,
     FUNC_3(VAR_13));
 VAR_15 = &VAR_13->mcp_info->func_info;

 VAR_15->pause_on_host = (VAR_16.config &
          VAR_10) ? 1 : 0;

 if (FUNC_7(VAR_13, &VAR_16, VAR_14,
          &VAR_15->protocol)) {
  FUNC_0(VAR_13, "Unknown personality %08x\n",
         (u32)(VAR_16.config & VAR_11));
  return VAR_1;
 }

 FUNC_9(VAR_13, &VAR_16);

 if (VAR_16.mac_upper || VAR_16.mac_lower) {
  VAR_15->mac[0] = (u8)(VAR_16.mac_upper >> 8);
  VAR_15->mac[1] = (u8)(VAR_16.mac_upper);
  VAR_15->mac[2] = (u8)(VAR_16.mac_lower >> 24);
  VAR_15->mac[3] = (u8)(VAR_16.mac_lower >> 16);
  VAR_15->mac[4] = (u8)(VAR_16.mac_lower >> 8);
  VAR_15->mac[5] = (u8)(VAR_16.mac_lower);


  FUNC_4(&VAR_13->p_dev->wol_mac, VAR_15->mac, VAR_8);

 } else {

  FUNC_1(VAR_13, 0, "MAC is 0 in shmem\n");
 }


 VAR_15->wwn_port = (u64)VAR_16.fcoe_wwn_port_name_lower |
    (((u64)VAR_16.fcoe_wwn_port_name_upper) << 32);
 VAR_15->wwn_node = (u64)VAR_16.fcoe_wwn_node_name_lower |
    (((u64)VAR_16.fcoe_wwn_node_name_upper) << 32);

 VAR_15->ovlan = (u16)(VAR_16.ovlan_stag & VAR_9);

 VAR_15->mtu = (u16)VAR_16.mtu_size;

 VAR_13->hw_info.b_wol_support = VAR_6;
 VAR_13->p_dev->wol_config = (u8)VAR_4;
 if (FUNC_8(VAR_13)) {
  u32 VAR_17 = 0, VAR_18 = 0;
  enum _ecore_status_t VAR_19;

  VAR_19 = FUNC_5(VAR_13, VAR_14,
       VAR_0, 0, &VAR_17, &VAR_18);
  if (VAR_19 != VAR_5)
   return VAR_19;
  if (VAR_17 == VAR_12)
   VAR_13->hw_info.b_wol_support = VAR_7;
 }

 FUNC_2(VAR_13, (VAR_3 | VAR_2),
     "Read configuration from shmem: pause_on_host %02x protocol %02x BW [%02x - %02x] MAC %02x:%02x:%02x:%02x:%02x:%02x wwn port %llx node %llx ovlan %04x wol %02x\n",
     VAR_15->pause_on_host, VAR_15->protocol,
     VAR_15->bandwidth_min, VAR_15->bandwidth_max,
     VAR_15->mac[0], VAR_15->mac[1], VAR_15->mac[2],
     VAR_15->mac[3], VAR_15->mac[4], VAR_15->mac[5],
     (unsigned long long)VAR_15->wwn_port, (unsigned long long)VAR_15->wwn_node, VAR_15->ovlan,
     (u8)VAR_13->hw_info.b_wol_support);

 return VAR_5;
}
