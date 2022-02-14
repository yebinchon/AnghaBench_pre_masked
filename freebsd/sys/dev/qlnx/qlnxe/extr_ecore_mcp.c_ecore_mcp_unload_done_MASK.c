
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wol_mac ;
typedef int u8 ;
struct mcp_mac {int mac_upper; int mac_lower; int data_src_size; struct mcp_mac* p_data_src; int cmd; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {int mac_upper; int mac_lower; int data_src_size; struct ecore_mcp_mb_params* p_data_src; int cmd; } ;
struct ecore_hwfn {TYPE_1__* p_dev; } ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ wol_config; int* wol_mac; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int,int,int,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct mcp_mac*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct mcp_mac*) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_4,
        struct ecore_ptt *VAR_5)
{
 struct ecore_mcp_mb_params VAR_6;
 struct mcp_mac VAR_7;

 FUNC_1(&VAR_6, sizeof(VAR_6));
 VAR_6.cmd = VAR_0;


 if (VAR_4->p_dev->wol_config == VAR_3) {
  u8 *VAR_8 = VAR_4->p_dev->wol_mac;

  FUNC_1(&VAR_7, sizeof(VAR_7));
  VAR_7.mac_upper = VAR_8[0] << 8 | VAR_8[1];
  VAR_7.mac_lower = VAR_8[2] << 24 | VAR_8[3] << 16 |
        VAR_8[4] << 8 | VAR_8[5];

  FUNC_0(VAR_4, (VAR_2 | VAR_1),
      "Setting WoL MAC: %02x:%02x:%02x:%02x:%02x:%02x --> [%08x,%08x]\n",
      VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3], VAR_8[4],
      VAR_8[5], VAR_7.mac_upper, VAR_7.mac_lower);

  VAR_6.p_data_src = &VAR_7;
  VAR_6.data_src_size = sizeof(VAR_7);
 }

 return FUNC_2(VAR_4, VAR_5, &VAR_6);
}
