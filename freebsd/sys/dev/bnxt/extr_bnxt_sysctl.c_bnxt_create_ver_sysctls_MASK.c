
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct bnxt_ver_info {size_t chip_type; int ver_ctx; int chip_bond_id; int chip_metal; int chip_rev; int chip_num; int phy_partnumber; int phy_vendor; int roce_fw_name; int netctrl_fw_name; int mgmt_fw_name; int hwrm_fw_name; int phy_ver; int roce_fw_ver; int netctrl_fw_ver; int mgmt_fw_ver; int hwrm_fw_ver; int driver_hwrm_if_ver; int hwrm_if_ver; struct sysctl_oid* ver_oid; } ;
struct bnxt_softc {struct bnxt_ver_info* ver_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,char*,int,struct bnxt_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int,int ,int ,char*) ;
 int FUNC_2 (int *,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_3 (int *,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_4 (struct sysctl_oid*) ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_5(struct bnxt_softc *VAR_9)
{
 struct bnxt_ver_info *VAR_10 = VAR_9->ver_info;
 struct sysctl_oid *VAR_11 = VAR_10->ver_oid;

 if (!VAR_11)
  return VAR_3;

 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "hwrm_if", VAR_0, VAR_10->hwrm_if_ver, 0,
     "HWRM interface version");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "driver_hwrm_if", VAR_0, VAR_10->driver_hwrm_if_ver, 0,
     "HWRM firmware version");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "hwrm_fw", VAR_0, VAR_10->hwrm_fw_ver, 0,
     "HWRM firmware version");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "mgmt_fw", VAR_0, VAR_10->mgmt_fw_ver, 0,
     "management firmware version");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "netctrl_fw", VAR_0, VAR_10->netctrl_fw_ver, 0,
     "network control firmware version");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "roce_fw", VAR_0, VAR_10->roce_fw_ver, 0,
     "RoCE firmware version");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "phy", VAR_0, VAR_10->phy_ver, 0,
     "PHY version");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "hwrm_fw_name", VAR_0, VAR_10->hwrm_fw_name, 0,
     "HWRM firmware name");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "mgmt_fw_name", VAR_0, VAR_10->mgmt_fw_name, 0,
     "management firmware name");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "netctrl_fw_name", VAR_0, VAR_10->netctrl_fw_name, 0,
     "network control firmware name");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "roce_fw_name", VAR_0, VAR_10->roce_fw_name, 0,
     "RoCE firmware name");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "phy_vendor", VAR_0, VAR_10->phy_vendor, 0,
     "PHY vendor name");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "phy_partnumber", VAR_0, VAR_10->phy_partnumber, 0,
     "PHY vendor part number");
 FUNC_2(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "chip_num", VAR_0, &VAR_10->chip_num, 0, "chip number");
 FUNC_3(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "chip_rev", VAR_0, &VAR_10->chip_rev, 0, "chip revision");
 FUNC_3(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "chip_metal", VAR_0, &VAR_10->chip_metal, 0, "chip metal number");
 FUNC_3(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "chip_bond_id", VAR_0, &VAR_10->chip_bond_id, 0,
     "chip bond id");
 FUNC_1(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "chip_type", VAR_0, VAR_10->chip_type > VAR_4 ?
     VAR_6[VAR_4] : VAR_6[VAR_10->chip_type], 0,
     "RoCE firmware name");
 FUNC_0(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "package_ver", VAR_2|VAR_0, VAR_9, 0,
     VAR_8, "A",
     "currently installed package version");
 FUNC_0(&VAR_10->ver_ctx, FUNC_4(VAR_11), VAR_5,
     "hwrm_min_ver", VAR_2|VAR_1, VAR_9, 0,
     VAR_7, "A",
     "minimum hwrm API vesion to support");

 return 0;
}
