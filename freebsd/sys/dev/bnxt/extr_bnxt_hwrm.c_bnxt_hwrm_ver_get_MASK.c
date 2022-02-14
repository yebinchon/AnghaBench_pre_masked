
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct hwrm_ver_get_output {int hwrm_intf_maj; int hwrm_intf_min; int hwrm_intf_upd; int hwrm_fw_maj; int hwrm_fw_min; int hwrm_fw_bld; char const* hwrm_fw_name; scalar_t__ mgmt_fw_maj; scalar_t__ mgmt_fw_min; scalar_t__ mgmt_fw_bld; char const* mgmt_fw_name; scalar_t__ netctrl_fw_maj; scalar_t__ netctrl_fw_min; scalar_t__ netctrl_fw_bld; char const* netctrl_fw_name; scalar_t__ roce_fw_maj; scalar_t__ roce_fw_min; scalar_t__ roce_fw_bld; char const* roce_fw_name; int dev_caps_cfg; scalar_t__ def_req_timeout; scalar_t__ max_req_win_len; int chip_platform_type; int chip_bond_id; int chip_metal; int chip_rev; scalar_t__ chip_num; } ;
struct hwrm_ver_get_input {int hwrm_intf_upd; int hwrm_intf_min; int hwrm_intf_maj; int member_0; } ;
struct TYPE_3__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int hwrm_cmd_timeo; int flags; void* hwrm_max_req_len; TYPE_2__* ver_info; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;
struct TYPE_4__ {int hwrm_if_major; int hwrm_if_minor; int hwrm_if_update; int chip_type; int chip_bond_id; int chip_metal; int chip_rev; void* chip_num; int roce_fw_name; int roce_fw_ver; int netctrl_fw_name; int netctrl_fw_ver; int mgmt_fw_name; int mgmt_fw_ver; int hwrm_fw_name; int driver_hwrm_if_ver; int hwrm_fw_ver; int hwrm_if_ver; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char const* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_ver_get_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_ver_get_input*,int ) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,char*,int,int,int) ;
 int FUNC_7 (int ,char const*,int ) ;

int
FUNC_8(struct bnxt_softc *VAR_11)
{
 struct hwrm_ver_get_input VAR_12 = {0};
 struct hwrm_ver_get_output *VAR_13 =
     (void *)VAR_11->hwrm_cmd_resp.idi_vaddr;
 int VAR_14;
 const char VAR_15[] = "<not installed>";
 const char VAR_16[] = "<N/A>";
 uint32_t VAR_17;

 VAR_11->hwrm_max_req_len = VAR_3;
 VAR_11->hwrm_cmd_timeo = 1000;
 FUNC_3(VAR_11, &VAR_12, VAR_8);

 VAR_12.hwrm_intf_maj = VAR_4;
 VAR_12.hwrm_intf_min = VAR_5;
 VAR_12.hwrm_intf_upd = VAR_7;

 FUNC_0(VAR_11);
 VAR_14 = FUNC_2(VAR_11, &VAR_12, sizeof(VAR_12));
 if (VAR_14)
  goto fail;

 FUNC_6(VAR_11->ver_info->hwrm_if_ver, VAR_2, "%d.%d.%d",
     VAR_13->hwrm_intf_maj, VAR_13->hwrm_intf_min, VAR_13->hwrm_intf_upd);
 VAR_11->ver_info->hwrm_if_major = VAR_13->hwrm_intf_maj;
 VAR_11->ver_info->hwrm_if_minor = VAR_13->hwrm_intf_min;
 VAR_11->ver_info->hwrm_if_update = VAR_13->hwrm_intf_upd;
 FUNC_6(VAR_11->ver_info->hwrm_fw_ver, VAR_2, "%d.%d.%d",
     VAR_13->hwrm_fw_maj, VAR_13->hwrm_fw_min, VAR_13->hwrm_fw_bld);
 FUNC_7(VAR_11->ver_info->driver_hwrm_if_ver, VAR_6,
     VAR_2);
 FUNC_7(VAR_11->ver_info->hwrm_fw_name, VAR_13->hwrm_fw_name,
     VAR_1);

 if (VAR_13->mgmt_fw_maj == 0 && VAR_13->mgmt_fw_min == 0 &&
     VAR_13->mgmt_fw_bld == 0) {
  FUNC_7(VAR_11->ver_info->mgmt_fw_ver, VAR_16, VAR_2);
  FUNC_7(VAR_11->ver_info->mgmt_fw_name, VAR_15, VAR_1);
 }
 else {
  FUNC_6(VAR_11->ver_info->mgmt_fw_ver, VAR_2,
      "%d.%d.%d", VAR_13->mgmt_fw_maj, VAR_13->mgmt_fw_min,
      VAR_13->mgmt_fw_bld);
  FUNC_7(VAR_11->ver_info->mgmt_fw_name, VAR_13->mgmt_fw_name,
      VAR_1);
 }
 if (VAR_13->netctrl_fw_maj == 0 && VAR_13->netctrl_fw_min == 0 &&
     VAR_13->netctrl_fw_bld == 0) {
  FUNC_7(VAR_11->ver_info->netctrl_fw_ver, VAR_16,
      VAR_2);
  FUNC_7(VAR_11->ver_info->netctrl_fw_name, VAR_15,
      VAR_1);
 }
 else {
  FUNC_6(VAR_11->ver_info->netctrl_fw_ver, VAR_2,
      "%d.%d.%d", VAR_13->netctrl_fw_maj, VAR_13->netctrl_fw_min,
      VAR_13->netctrl_fw_bld);
  FUNC_7(VAR_11->ver_info->netctrl_fw_name, VAR_13->netctrl_fw_name,
      VAR_1);
 }
 if (VAR_13->roce_fw_maj == 0 && VAR_13->roce_fw_min == 0 &&
     VAR_13->roce_fw_bld == 0) {
  FUNC_7(VAR_11->ver_info->roce_fw_ver, VAR_16, VAR_2);
  FUNC_7(VAR_11->ver_info->roce_fw_name, VAR_15, VAR_1);
 }
 else {
  FUNC_6(VAR_11->ver_info->roce_fw_ver, VAR_2,
      "%d.%d.%d", VAR_13->roce_fw_maj, VAR_13->roce_fw_min,
      VAR_13->roce_fw_bld);
  FUNC_7(VAR_11->ver_info->roce_fw_name, VAR_13->roce_fw_name,
      VAR_1);
 }
 VAR_11->ver_info->chip_num = FUNC_4(VAR_13->chip_num);
 VAR_11->ver_info->chip_rev = VAR_13->chip_rev;
 VAR_11->ver_info->chip_metal = VAR_13->chip_metal;
 VAR_11->ver_info->chip_bond_id = VAR_13->chip_bond_id;
 VAR_11->ver_info->chip_type = VAR_13->chip_platform_type;

 if (VAR_13->max_req_win_len)
  VAR_11->hwrm_max_req_len = FUNC_4(VAR_13->max_req_win_len);
 if (VAR_13->def_req_timeout)
  VAR_11->hwrm_cmd_timeo = FUNC_4(VAR_13->def_req_timeout);

 VAR_17 = FUNC_5(VAR_13->dev_caps_cfg);
 if ((VAR_17 & VAR_10) &&
     (VAR_17 & VAR_9))
  VAR_11->flags |= VAR_0;

fail:
 FUNC_1(VAR_11);
 return VAR_14;
}
